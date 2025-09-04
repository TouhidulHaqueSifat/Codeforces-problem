#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = n - 1; i >= 0; i -= 2) {
        if (i - 1 >= 0) {
            ans += max(arr[i], arr[i - 1]);
            int mini = min(arr[i], arr[i - 1]);
            arr[i] -= mini;
            arr[i - 1] -= mini;
        } else {
            ans += arr[i];
        }
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
