#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> p(n);
    for (auto &val : p) cin >> val;
    
    int g = gcd(x, y);
    bool ok = true;
    
    for (int i = 0; i < n; ++i) {
        if ((p[i] % g) != ((i + 1) % g)) {
            ok = false;
            break;
        }
    }
    
    if (ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    int32_t tc = 1;
    cin >> tc;
    while (tc-- > 0) {
        solve();
    }
    return 0;
}
