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

    long long count = 0;

    long long b_num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'B') {
            b_num++;
        } else {
            count += b_num;
        }
    }

    cout << count << endl;

    return 0;
}

