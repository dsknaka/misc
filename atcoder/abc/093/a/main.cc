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
    string s;
    cin >> s;

    bool a = false;
    bool b = false;
    bool c = false;
    for (int i = 0; i < 3; i++) {
        if (s[i] == 'a') {
            a = true;
        }
        if (s[i] == 'b') {
            b = true;
        }
        if (s[i] == 'c') {
            c = true;
        }
    }

    if (a && b && c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

