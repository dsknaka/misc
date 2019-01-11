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
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int count = 0;
    for (int i = 0; i * 500 <= x && i <= a; i++) {
        for (int j = 0; i * 500 + j * 100 <= x && j <= b; j++) {
            int rest = x - i * 500 - j * 100;
            if (rest / 50 <= c) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}

