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
    int n;
    cin >> n;

    bool p = false;
    bool w = false;
    bool g = false;
    bool y = false;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;

        if (c == 'P') {
            p = true;
        }
        if (c == 'W') {
            w = true;
        }
        if (c == 'G') {
            g = true;
        }
        if (c == 'Y') {
            y = true;
        }
    }

    if (p && w && g && y) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }

    return 0;
}

