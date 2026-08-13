#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, cur = 0;
    cin >> n;
    multiset<int> b;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }
    
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        auto it = b.lower_bound(1 - cur);
        if(it == b.end()) return void(cout << -1 << '\n');
        cur += *it;
        b.erase(it);
        ans[i] = cur;
    }
    
    for(int i = 0; i < n; i++) cout << ans[i] << " \n"[i == n - 1];
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}