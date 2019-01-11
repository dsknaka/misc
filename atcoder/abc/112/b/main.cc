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
    int N, T;
    cin >> N >> T;

    int c_min = 1001;
    for (int i = 0; i < N; i++) {
        int c, t;
        cin >> c >> t;
        if (t <= T && c < c_min) {
            c_min = c;
        }
    }

    if (c_min == 1001) {
        cout << "TLE" << endl;
    } else {
        cout << c_min << endl;
    }

    return 0;
}

