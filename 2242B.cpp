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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> pref1(n), pref2(n);

        // Build prefix sums
        for (int i = 0; i < n; i++) {
            int v1, v2;

            if (a[i] == 1) {
                v1 = 1;
                v2 = 1;
            } else if (a[i] == 2) {
                v1 = -1;
                v2 = 1;
            } else { // a[i] == 3
                v1 = -1;
                v2 = -1;
            }

            if (i == 0) {
                pref1[i] = v1;
                pref2[i] = v2;
            } else {
                pref1[i] = pref1[i - 1] + v1;
                pref2[i] = pref2[i - 1] + v2;
            }
        }

        // suffixMax[i] = maximum pref2 from i to n-2
        vector<int> suffixMax(n);

        suffixMax[n - 2] = pref2[n - 2];
        for (int i = n - 3; i >= 0; i--) {
            suffixMax[i] = max(pref2[i], suffixMax[i + 1]);
        }

        bool ok = false;

        // End of left part
        for (int i = 0; i <= n - 3; i++) {
            if (pref1[i] >= 0 && suffixMax[i + 1] >= pref2[i]) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
