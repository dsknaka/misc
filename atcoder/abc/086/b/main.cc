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
    string a, b;
    cin >> a >> b;

    string ab_str = a + b;
    int ab = atoi(ab_str.c_str());

    for (int i = 1; i <= ab; i++) {
        if (i * i == ab) {
            puts("Yes");
            return 0;
        }
        if (i * i > ab) {
            puts("No");
            return 0;
        }
    }

    return 0;
}

