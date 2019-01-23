#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int find_r(vector<int>& h, int l)
{
    for (int i = l; i < h.size(); i++) {
        if (h[i] == 0) {
            return i - 1;
        }
    }

    return h.size() - 1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        while (h[i] > 0) {
            int r = find_r(h, i);
            for (int j = i; j <= r; j++) {
                h[j]--;
            }
            count++;
        }
    }

    cout << count + h[n - 1] << endl;

    return 0;
}

