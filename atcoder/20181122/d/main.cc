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

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }

    sort(a.begin(), a.end(), greater<int>());

    int diff = a[0] - a[1];
    if (diff % 2 == 0) {
        cout << "second" << endl;
    } else {
        cout << "first" << endl;
    }

    return 0;
}

