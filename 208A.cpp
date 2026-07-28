#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string tmp;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s.substr(i, 3) == "WUB") {
            tmp += ' ';
            i += 2;
        } else {
            tmp += s[i];
        }
    }
    istringstream iss(tmp);
    string word;
    vector<string> words;
    while (iss >> word) words.push_back(word);
    for (int i = 0; i < (int)words.size(); i++) {
        cout << words[i];
        if (i + 1 < (int)words.size()) cout << " ";
    }
    cout << endl;
    return 0;
}
