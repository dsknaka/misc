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
    int n;
    cin >> n;

    vector<int> v1(100001, 0), v2(100001, 0);
    for (int i = 0; i < n; i++) {
        int vi;
        cin >> vi;
        if (i % 2 == 1) {
            v1[vi]++;
        } else {
            v2[vi]++;
        }
    }

    vector< pair<int, int> > v1_pair, v2_pair;
    for (int i = 0; i < 100001; i++) {
        v1_pair.push_back(make_pair(v1[i], i));
        v2_pair.push_back(make_pair(v2[i], i));
    }

    sort(v1_pair.begin(), v1_pair.end(), greater< pair<int, int> >());
    sort(v2_pair.begin(), v2_pair.end(), greater< pair<int, int> >());

    if (v1_pair[0].second != v2_pair[0].second) {
        cout << n - v1_pair[0].first - v2_pair[0].first << endl;
    } else {
        cout << min(n - v1_pair[0].first - v2_pair[1].first, n - v1_pair[1].first - v2_pair[0].first);
    }

    return 0;
}

