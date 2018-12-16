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
    int m = 0;
    cin >> m;

    int vv = 0;

    if (m < 100) { vv = 0; }
    if (m >= 100 && m <= 5000) { vv = m / 100; }
    if (m >= 6000 && m <= 30000) { vv = m / 1000 + 50; }
    if (m >= 35000 && m <= 700000) { vv = (m / 1000 - 30) / 5 + 80; }
    if (m > 70000) { vv = 89; }

    printf("%02d\n", vv);


    return 0;
}

