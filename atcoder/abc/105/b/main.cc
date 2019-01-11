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

    for (int i = 0; ; i++) {
        int rest = n - 4 * i;
        if (rest < 0) {
            break;
        }
        if (rest % 7 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}

