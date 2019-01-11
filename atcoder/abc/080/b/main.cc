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

    int fn = 0;
    int n_tmp = n;

    for (int i = 0; i < 8; i++) {
        fn += n_tmp % 10;
        n_tmp /= 10;
    }

    if (n % fn == 0) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}

