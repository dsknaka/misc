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

    string s;
    cin >> s;

    bool flag = true;
    for (int i = 0; i < a; i++) {
        if (s[i] < '0' || '9' < s[i]) {
            flag = false;
        }
    }
    if (s[a] != '-') {
        flag = false;
    }
    for (int i = a + 1; i < a + b + 1; i++) {
        if (s[i] < '0' || '9' < s[i]) {
            flag = false;
        }
    }

    if (flag) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}

