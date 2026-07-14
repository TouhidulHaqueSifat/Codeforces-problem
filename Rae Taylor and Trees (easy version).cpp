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
    vector<int>p1(n),p2(n);
    p1[0] = arr[0];
    for(int i=1; i<n; i++){
        p1[i] = min(p1[i-1], arr[i]);
    }
    p2[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        p2[i] = max(p2[i+1], arr[i]);
    }
    for(int i=0; i<n-1; i++){
        if(p1[i] > p2[i+1]){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
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
