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
    vector<int>freq(21,0);
    for(int i=0; i<n; i++){

        freq[arr[i]]++;

    }
    vector<int>temp(n);
    int cnt = 0;
    for(int i=0; i<21;i++){
        if(freq[i] >=2){
            temp.push_back(freq[i]);
        }

    }
    for(auto it:temp){
        cnt+=it/2;

    }

    cout<<cnt<<"\n";
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
