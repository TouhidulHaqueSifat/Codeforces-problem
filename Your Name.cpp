#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;

    map<char, int>first, second;
    for(int i=0; i<n; i++){
        first[s[i]]++;
        second[t[i]]++;
    }
    int flag = 1;
    for(int i=0; i<first.size(); i++){
        if(first[i] != second[i]){
           flag = 0;
           break;
        }

    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--){
        solve();
    }
    return 0;
}



