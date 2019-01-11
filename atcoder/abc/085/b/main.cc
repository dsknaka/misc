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

    vector<int> d(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    int count = 0;
    int last = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] != last) {
            count++;
            last = d[i];
        }
    }

    cout << count << endl;

    return 0;
}

