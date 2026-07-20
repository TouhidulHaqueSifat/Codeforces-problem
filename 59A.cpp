#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    int up_cnt=0, low_cnt = 0;

    for(int i=0; i<n; i++){
            char ch = s[i] - 0;
        if(ch>= 65 && ch<= 90){
            up_cnt++;
        }
        else low_cnt++;
    }
    if(up_cnt == low_cnt){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if(up_cnt < low_cnt){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
      transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s<<"\n";
}

