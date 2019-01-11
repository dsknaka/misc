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
    int x, a, b;
    cin >> x >> a >> b;

    cout << (x - a) % b << endl;

    return 0;
}

