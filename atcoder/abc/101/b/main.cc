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

    int sn = 0;
    int ntmp = n;

    while (ntmp > 0) {
        sn += ntmp % 10;
        ntmp /= 10;
    }

    if (n % sn == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

