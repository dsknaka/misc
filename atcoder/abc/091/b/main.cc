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
    vector<pair<string, int> > s;
    for (int i = 0; i < n; i++) {
        string si;
        cin >> si;
        bool is_exist = false;
        for (int j = 0; j < s.size(); j++) {
            if (si == s[j].first) {
                is_exist = true;
                s[j].second++;
                break;
            }
        }
        if (!is_exist) {
            s.push_back(make_pair(si, 1));
        }
    }

    int m;
    cin >> m;
    vector<pair<string, int> > t;
    for (int i = 0; i < m; i++) {
        string ti;
        cin >> ti;
        bool is_exist = false;
        for (int j = 0; j < t.size(); j++) {
            if (ti == t[j].first) {
                is_exist = true;
                t[j].second++;
                break;
            }
        }
        if (!is_exist) {
            t.push_back(make_pair(ti, 1));
        }
    }

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        int tmp = s[i].second;
        for (int j = 0; j < t.size(); j++) {
            if (s[i].first == t[j].first) {
                tmp -= t[j].second;
                break;
            }
        }
        ans = max(ans, tmp);
    }

    if (ans < 0) {
        cout << "0" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}

