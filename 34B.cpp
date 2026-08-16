#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> negative;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < 0) {
            negative.push_back(x);
        }
    }

    
    sort(negative.begin(), negative.end());

    int ans = 0;

   
    for (int i = 0; i < min(m, (int)negative.size()); i++) {
        ans += -negative[i];
    }

    cout << ans << '\n';

    return 0;
}