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

    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == '1') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

