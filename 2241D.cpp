#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){

    int n;
    cin>>n;
    vector<int>a(n), b(n);

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    ll cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] <= b[i]){
            cnt += b[i] - a[i];
        }
        else if(a[i] - b[i] <= cnt){
            cnt -= a[i] - b[i];
        }
        else if(a[i] - b[i] > cnt){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--){
        solve();
    }


    return 0;
}
