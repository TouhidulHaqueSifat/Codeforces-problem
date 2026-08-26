#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int>arr(3);
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    long long int first_two_sum = arr[0] + arr[1];
    if(first_two_sum >= arr[2]){
        cout<<arr[2] - arr[0]<<"\n";
    }
    else{
        cout<<first_two_sum - arr[0]<<"\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
