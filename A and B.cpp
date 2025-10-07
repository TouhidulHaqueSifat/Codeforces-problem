#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a;
    vector<int>b;
    
    for(int i=0;i<n; i++){
        if(s[i] == 'a'){
            a.push_back(i);
        }
        else{
            b.push_back(i);
        }
    }
    
    long long int a_diff = 0, b_diff = 0;
    int pos_a = a.size()/2;
    if(a.size() > 0){
        for(int i=0; i<a.size(); i++){
            a_diff += abs(a[pos_a]-a[i]) - abs(pos_a-i);
        }
    }
    int pos_b = b.size()/2;
    if(b.size() > 0){
        for(int i=0; i<b.size(); i++){
            b_diff += abs(b[pos_b] - b[i]) - abs(pos_b - i);
        }
    }
    if(a_diff == 0 || b_diff == 0){
        cout<<0<<"\n";
    }
    else{
        cout<<min(a_diff, b_diff)<<"\n";
    }
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