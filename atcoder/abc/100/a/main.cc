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
    int a, b;
    cin >> a >> b;

    if (a > 8) {
        cout << ":(" << endl;
        return 0;
    }
    if (b > 8) {
        cout << ":(" << endl;
        return 0;
    }

    cout << "Yay!" << endl;

    return 0;
}

