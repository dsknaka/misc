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
    int N, M;
    cin >> N >> M;

    int M_N = M / N;

    for (int i = 0; ; i++) {
        int D = M_N - i;
        if (M % D == 0) {
            cout << D << endl;
            return 0;
        }
    }

    return 0;
}

