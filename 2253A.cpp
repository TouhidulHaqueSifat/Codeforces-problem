#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int sqrt_root = sqrt(n+1);
    bool flag = false;
    for(int i=2; i<=sqrt_root; i++){
        if((n+1) % i == 0){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";

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
