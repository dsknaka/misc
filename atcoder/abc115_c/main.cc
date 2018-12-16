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
    int N, K;
    cin >> N >> K;

    vector<int> hv;
    for (int i = 0; i < N; i++) {
        int h;
        cin >> h;
        hv.push_back(h);
    }
    sort(hv.begin(), hv.end());

    vector<int> hdiff;
    for (int i = 0; i + K - 1 < N; i++) {
        hdiff.push_back(hv[i + K - 1] - hv[i]);
    }

    sort(hdiff.begin(), hdiff.end());

    cout << hdiff[0] << endl;

    return 0;
}

