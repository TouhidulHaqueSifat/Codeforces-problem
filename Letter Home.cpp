#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //sort(arr.begin(),arr.end());
    int a = arr[0], b = arr[n-1];

    int ans = abs(a-k) <= abs(b-k)? (abs(k-a) + abs(b - a)): (abs(b-k)+abs(b - a));

    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
