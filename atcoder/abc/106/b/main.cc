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

    int res = 0;
    for (int i = 1; i <= n; i += 2) {
        int count = 0;
        for (int j = 3; j < i; j += 2) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 6) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}

