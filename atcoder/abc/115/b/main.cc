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

    int sum = 0;
    int max = 0;
    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        if (max < p) {
            sum += max;
            max = p;
        } else {
            sum += p;
        }
    }

    cout << int(sum + max / 2) << endl;

    return 0;
}

