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
    int a, b, k;
    cin >> a >> b >> k;

    if (k >= b - a + 1) {
        for (int i = a; i <= b; i++) {
            cout << i << endl;
        }
        return 0;
    }

    if (k * 2 >= b - a + 1) {
        for (int i = a; i <= b; i++) {
            cout << i << endl;
        }
        return 0;
    }

    for (int i = a; i < a + k; i++) {
        cout << i << endl;
    }
    for (int i = b - k + 1; i <= b; i++) {
        cout << i << endl;
    }

    return 0;
}

