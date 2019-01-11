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
    int a, b;
    cin >> a >> b;

    if (a * b % 2 == 0) {
        puts("Even");
    } else {
        puts("Odd");
    }

    return 0;
}

