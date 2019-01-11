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
    int K;
    cin >> K;

    cout << K / 2 * (K - K / 2) << endl;

    return 0;
}

