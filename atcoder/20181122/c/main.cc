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
    long long n, p;
    cin >> n >> p;

    if (n == 1) {
        cout << p << endl;
        return 0;
    }

    vector<pair<long long, long long> > v;
    long long p_org = p;
    for (long long i = 2; i * i <= p_org; i++) {
        long long count = 0;
        while (p % i == 0) {
            count++;
            p /= i;
        }
        if (count) {
            v.push_back(make_pair(i, count));
        }
        if (i != 2) {
            i++;
        }
    }

    for (long long i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << " " << endl;
    }

    long long ans = 1;
    for (long long i = 0; i < v.size(); i++) {
        ans *= pow(v[i].first, v[i].second / n);
    }

    cout << ans << endl;

    return 0;
}

