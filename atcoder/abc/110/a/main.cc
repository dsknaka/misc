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
    int A, B, C;
    cin >> A >> B >> C;

    int m = 0;
    m = max(A * 10 + B + C, m);
    m = max(A + B * 10 + C, m);
    m = max(A + B + C * 10, m);

    cout << m << endl;

    return 0;
}

