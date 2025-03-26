#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int cnt[10] = {};
        bool flag = 0;
        for(int i=0;i<n;i++)
        {
           int dig;
           cin>>dig;
           cnt[dig]++;
           if(cnt[0]>=3 && cnt[1]>=1 && cnt[2]>=2 && cnt[3]>=1 && cnt[5]>=1 && !flag)
           {
               cout<<i+1<<"\n";
               flag = 1;

           }
        }
        if(!flag) cout<<0<<"\n";
    }
}
