#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int mx = INT_MIN;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            mx = max(mx, matrix[i][j]);

    vector<int> rowCount(n, 0), colCount(m, 0);
    int totalCount = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] == mx) {
                rowCount[i]++;
                colCount[j]++;
                totalCount++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int count = rowCount[i] + colCount[j];
            if (matrix[i][j] == mx) count--;
            if (count == totalCount) {
                return mx - 1;
            }
        }
    }

    return mx;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> matrix[i][j];

        cout << solve(matrix) << endl;
    }

    return 0;
}
