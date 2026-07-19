#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    vector<string>st;
    int x = 0;
    for(int i=0; i<n; i++){
        cin>>s;
        st.push_back(s);

    }

    for(auto ch: st){
        if(ch == "++X" || ch == "X++") x++;
        else x--;

    }
    cout<<x<<"\n";
    return 0;
}
