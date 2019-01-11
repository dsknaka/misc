#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    string n;
    cin >> n;

    for (int i = 0; i < 3; i++) {
        if (n[i] == '1') {
            cout << '9';
        } else {
            cout << '1';
        }
    }
    cout << endl;

    return 0;
}

