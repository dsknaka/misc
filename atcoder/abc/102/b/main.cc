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

    int amin;
    int amax;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        if (!i) {
            amin = ai;
            amax = ai;
        }
        amin = min(amin, ai);
        amax = max(amax, ai);
    }

    cout << amax - amin << endl;

    return 0;
}

