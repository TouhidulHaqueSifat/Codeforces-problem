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
    int ans = __gcd(arr[0], arr[n-1]);
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
