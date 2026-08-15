/*#include<bits/stdc++.h>
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
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int i = 0;

    while (n > 0 && m > 0) {
        i++;
        n--;
        m--;
    }

    if (i % 2 == 0)
        cout << "Malvika\n";
    else
        cout << "Akshat\n";

    return 0;
}
