// hwRegex
//I pledge my honor I have abided by the Stevens Honor System
//Devin Belmar 5/1/19

#include <iostream>
#include <regex>

using namespace std;

string s = R"(
Find (and display) the occurrence of every capitalized word. Every
word starting a sentence is capitalized, but so are proper names like
John or India.

Also, print out all words that are all caps like MATLAB and FORTRAN.
Do we need to deal with apostrophes, like "Teacher's pet?"
)";

int main() {
    regex r( R"(([A-Z])\w+)");

    smatch m;

    cout << "Target sequence: " << s << endl;
    cout << "The following matches and submatches were found:" << endl;

    while (regex_search (s,m,r)) {
        for (auto x : m)
            cout << x << "\t";
        cout << endl;
        s = m.suffix().str();
    }
    return 0;
}