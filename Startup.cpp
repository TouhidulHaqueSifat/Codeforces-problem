#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
         map<int,int>mp;
         vector<int> arr;
         int ans = 0;
        while(k--){
            int b,c;
            cin>>b>>c;
            mp[b] += c;

        }
        for(auto it:mp){
            arr.push_back( it.second);

        }
        sort(arr.rbegin(), arr.rend());
         for (int i = 0; i < min(n, (int)arr.size()); ++i) {
            ans+= arr[i];
        }
        cout<<ans<<"\n";


    }
    return 0;

}
