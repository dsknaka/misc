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
    char x, y;
    cin >> x >> y;

    if (x < y) {
        puts("<");
    } else if (y < x){
        puts(">");
    } else {
        puts("=");
    }

    return 0;
}

