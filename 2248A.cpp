#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int one_pos = -1, zero_pos = -1;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            one_pos = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] == '0'){
            zero_pos = i;
            break;
        }
    }
    string new_string;
    for(int i=0; i<n; i++){
        if(i==one_pos || i == zero_pos){
            continue;
        }
        new_string += s[i];
    }
    cout<<new_string<<"\n";
}
int main()
{

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
