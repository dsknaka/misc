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
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    int Xmax = X;
    int Ymin = Y;

    for (int i = 0; i < N; i++) {
        int xi;
        cin >> xi;
        Xmax = max(Xmax, xi);
    }

    for (int i = 0; i < M; i++) {
        int yi;
        cin >> yi;
        Ymin = min(Ymin, yi);
    }

    if (Xmax < Ymin) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
    return 0;
}

