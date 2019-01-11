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
    int d, n;
    cin >> d >> n;

    int s = 1;
    for (int i = 0; i < d; i++) {
        s *= 100;
    }

    if (n <= 99) {
        cout << n * s << endl;
    } else {
        cout << 101 * s << endl;
    }
    if (n <= 99) {
        cout << n * s << endl;
    } else {
        cout << 101 * s << endl;
    }

    return 0;
}

