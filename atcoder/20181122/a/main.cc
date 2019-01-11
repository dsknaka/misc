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

    int count = 0;

    for (int i = 0; i < 4; i++) {
        int tmp = n % 10;
        if (tmp == 2) {
            count++;
        }
        n /= 10;
    }

    cout << count << endl;

    return 0;
}

