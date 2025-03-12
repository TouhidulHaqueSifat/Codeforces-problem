#include<bits/stdc++.h>
using namespace std;
int get_index(int value, vector<int>&arr){

    auto val = upper_bound(arr.begin(), arr.end(), value);
    int index = val - arr.begin();
    return index;

}
int main()
{
    int n;
    cin>>n;
    vector<int>price(n);
    for(int i=0; i<n;i++){
        cin>>price[i];
    }
    sort(price.begin(),price.end());
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int value = get_index(m, price);
        cout<<value<<"\n";


    }
}
