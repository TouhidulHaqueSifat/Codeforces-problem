#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    set<int>s;
    for(auto it:arr){

        if(s.count(it)){
            cout<<"YES"<<"\n";
            return;
        }
        s.insert(it);
    }
    cout<<"NO"<<"\n";
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
