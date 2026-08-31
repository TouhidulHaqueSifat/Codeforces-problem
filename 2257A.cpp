#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<bool> available(26);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        available[s[0] - 'a'] = true;
    }

    bool ok = true;
    for (int i = 0; i < m; ++i) {
        string abbreviation;
        cin >> abbreviation;
        for (auto c : abbreviation) {
            if (!available[c - 'A']) {
                ok = false;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
