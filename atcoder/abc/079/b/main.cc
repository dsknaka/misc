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

    long long li2 = 2;
    long long li1 = 1;
    long long li = 1;

    for (int i = 2; i <= n; i++) {
        li = li1 + li2;
        li2 = li1;
        li1 = li;
    }

    cout << li << endl;

    return 0;
}

