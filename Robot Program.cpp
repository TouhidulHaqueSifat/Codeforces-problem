#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,k;
    cin>>n>>x>>k;
    vector<char>ch(n);
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    int i=0,j=1, cnt = 0;
    //cout<<x<<"\n";
    while(j<=k)
    {

        if(ch[i] == 'L')
        {
            x = x-1;
            //cout<<x<<"\n";
        }
        if(ch[i] == 'R')
        {
            x = x+1;
            //cout<<x<<"\n";
        }
        if(x == 0) cnt++;
        i++;
        j++;
        if(i == n or x == 0)
        {
            i = 0;
        }

    }
    cout<<cnt<<"\n";
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
