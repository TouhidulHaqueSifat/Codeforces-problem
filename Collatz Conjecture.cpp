#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k,x;
    cin>>k>>x;
    for(int i=0;i<k;i++){
        x = x*2;
    }
    cout<<x<<"\n";
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
