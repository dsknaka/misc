#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int f(int m, vector<int>& a)
{
    int res = 0;

    for (int i = 0; i < a.size(); i++) {
        res += m % a[i];
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    int amax = 0;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
        amax = max(amax, ai);
    }

    int fmax = 0;
    for (int i = 0; i < amax; i++) {
        fmax = max(fmax, f(i, a));
    }

    cout << fmax << endl;

    return 0;
}

