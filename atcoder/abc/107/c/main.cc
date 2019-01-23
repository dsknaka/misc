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

    vector<int> x(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long count_min = 0;
    for (int i = 0; i < n - k + 1; i++) {
        long long count = 0;
        int start = x[i];
        int end = x[i + k - 1];
        if (end < 0) {
            count = 0 - start;
        } else if (start < 0 && 0 <= end) {
            int count1 = 0 - start + (end - start);
            int count2 = end + (end - start);
            count = min(count1, count2);
        } else {
            count = end;
        }
        if (i == 0) {
            count_min = count;
        }
        count_min = min(count_min, count);
    }

    cout << count_min << endl;

    return 0;
}

