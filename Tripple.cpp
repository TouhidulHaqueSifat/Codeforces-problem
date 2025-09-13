#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int, int>m;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        m[arr[i]]++;
    }
    int maxim = 0;
    for(auto it: m){

        if(it.second >= 3){
            maxim = it.first;
            break;
        }
    }
    cout<<(maxim == 0 ? -1 : maxim)<<"\n";
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
