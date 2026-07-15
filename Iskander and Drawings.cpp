#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int longest = 0;
        int cur = 0;
 
        for (char c : s) {
            if (c == '#') {
                cur++;
                longest = max(longest, cur);
            } else {
                cur = 0;
            }
        }
 
        if (longest == 0)
            cout << 0 << '\n';
        else
            cout << (longest + 1) / 2 << '\n';
    }
 
    return 0;
}