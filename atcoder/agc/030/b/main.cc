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
    int l, n;
    cin >> l >> n;

    vector<long long> x(n, 0);
    for (long long i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long count_a_max = 0;
    long long count_b_max = 0;
    for (int i = 0; i < n; i++) {
        long long count_a = x[i];
        int p1_a = i + 1;
        int p2_a = n - 1;
        int dp1_a = x[p1_a] - x[i];
        int dp2_a = x[i] + (l - x[p2_a]);

        long long count_b = l - x[n - 1 - i];
        int p1_b = 0;
        int p2_b = n - 1 - i - 1;
        int dp1_b = x[p1_b] + count_b;
        int dp2_b = x[p2_b + 1] - x[p2_b];

        for (int j = 0; j < n - i - 1; j++) {
            if (j % 2 == 0) {
                count_a += dp2_a;
                p2_a--;
                if (j < n - i - 2) {
                    dp1_a += dp2_a;
                    dp2_a = x[p2_a + 1] - x[p2_a];
                }

                count_b += dp1_b;
                p1_b++;
                if (j < n - i - 2) {
                    dp2_b += dp1_b;
                    dp1_b = x[p1_b] - x[p1_b - 1];
                }
            } else {
                count_a += dp1_a;
                p1_a++;
                if (j < n - i - 2) {
                    dp2_a += dp1_a;
                    dp1_a = x[p1_a] - x[p1_a - 1];
                }

                count_b += dp2_b;
                p2_b--;
                if (j < n - i - 2) {
                    dp1_b += dp2_b;
                    dp2_b = x[p2_b + 1] - x[p2_b];
                }
            }
        }
        count_a_max = max(count_a_max, count_a);
        count_b_max = max(count_b_max, count_b);
    }

    cout << max(count_a_max, count_b_max) << endl;

    return 0;
}

