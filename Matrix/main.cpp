/*Devin Belmar
I pledge my honor that I have abided by the stevens honor system.
*/
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class BadSize {
private:
    const char* filename;
    int lineNum;
public:
    BadSize(const char filename[], int lineNum) :
            filename(filename), lineNum(lineNum) {}
    friend ostream& operator <<(ostream& s, const BadSize& b) {
        return s << b.filename << ": " << b.lineNum << " size mismatch";
    }
};

class Matrix {
private:
    int rows, cols;
    double* m;
    static int count;
public:
    Matrix() :rows(0), cols(0), m(new double [1]) {
        m[0] = 0;
    }
    Matrix(int rows, int cols) : rows(rows), cols(cols), m(new double [rows*cols]) {
        for(int i = 0; i < rows*cols; i++) {
            m[i] = 0;
        }
    }
    Matrix(int rows, int cols, double val) : rows(rows), cols(cols), m(new double [rows*cols]) {
        for(int i = 0; i < rows*cols; i++) {
            m[i] = val;
        }
    }
    ~Matrix(){
        delete [] m;
    }
    static int getCount() {
        return count;
    }
    static Matrix identity(int val) {
        Matrix a(val, val);
        for(int i = 0; i < val; i++){
            a.m[(i*val)+i] = 1;
        }
        return a;
    }
    Matrix& operator =(const Matrix& cpy){
        rows = cpy.rows;
        cols = cpy.cols;
        m = (new double[rows*cols]);
        for(int i = 0; i < rows*cols; i++){
            m[i] = cpy.m[i];
        }
    }
    friend Matrix operator *(const Matrix& left, const Matrix& right) {
        int nr = 0, nc = 0, same = 0;
        if (left.rows != right.cols && left.cols != right.rows)
            throw BadSize(__FILE__, __LINE__);
        else if (left.rows == right.cols) {
            nr = right.rows; nc = left.cols;
            same = left.rows;
            Matrix b(nr,nc,0);
            int adj1 = 0, adj2 = 0;
            for(int i = 0; i < nr*nc; i++) {
                for(int j = 0; j < same; j++) {
                    if(i > 0 && i % left.cols == 0)
                        adj1 = i/left.cols;
                    b.m[i] += left.m[j*left.cols + i -(adj1)*left.cols] * right.m[j +(adj1)*right.cols];
                }
            }
            return b;
        }
        else if (right.rows == left.cols) {
            nr = left.rows; nc = right.cols;
            same = right.rows;
            Matrix b(nr,nc,0);
            int adj1 = 0, adj2 = 0;
            for(int i = 0; i < nr*nc ; i++) {
                for (int j = 0; j < same; j++) {
                    if(i > 0 && i % right.cols == 0)
                        adj1 = i/right.cols;
                    b.m[i] += right.m[j*right.cols + i -(adj1)*right.cols] * left.m[j +(adj1)*left.cols];
                }
            }
            return b;
        }
        Matrix b;
        return b;
    }
    friend Matrix operator *(const Matrix& b, double num) {
        Matrix a(b.rows, b.cols);
        for(int i = 0; i < b.rows*b.cols; i++){
            a.m[i] = b.m[i]*num;
        }
        return a;
    }
    double* operator ()(int x, int y){
        double* p = &m[(x-1)*cols+(y-1)];
        return p;
    }
    void operator ()(int x, int y, double z) {
        m[(x-1)*cols+(y-1)] = z;
    }
    //https://stackoverflow.com/questions/77005/how-to-automatically-generate-a-stacktrace-when-my-program-crashes

    friend  Matrix operator +(const Matrix& left, const Matrix& right) {
        Matrix b(left.rows, left.cols);
        if (left.rows != right.rows || left.cols != right.cols)
            throw BadSize(__FILE__, __LINE__);
        else {
            for(int i = 0; i < left.rows*left.cols; i++) {
                b.m[i] = left.m[i] + right.m[i];
            }
        }
        return b;
    }
    friend ostream& operator << (ostream& s, const Matrix& a) {
        for(int i = 0; i < a.rows; i++) {
            for (int j = 0; j < a.cols; j++) {
                s << a.m[i * a.cols + j] << '\t';
            }
            s << '\n';
        }
        return s;
    }
    friend istream& operator >> (istream& s, const Matrix& a) {
        for(int i = 0; i < a.rows; i++) {
            for (int j = 0; j < a.cols; j++) {
                s >> a.m[i * a.cols + j];
            }
        }
        return s;
    }
};

//globally defines the static variable
int Matrix::count = 0;

int main() {
    Matrix m1 = Matrix::identity(4);
    Matrix m2 = m1 * 2.5; // scalar multiplication
    //m2(1,3) = 5.5;
    m2(1,3,5.5);
    Matrix m3 = m1 + m2;
    cout << m3 << '\n';
    Matrix m4 = m3; // copy constructor
    cout << m4 << '\n';
    cin >> m4;
    cout << m4 << '\n';
    // optional: matrix mult 50%

    Matrix m5(2,3, 1.0);
    //m5(1,2) = 2.0;
    m5(1,2,2.0);
    Matrix m6(3, 4, 2.0);
    //m6(2,1) = -1;
    m6(2,1,-1);
    //m6(2,3) = -2;
    m6(2,3,-2);
    Matrix m7 = m5 * m6;
    cout << m7 << '\n';

    return 0;
}
