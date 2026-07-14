
 // Only one even number 1 5 2 7 3 -> we need just sort the number

 // Only one odd number 4 2 6 1 8 -> 4 2 1 6 8 -> 1 2 4 6 8 We need just sort the number

 // If multiple odd and even number: 3 2 1 6 4 -> 2 3 1 6 4 -> 2 3 4 6 1 -> 2 3 4 1 6 -> 2 3 1 4 6-> 1 3 2 4 6 -> 1 2 3 4 6


 #include<bits/stdc++.h>
 using namespace std;

 void solve()
 {
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }
     int odd_cnt=0, even_cnt = 0;
     for(int i=0; i<n; i++){
        if(arr[i]%2==0) even_cnt++;
        else odd_cnt++;
     }
     if(odd_cnt == n || even_cnt==n){
        for(auto i: arr){
            cout<<i<<" ";
        }
        cout<<"\n";
     }
     else{
        sort(arr.begin(), arr.end());
        for(auto i: arr){
            cout<<i<<" ";
        }
        cout<<"\n";
     }
 }

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
 }
