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
    int n, a, b;
    cin >> n >> a >> b;

    cout << min(a * n, b) << endl;

    return 0;
}

