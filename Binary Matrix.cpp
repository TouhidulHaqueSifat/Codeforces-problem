#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n, vector<int>(m));
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<m; j++)
            {
               arr[i][j]=s[j] - '0';
            }
        }
        int r=0,c=0;
        for(int i=0; i<n; i++)
        {
            int sum = 0;
            for(int j=0; j<m; j++)
            {
                sum ^= arr[i][j];
            }
            if(sum) r++;
        }
        for(int j=0; j<m; j++)
        {
            int sum = 0;
            for(int i=0; i<n; i++)
            {
                sum ^= arr[i][j];
            }
            if(sum) c++;
        }
        int ans = 0;
        ans = max(r,c);
        cout<<ans<<"\n";
    }

}
