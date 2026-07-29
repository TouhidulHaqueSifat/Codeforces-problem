#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int>arr(m);

    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    int i=0, j=n-1;
    int min_val = INT_MAX;
    while(j < m){
       min_val = min(arr[j] - arr[i], min_val);
       i++, j++;
    }
    cout<<min_val<<"\n";
}
