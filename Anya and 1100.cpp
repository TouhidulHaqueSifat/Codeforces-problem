/*#include<bits/stdc++.h>

using namespace std;

bool isPresent(string s, int i)
{

    return i+3<s.size() && s.substr(i, 4) == "1100";

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int cnt = 0;
        for(int i=0; i<=n-4;i++){
            if(isPresent(s,i)) cnt++;
        }
        int q;
        cin>>q;
        while(q--){
            int i;char v;
            cin>>i>>v;
            i--;
            for(int j=max(0,i-3);j<min(n-4,i);j++){
                if(isPresent(s,j)){
                    cnt--;
                }
            }
            s[i] = v;
            for (int j = max(0, i - 3); j <= min(n - 4, i); ++j) {
                if (isPresent(s, j)) {
                    cnt++;
                }
            }
            if (cnt > 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

string copy(string s, int i, int j)
{
    string temp = "";
    for(int k = i; k <= j; k++){
        temp += s[k];
    }
    return temp;
}

void solve()
{
    string s;
    cin >> s;
    int q;
    cin >> q;

    while(q--)
    {
        int i, v;
        cin >> i >> v;
        s[i] = v + '0';  //

        string temp = "1100";
        int f = 0;

        for(int i = 0; i <= s.size() - 4; i++)
        {
            string duplicate = copy(s, i, i + 3);  //
            if(temp == duplicate){
                f = 1;
                break;
            }
        }

        if(f){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

