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
    int n, k;
    cin >> n >> k;

    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    if (n <= 1 + k) {
        cout << abs(h[n - 1] - h[0]) << endl;
        return 0;
    }

    vector<long long> dp(n, 0);
    dp[0] = 0;
    for (int i = 0; i < k + 1; i++) {
        dp[i] = abs(h[i] - h[0]);
    }

    for (int i = k + 1; i < n; i++) {
        dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
        for (int j = 2; j <= k; j++) {
            dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
        }
    }

    cout << dp[n - 1] << endl;

    return 0;
}

