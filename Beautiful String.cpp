#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;

    string s;
    cin>>n;
    cin>>s;
    vector<int>arr;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            arr.push_back(i+1);
        }
    }
    cout<<arr.size();
    cout<<"\n";
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
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
