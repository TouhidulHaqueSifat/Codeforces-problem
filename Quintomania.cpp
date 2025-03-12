#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int l=0, r = 1, flag = 1;
        while(r<n){
            if(abs(arr[l]-arr[r]) != 5 && abs(arr[l]-arr[r])!= 7){
               flag = 0;
               break;

            }
            l++,r++;

        }
        if(flag==1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;

}
