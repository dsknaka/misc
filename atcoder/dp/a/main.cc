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

    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    vector<long long> dp(n, 0);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < n; i++) {
        int d1 = abs(h[i] - h[i - 1]);
        int d2 = abs(h[i] - h[i - 2]);
        dp[i] = min(dp[i - 2] + d2, dp[i - 1] + d1);
    }

    cout << dp[n - 1] << endl;

    return 0;
}

