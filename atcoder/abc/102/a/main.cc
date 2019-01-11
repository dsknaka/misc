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

    if (n % 2 == 0) {
        cout << n << endl;
    } else {
        cout << n * 2 << endl;
    }

    return 0;
}

