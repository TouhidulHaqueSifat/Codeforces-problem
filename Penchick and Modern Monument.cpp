#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    priority_queue<int>pq;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_val = *max_element(arr.begin(), arr.end());
    vector<int>mp(max_val+1,0);
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto it: mp){
        pq.push(it);
    }
    int top = pq.top();
    pq.pop();
    cout<<n-top<<"\n";
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
