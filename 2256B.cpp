#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

bool tryCandidate(string &s, int n, char firstChar, char secondChar) {

    string candidate;
    candidate += firstChar;
    if (n > 1) candidate += secondChar;

    for (int i = 2; i < n; i++) {
        char twoBack = candidate[i - 2];
        char next = (twoBack == '0') ? '1' : '0';
        candidate += next;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] != '?' && s[i] != candidate[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int validCount = 0;

        if (tryCandidate(s, n, '0', '0')) validCount++;
        if (tryCandidate(s, n, '0', '1')) validCount++;
        if (tryCandidate(s, n, '1', '0')) validCount++;
        if (tryCandidate(s, n, '1', '1')) validCount++;

        cout << (validCount % MOD) << "\n";
    }

    return 0;
}
