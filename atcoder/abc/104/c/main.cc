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
    int d, g;
    cin >> d >> g;

    vector<int> p;
    vector<int> c;
    vector<int> s;
    for (int i = 0; i < d; i++) {
        cin >> p[i] >> c[i];
        s[i] = 100 * (i + 1) * p[i] + c[i];
    }

    return 0;
}

