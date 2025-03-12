#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n+1,vector<int>(m+1,0));
    vector<vector<int>>presum(n+1,vector<int>(m+1,0));

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            presum[i][j] = arr[i][j] + presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<presum[i][j]<<" ";
        }
        cout<<"\n";
    }
    int r1, c1, r2, c2;
    cin>>r1>>c1>>r2>>c2;
    r1+=1, c1+=1, r2+=1, c2+=1;
    int sum = 0;
    sum+=presum[r2][c2] - presum[r1-1][c2] - presum[r2][c1-1] + presum[r1-1][c1-1];
    cout<<sum;


}
