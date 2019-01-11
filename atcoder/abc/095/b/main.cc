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
    int n, x;
    cin >> n >> x;

    vector<int> m;
    int m_all = 0;
    for (int i = 0; i < n; i++) {
        int mi;
        cin >> mi;
        m.push_back(mi);
        m_all += mi;
    }
    x -= m_all;

    sort(m.begin(), m.end());

    cout << n + x / m[0] << endl;

    return 0;
}

