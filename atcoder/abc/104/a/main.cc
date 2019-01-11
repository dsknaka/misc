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
    int r;
    cin >> r;

    if (r < 1200) {
        cout << "ABC" << endl;
    } else if (r < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }

    return 0;
}

