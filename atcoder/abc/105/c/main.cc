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
    int n;
    cin >> n;

    vector<int> s;
    long long rest = n;

    s.push_back(abs(n) % 2);
    rest = (rest - s[0]) / -2;

    for (int i = 1; rest != 0; i++) {
        s.push_back(abs(rest) % 2);
        rest = (rest - s[i]) / -2;
    }

    for (int i = s.size() - 1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}

