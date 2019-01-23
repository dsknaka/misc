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
    long long k;
    cin >> s >> k;

    for (long long i = 0; i < k; i++) {
        int di = s[i] - '0';
        if (di > 1) {
            cout << di << endl;
            return 0;
        }
    }

    cout << "1" << endl;

    return 0;
}

