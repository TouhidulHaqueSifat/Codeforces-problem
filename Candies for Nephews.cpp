#include<bits/stdc++.h>
using namespace std;
int custom_bound(vector<int>&store, int value)
{
    int idx = 0;
    auto it = lower_bound(store.begin(), store.end(), value);
    if(*it == value){
        return *it;
    }
    
    else{
        idx = (it-store.begin());
        return store[idx];
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    
    vector<int>store(101);
    for(int i=1; i<101; i++){
        store.push_back(3*i);
    }
    int get = custom_bound(store,n);
    //cout<<get<<"\n";
    int ans = get - n;
    cout<<ans<<"\n";
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