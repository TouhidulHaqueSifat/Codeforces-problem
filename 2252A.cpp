
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    if(n == 1){
        cout<<arr[0]<<"\n";
        return;
    }
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    pair<int, int>pr(0,0);
    for (auto& pair_item : mp) {
        if (pair_item.second > pr.second) {
            pr.first = pair_item.first;    // The actual number
            pr.second = pair_item.second;  // How many times it appeared
        }
    }
    int max_occ = pr.second;
    //cout<<max_occ<<"\n";
    if(max_occ < n ){
        cout<<sum<<"\n";
    }
    /*else if(max_occ == n-1){
        cout<<sum - pr.first<<"\n";
    }*/
    else{
        cout<<arr[0] + arr[1]<<"\n";
    }


}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
