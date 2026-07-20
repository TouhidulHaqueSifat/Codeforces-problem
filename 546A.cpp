#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, k;
    cin>>n>>w>>k;

    long long int ans = 0;
    for(int i=1; i<=k; i++){
        ans += i*n;
    }
    if (ans < w){
        cout<< 0<< "\n";
    }
    else cout<<ans - w<<"\n";
}
