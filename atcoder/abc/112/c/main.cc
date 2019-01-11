#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

typedef struct {
    int x;
    int y;
    long long h;
} XYH;

int main()
{
    int N;
    cin >> N;

    XYH xyh_ref;
    vector<XYH> xyh;
    for (int i = 0; i < N; i++) {
        int x, y;
        long long h;
        cin >> x >> y >> h;
        XYH xyh_i = {x, y, h};
        xyh.push_back(xyh_i);
        if (h > 0) {
            xyh_ref = xyh_i;
        }
    }

    for (int Cx = 0; Cx <= 100; Cx++) {
        for (int Cy = 0; Cy <= 100; Cy++) {
            long long H = abs(xyh_ref.x - Cx) + abs(xyh_ref.y - Cy) + xyh_ref.h;
            bool flag = true;

            for (int i = 0; i < xyh.size(); i++) {
                long long h = max(H - abs(xyh[i].x - Cx) - abs(xyh[i].y - Cy), 0LL);
                if (h != xyh[i].h) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << Cx << " " << Cy << " " << H << endl;
                return 0;
            }
        }
    }

    return 0;
}

