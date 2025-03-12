
/*void solve()
{
    int k;cin>>k;
    vector<int>arr(k);
    for(int i=0; i<k;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int n = k - 2;
    int falg = 0;
    int ans = 0;
    auto first = arr.begin();
    auto last = arr.end();
    for(int i=0;i<n;i++){
        int mid = n / arr[i];
        ans = mid;
        if(n%mid == 0){
            auto get = find(first,last,mid);
            if(get!=last){
                cout<<arr[i]<<" "<<mid<<"\n";
                break;
            }
            else{
                continue;
            }
        }
    }


}*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int k;
    cin>>k;
    vector<int>arr(k);
    for(int i=0; i<k;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(auto it:arr){
        mp[it] = 1;
    }
    int n = k-2;
    for(int i=1;i<=k;i++){
       if(n%i==0) {
            if(mp[i] && mp[n/i]){
                cout<<i<<" "<<(n/i)<<"\n";
                break;
            }

       }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
