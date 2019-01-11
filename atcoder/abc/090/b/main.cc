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

    int count = 0;
    for (int i = a; i <= b; i++) {
        char s[6];
        sprintf(s, "%d", i);
        if (s[0] == s[4] && s[1] == s[3]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

