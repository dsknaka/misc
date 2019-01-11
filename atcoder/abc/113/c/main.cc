#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int N = 0;
    int M = 0;
    cin >> N >> M;

    int P[100000] = {};
    int Y[100000] = {};
    vector<int> yd[100001];

    for (int i = 0; i < M; i++) {
        cin >> P[i] >> Y[i];
        yd[P[i]].push_back(Y[i]);
    }

    for (int i = 0; i < N; i++) {
        sort(yd[i + 1].begin(), yd[i + 1].end());
    }

    for (int i = 0; i < M; i++) {
        int x;
        x = int(lower_bound(yd[P[i]].begin(), yd[P[i]].end(), Y[i]) - yd[P[i]].begin() + 1);
        printf("%012lld\n", (long long)P[i] * 1000000 + x);
    }
    return 0;
}

