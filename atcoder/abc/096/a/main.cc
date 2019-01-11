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

    if (b >= a) {
        cout << a << endl;
    } else {
        cout << a - 1 << endl;
    }

    return 0;
}

