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
    int x;
    cin >> x;

    int res = 0;
    int sqrtx = int(sqrt(x));

    if (x < 4) {
        cout << "1" << endl;
        return 0;
    }

    for (int b = 2; b <= int(sqrt(x)); b++) {
        int bp = 1;
        for (int p = 0; ; p++) {
            bp *= b;
            if (bp > x) {
                break;
            }
            res = max(res, bp);
        }
    }

    cout << res << endl;

    return 0;
}

