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
    int n, a, b;
    cin >> n >> a >> b;

    int sumall = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        int itmp = i;
        sum += itmp / 10000;
        itmp %= 10000;
        sum += itmp / 1000;
        itmp %= 1000;
        sum += itmp / 100;
        itmp %= 100;
        sum += itmp / 10;
        itmp %= 10;
        sum += itmp;
        if (a <= sum && sum <= b) {
            sumall += i;
        }
    }

    cout << sumall << endl;

    return 0;
}

