#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int task(int a, int b, int c) {
    int res = 0;

    res += abs(a - b);
    res += abs(b - c);

    return res;
}

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int res = 0;

    res = task(a1, a2, a3);
    res = min(res, task(a1, a3, a2));
    res = min(res, task(a2, a1, a3));
    res = min(res, task(a2, a3, a1));
    res = min(res, task(a3, a1, a2));
    res = min(res, task(a3, a2, a1));

    cout << res << endl;

    return 0;
}

