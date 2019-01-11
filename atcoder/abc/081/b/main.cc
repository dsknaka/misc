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

    int div2min = 0;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        for (int j = 0; ; j++) {
            if (ai % 2 == 0) {
                ai /= 2;
            } else if (i == 0) {
                div2min = j;
                break;
            } else {
                div2min = min(div2min, j);
                break;
            }
        }
    }

    cout << div2min << endl;

    return 0;
}

