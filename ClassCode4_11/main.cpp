#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Elephant {
private:
    double * m;
public:
    Elephant(){
    cout << " thing made\n";
}
    ~Elephant() {
    delete [] m;
}
};

int main() {
    vector<int> a;
    vector<string> b;
    vector<double> c;
    vector<Elephant> d;

    a.push_back(3);
    a.push_back(5);

    b.push_back("hello");
    b.push_back("test");
    b.push_back("last");

    for(int i = 0; i <a.size(); i++)
        cout << a[i] << ' ';
    cout << '\n';

    for(vector<int>::iterator i = a.begin(); i != a.end(); ++i)
        cout << *i << ' ';
    cout << '\n';


    for(auto x : a){

    }

    return 0;
}