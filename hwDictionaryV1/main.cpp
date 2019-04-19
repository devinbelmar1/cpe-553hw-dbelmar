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

class WordTree {
private:

public:
    map<string,int> words;
    WordTree() {}
    ~WordTree() {}
    void readWords(string loc) {
        ifstream fin(loc);
        string s;
        while((s=getNext(fin)) != "") {
            ++words[s];
        }
    }
    string getNext(istream &in){
        char c;
        string ans = "";
        c = in.get();
        while(!isalpha(c) && !in.eof()) { //handles non alphabetical chars and the end of the file
            c = in.get();
            //cout << c << " 1\n";
        }
        while(isalpha(c)) { //handles hyphenated words and alphabetical characters
            ans.push_back(tolower(c));
            c = in.get();
            //cout << c << " 2\n";
        }
        //cout << ans << '\n';
        return ans;
    }
    friend ostream& operator <<(ostream& s, WordTree& w) {
        for(map<string,int>::iterator it = w.words.begin(); it != w.words.end(); ++it) {
            s << it->first << ' ' << it->second << endl;
        }
        s << ' ';
        return s;
    }
};




int main() {
    WordTree dict;

    dict.readWords("C:\\Users\\devin\\Downloads\\cpe-553hw-dbelmar\\WordCounter\\input.txt");

    cout << dict << endl;

    return 0;
}