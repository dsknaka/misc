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
    string n;
    cin >> n;

    if (n[0] == n[1] && n[0] == n[2]) {
        puts("Yes");
        return 0;
    }

    if (n[1] == n[2] && n[1] == n[3]) {
        puts("Yes");
        return 0;
    }

    puts("No");

    return 0;
}

