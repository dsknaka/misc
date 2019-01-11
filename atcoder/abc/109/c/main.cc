#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int Gcd(int a, int b)
{
    if (b > 0) {
        return Gcd(b, a % b);
    } else {
        return a;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> xi(n, 0);
    vector<int> diff(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> xi[i];
        diff[i] = abs(xi[i] - x);
    }

    if (n == 1) {
        cout << diff[0] << endl;
        return 0;
    }

    int ret = Gcd(diff[0], diff[1]);
    for (int i = 2; i < n; i++) {
        ret = Gcd(ret, diff[i]);
    }

    cout << ret << endl;

    return 0;
}

