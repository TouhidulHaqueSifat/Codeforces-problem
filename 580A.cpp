#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int cnt = 1;
    int max_cnt = 1;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] <= arr[i + 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt << endl;
}
