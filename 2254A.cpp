#include<bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{

    vector<int> v(3);
    for(int &x : v) cin >> x;
    sort(v.begin(), v.end());
    cout << min(v[2] - v[1], v[1] - v[0]) << endl;

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
