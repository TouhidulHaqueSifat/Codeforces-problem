#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(auto it:arr)
        {
            sum+=it;
        }
        if(sum == n*x) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
