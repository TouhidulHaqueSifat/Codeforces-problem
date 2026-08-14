#include<bits/stdc++.h>
using namespace std;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n, m;
    cin>>n>>m;
    int moves = min(n, m);

    if (moves % 2 == 0) {
        cout << "Malvika\n";
    } else {
        cout << "Akshat\n";
    }
}
int main()
{


    solve();

    return 0;
}
