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

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());

    if (s.size() < t.size()) {
        bool is_same = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                is_same = false;
                break;
            }
        }
        if (is_same) {
            puts("Yes");
            return 0;
        }
    }

    for (int i = 0; i < min(s.size(), t.size()); i++) {
        if (s[i] == t[i]) {
            continue;
        } else if (s[i] < t[i]) {
            puts("Yes");
            return 0;
        } else {
            puts("No");
            return 0;
        }
    }

    puts("No");

    return 0;
}

