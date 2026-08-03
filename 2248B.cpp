#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int>a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int j=0; j<m; j++) cin>>b[j];



    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(n < 2*m){
        cout<<"NO"<<"\n";
        return;
    }

    int i = 0;

    while(i < m && a[i] < b[i] && b[i] < a[n-m + i]){
        i++;
    }
    if(i < m) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
