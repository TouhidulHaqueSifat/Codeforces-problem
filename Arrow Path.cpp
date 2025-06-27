
#include<bits/stdc++.h>
using namespace std;

bool solve()
{
    long long int n;
        cin >> n;
        char arr[2][n];
        string s;
        cin>>s;

        for(int i=0; i<n;i++)
        {
            arr[0][i]=s[i];
        }
        cin>>s;
        for(int i=0; i<n;i++)
        {
            arr[1][i] = s[i];
        }
        if(arr[1][n-2]=='<')
        {
            return false;
        }
        long long int x=1;
        long long int y = n-2;
        while(y>0)
        {
            if(arr[(x+1)%2][y-1]=='>')
            {
                x = (x+1)%2;
                y -=1;
            }
            else if(y>=2 && arr[x][y-2]=='>')
            {
                y-=2;
            }
            else
            {
                return false;

            }
        }
        return true;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
         bool ok = solve();
         if(ok) cout<<"Yes"<<"\n";
         else cout<<"No"<<"\n";
    }
    return 0;
}
