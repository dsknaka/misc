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
    int n, h, w;
    cin >> n >> h >> w;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a >= h && b >= w) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

