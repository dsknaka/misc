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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b > c + d) {
        puts("Left");
    } else if (a + b == c + d) {
        puts("Balanced");
    } else {
        puts("Right");
    }

    return 0;
}

