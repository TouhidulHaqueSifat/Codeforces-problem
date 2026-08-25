#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];
    
    vector<vector<long long>> a(n + 1, vector<long long>(m));
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int min_ans = m; 
    vector<long long> best;
    
    for(int k = n; k >= 1; k--) {
        for(int j = 0; j < m; j++) {
            best.push_back(a[k][j]);
        }
        
        sort(best.rbegin(), best.rend());
        
        if ((int)best.size() > m) {
            best.resize(m);
        }
        
        long long current_sum = 0;
        int pieces = 0;
        
        for(long long val : best) {
            current_sum += val;
            pieces++;
            if (current_sum >= v[k]) {
                min_ans = min(min_ans, pieces);
                break;
            }
        }
    }
    
    cout << min_ans << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}