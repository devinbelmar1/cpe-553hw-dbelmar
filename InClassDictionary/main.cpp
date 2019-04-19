#include <iostream>
#include <map>
#include <string>
using namespace std;

class WordTree {
private:
    struct Node {
        map<string, Node*> next;
        uint32_t count;
        Node() { count = 1; }
    };
    Node root;
public:
    WordTree() {}
    void add(const char word[], int len) {

    }
    int skipSpace(const char words[], int start) {
        while (words[start] == ' ') // keep going as long as there are spaces
            start++;
        return start;
    }
    void print(const char words[], int start, int end) {
        for (int i = start; i < end; i++)
            cout<< words[i];
        cout << '\n';
    }
    void readWords(const char words[]) {
        int start = skipSpace(words, 0);
        int end;
        Node* p = &root;
        for (end = start + 1; words[end] != '\0'; end++)
            if (words[end] == ' ') {
                print(words, start, end);
                string s(&words[start], end-start);
                p->next[s] = new Node();
                p = p->next[s];
                add(words + start, end - start);
                start = skipSpace(words, end + 1);
                //at this point should be guaranteed that words[start] is the next word
                end = start;
            }
    }
    friend ostream& operator <<(ostream& s, const WordTree& w) {
        for (const auto& a : w.root.next) {
            s << a.first << ' ';
        }
        s << ' ';
        return s;
    }
};








int main() {
    const char words[] = "  hello   this is  a test";
    const char words2[] = "this is a test C++";
    const char words3[] = "welcome to my house";
    WordTree dict;
    dict.readWords(words);
    dict.readWords(words2);
    dict.readWords(words3);
    cout << dict;

    return 0;
}