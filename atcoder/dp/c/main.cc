#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > a(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    vector<vector<int> > dp(n, vector<int>(3, 0));
    for (int i = 0; i < 3; i++) {
        dp[0][i] = a[0][i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) {
                    continue;
                }
                dp[i][k] = max(dp[i][k], dp[i - 1][j] + a[i][k]);
            }
        }
    }

    cout << *max_element(dp[n - 1].begin(), dp[n - 1].end()) << endl;

    return 0;
}

