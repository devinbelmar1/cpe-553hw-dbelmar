/*
 * Devin Belmar 4/18/19
 * Word counting program
 */

#include <iterator>
#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

string getNext(istream &in){
    char c;
    string ans = "";
    c = in.get();
    while(!isalpha(c) && !in.eof()) {
        c = in.get();
        cout << c << " 1\n";
    }
    while(isalpha(c) || ('-' == c)) { //handles hyphenated words
        ans.push_back(tolower(c));
        c = in.get();
        cout << c << " 2\n";
    }
    cout << ans << '\n';
    return ans;
}


int main() {
    map<string,int> words;
    ifstream fin("C:\\Users\\devin\\Downloads\\cpe-553hw-dbelmar\\WordCounter\\input.txt");

    string s;
    while((s=getNext(fin)) != "") {
        ++words[s];
    }


    for(map<string,int>::iterator it = words.begin(); it != words.end(); ++it) {
        cout << it->first << ' ' << it->second << endl;
    }

    return 0;
}