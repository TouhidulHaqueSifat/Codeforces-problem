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
    sort(arr.begin(), arr.end());
    int ans1=0,ans2 = 0;
    if(n >= 2){
        ans1 = (arr[n-1] + arr[n-2])/ 2;
    }
    ans2 = (arr[n-1]) / 1;
    int ans = 0;
    ans = max(ans1, ans2);
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
