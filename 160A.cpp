#include<bits/stdc++.h>
using namespace std;

int main()
{


        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        sum /= 2;
        sort(arr.begin(), arr.end());
        int cnt = 0;
        for(int i=n-1; i>=0; i--){
            sum -= arr[i];
            ++cnt;
            if(sum < 0){
                break;
            }
        }
        cout<<cnt<<"\n";

}
