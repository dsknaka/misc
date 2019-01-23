#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int solve(string x, string y)
{
    vector<vector<int> > c(x.size(), vector<int>(y.size(), 0));

    if (x[0] == y[0]) {
        c[0][0] = 1;
    }

    for (int i = 1; i < x.size(); i++) {
        if (c[i - 1][0] == 1 || x[i] == y[0]) {
            c[i][0] = 1;
        } else {
            c[i][0] = 0;
        }
    }
    for (int i = 1; i < y.size(); i++) {
        if (c[0][i - 1] == 1 || x[0] == y[i]) {
            c[0][i] = 1;
        } else {
            c[0][i] = 0;
        }
    }

    for (int i = 1; i < x.size(); i++) {
        for (int j = 1; j < y.size(); j++) {
            if (x[i] == y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            } else {
                c[i][j] = max(c[i][j - 1], c[i - 1][j]);
            }
        }
    }

    return c[x.size() - 1][y.size() - 1];
}

int main()
{
    int q;
    cin >> q;

    vector<string> x(q), y(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < q; i++) {
        cout << solve(x[i], y[i]) << endl;
    }

    return 0;
}

