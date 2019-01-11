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

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a[i] = ai;
    }

    sort(a.begin(), a.end(), greater<int>());
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }

    cout << alice - bob << endl;

    return 0;
}

