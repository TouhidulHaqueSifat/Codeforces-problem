#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int x=0, y=0;
    int max_itr = n*1e3;
    for(int i=0; i<max_itr;i++){

        char move = s[i%n];
        if(move=='N'){
            y = y+1;

        }
        else if(move == 'E'){
            x = x+1;

        }
        else if(move == 'S'){
            y = y-1;

        }
        else{
            x = x-1;

        }
        if (x == a && y == b) {
            cout << "YES" << "\n";
            return;
        }

    }

    cout<<"NO"<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
