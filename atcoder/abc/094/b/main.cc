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
    int n, m, x;
    cin >> n >> m >> x;

    int a_left = 0;
    int a_right = 0;

    for (int i = 0; i < m; i++) {
        int ai;
        cin >> ai;
        if (ai < x) {
            a_left++;
        } else {
            a_right++;
        }
    }

    cout << min(a_left, a_right) << endl;

    return 0;
}

