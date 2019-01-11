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
    int a, b;
    cin >> a >> b;

    int res = a + b;
    res = max(res, a - b);
    res = max(res, a * b);

    cout << res << endl;

    return 0;
}

