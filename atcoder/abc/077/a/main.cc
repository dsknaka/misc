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
    string s1, s2;
    cin >> s1 >> s2;

    bool flag = true;

    if (s1[0] != s2[2]) {
        flag = false;
    }
    if (s1[1] != s2[1]) {
        flag = false;
    }
    if (s1[2] != s2[0]) {
        flag = false;
    }

    if (flag) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}

