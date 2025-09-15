#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;


    vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    int cnt = 0;
    cnt = m+n;

    cout<<cnt<<"\n";
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
