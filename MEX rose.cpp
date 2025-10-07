#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>mp(n+1, 0);
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    
    int cnt = 0;
    for(int i=0; i<k; i++){
        if(mp[i] == 0) cnt++;
    }
   
    if(cnt >= mp[k]){
        cout<<cnt<<"\n";
    }
    else{
        cout<<mp[k]<<"\n";
    }
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