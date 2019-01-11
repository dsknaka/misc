#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

// a^b % m
long long PowerMod(long long a, long long b, int m)
{
    long long res = 1;
    for (int i = 0; b > 0; i++) {
        if (b & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// a! % m
long long FactorialMod(long long a, int m)
{
    long long res = 1;
    for (int i = a; i > 0; i--) {
        res = (res * i) % m;
    }
    return res;
}

// nCr % m
long long CombinationMod(long long n, long long r, int m)
{
    if (r > n / 2) {
        r = n - r;
    }
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res = (res * (n - i)) % m;
    }
    res *= PowerMod(FactorialMod(r, m), m - 2, m);
    res %= m;
    return res;
}

void PrimeFactorization(int x, vector<pair<int, int> >& y)
{
    int xrest = x;
    for (int i = 2; i < x; ) {
        if (i > xrest) {
            break;
        }
        if (xrest % i == 0) {
            y.push_back(make_pair(i, 1));
            xrest /= i;
            while (xrest % i == 0) {
                y.back().second++;
                xrest /= i;
            }
        }
        if (i == 2) {
            i++;
        } else {
            i += 2;
        }
    }
}

int main()
{
    const int MOD = 1e9 + 7;

    int N, M;
    cin >> N >> M;

    vector<pair<int, int> > v;
    PrimeFactorization(M, v);

    long long ans = 1;
    for (int i = 0; i < v.size(); i++) {
        ans *= CombinationMod(v[i].second + N - 1, v[i].second, MOD);
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}

