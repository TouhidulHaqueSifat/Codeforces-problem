#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;

    int m;
    cin>>m;
    string b;
    cin>>b;

    string c;
    cin>>c;

    string a_ex ;
    string b_ex ;

    for(int i=0; i<c.size(); i++){
        if(c[i] == 'D'){
           a += b[i];

        }

    }
    for(int i=0; i<c.size(); i++){
        if(c[i] == 'V'){
           b_ex += b[i];

        }

    }
    reverse(b_ex.begin(), b_ex.end());
    b_ex+= a;
    /*a += a_ex;
    b_ex += a;*/

    cout<<b_ex<<"\n";


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
