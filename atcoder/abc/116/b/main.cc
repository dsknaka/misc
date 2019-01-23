#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int s;
    cin >> s;

    vector<int> a;
    a.push_back(s);
    for (int i = 1; ; i++) {
        if (a[i - 1] % 2 == 0) {
            a.push_back(a[i - 1] / 2);
        } else {
            a.push_back(3 * a[i - 1] + 1);
        }
        for (int j = 0; j < a.size() - 1; j++) {
            if (a[j] == a[i]) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }

    return 0;
}

