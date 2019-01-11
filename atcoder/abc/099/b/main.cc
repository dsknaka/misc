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

    int n = b - a;
    int an = (1 + n) * n / 2;
    int x = an - b;
    cout << x << endl;

    return 0;
}

