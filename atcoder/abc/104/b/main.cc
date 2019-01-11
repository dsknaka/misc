#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

bool check(string s)
{
    if (s[0] != 'A') {return false;}

    int c = 0;
    for (int i = 2; i < s.length() - 1; i++) {
        if (s[i] == 'C') {
            c++;
        }
    }
    if (c != 1) {return false;}

    int upper = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        }
    }
    if (upper != 2) {
        return false;
    }

    return true;
}

int main()
{
    string s;
    cin >> s;

    if (check(s)) {
        cout << "AC" << endl;
    } else {
        cout << "WA" << endl;
    }

    return 0;
}

