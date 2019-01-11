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
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b >= c - 1) {
        cout << b + c << endl;
        return 0;
    } else {
        cout << a + b + 1 + b << endl;
        return 0;
    }

    return 0;
}

