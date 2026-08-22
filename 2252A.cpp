
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
            pr.first = pair_item.first;
            pr.second = pair_item.second;
        }
    }
    int max_occ = pr.second;
    int rem = n - max_occ;
    /*cout<<"Total sum "<<sum<<"\n";
    cout<<"Max_occu "<<max_occ<<" "<<pr.first<<"\n";*/

    if(max_occ >= rem  ){
        max_occ = max_occ - (rem+2);
        if(max_occ <= 0){
          cout<<sum <<"\n";
        }
        else  cout<<sum - (pr.first * max_occ)<<"\n";


    }
    else if(max_occ < rem ){
        cout<<sum <<"\n";
    }
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
