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
    int n, d, x;
    cin >> n >> d >> x;

    int res = x;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        for (int k = 0; ; k++) {
            int x = k * ai + 1;
            if (x > d) {
                break;
            }
            res++;
        }
    }

    cout << res << endl;

    return 0;
}

