
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
    priority_queue<int>pq;
    int i=0, j=1;
    while(j < n){
        pq.push(abs(arr[i] - arr[j]));
        i += 2, j+=2;
    }
    cout<<pq.top()<<"\n";
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
