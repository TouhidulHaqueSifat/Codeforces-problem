#include<bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n, k; cin >> n >> k;

	if (n > 1 && k == n - 1) {
		cout << -1 << '\n';
		return;
	}

	k = n - k;
	int c0 = (n + 1) / 2, c1 = n / 2;

	for (int i = 1; i <= k; ++i) {
		if (i & 1) {
			if (i + 2 > k) {
				while (c0--) cout << 0;
			}
			else {
				--c0;
				cout << 0;
			}
		}
		else {
			if (i + 2 > k) {
				while (c1--) cout << 1;
			}
			else {
				--c1;
				cout << 1;
			}
		}
	}
	cout << '\n';

}

int main()
{
   fast_io();

   int t;
   cin>>t;
   while(t--){
    solve();
   }
   return 0;
}
