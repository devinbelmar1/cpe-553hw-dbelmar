#include <iostream>
#include <string>
#include <memory.h>

using namespace std;
template<typename T>
class GrowArray {
private:
    int capacity;
    int len;
    T* data;
    // this function should double the size of the block and be called whenever add
    // has no more room
    void grow() {
        capacity*=2;
        len*=2;
        this = GrowArray(*this);
    }
public:
    GrowArray(): data(nullptr), len(0){}
    GrowArray(int initialCapacity) : capacity(initialCapacity), data() {}
    ~GrowArray() { delete [] data; }
    GrowArray(const GrowArray& orig) : len(orig.len), data(new T[len]) {
        for (int i = 0; i < len; i++)
            data[i] = orig.data[i];
    }

    GrowArray& operator =(const GrowArray& orig) {
        GrowArray copy(orig);
        this->len = orig.len;
        swap(this->data, copy.data);
        return *this;
    }

    GrowArray(GrowArray&& orig): len(orig.len), data(orig.data) {
        orig.data = nullptr;
    }

    void add(const T& v) {
        T* old = data;
        data = new T[len+1];
        for (int i = 0; i < len; i++)
            data[i] = old[i];
        data[len] = v;
        delete [] old;
        len++;
    }
    friend ostream& operator <<(ostream& s, const GrowArray& a) {
        for (int i = 0; i < a.len; i++)
            s << a.data[i] << ' ';
        return s;
    }
    T operator [](int i) const {
        if (i >= len)
            throw "Index out of bounds";
        return data[i];
    }

    T& operator [](int i) {
        if (i >= len)
            throw "Index out of bounds";
        return data[i];
    }
};

int main() {
    GrowArray<int> a(10);
    for (int i = 0; i < 10; i++)
        a.add(i);
    cout << a << '\n';
}