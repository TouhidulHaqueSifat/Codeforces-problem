#include<bits/stdc++.h>
using namespace std;

int main()
{

    int w;
    cin>>w;
    if(w <= 2){
        cout<<"No"<<"\n";
        return 0;
    }
    if(w % 2 == 0){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
    return 0;
}
