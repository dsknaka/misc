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
    int N;
    cin >> N;

    if (N % 111 == 0) {
        cout << N << endl;
    } else {
        cout << ((N / 111) + 1) * 111 << endl;
    }

    return 0;
}

