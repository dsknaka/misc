#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int> > dt(n);
    for (int i = 0; i < n; i++) {
        int ti, di;
        cin >> ti >> di;
        dt[i] = make_pair(di, ti);
    }

    sort(dt.begin(), dt.end(), greater<pair<int, int> >());

    stack<int> stack_d;
    set<int> set_type;
    long long now = 0;
    long long ans = 0;

    for (int i = 0; i < k; i++) {
        if (set_type.count(dt[i].second)) {
            stack_d.push(dt[i].first);
        }
        set_type.insert(dt[i].second);
        now += dt[i].first;
    }

    ans = now + (set_type.size() * set_type.size());

    for (int i = k; i < n; i++) {
        if (stack_d.empty()) {
            break;
        }
        if (set_type.count(dt[i].second)) {
            continue;
        }
        set_type.insert(dt[i].second);
        now = now - stack_d.top() + dt[i].first;
        stack_d.pop();

        long long ans_tmp = now + set_type.size() * set_type.size();
        ans = max(ans, ans_tmp);
    }

    cout << ans << endl;

    return 0;
}

