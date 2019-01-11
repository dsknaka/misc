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
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int x = max(a, max(b, c));
    int y = a + b + c - x;

    for (int i = 0; i < k; i++) {
        x *= 2;
    }

    cout << x + y << endl;

    return 0;
}

