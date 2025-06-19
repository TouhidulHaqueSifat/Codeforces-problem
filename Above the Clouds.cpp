#include<bits/stdc++.h>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(int i=0; i<n; i++)
    {
        freq[s[i] - 'a']++;
    }
    for(int i=1; i<n-1; i++)
    {
        if(freq[s[i] - 'a'] > 1)
        {
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";

}
int main()
{
    fast_io();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
