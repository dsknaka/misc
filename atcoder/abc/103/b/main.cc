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
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < s.length(); i++) {
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
        s = s[s.length() - 1] + s;
        s.pop_back();
    }

    cout << "No" << endl;

    return 0;
}

