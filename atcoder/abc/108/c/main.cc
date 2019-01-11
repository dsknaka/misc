#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

void odd(int n, int k)
{
    long long count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            count++;
        }
    }
    count = count * count * count;
    cout << count << endl;
}

void even(int n, int k)
{
    long long count1 = 0;
    long long count2 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            count1++;
        } else if (i % k == k / 2) {
            count2++;
        }
    }
    count1 = count1 * count1 * count1;
    count2 = count2 * count2 * count2;
    cout << count1 + count2 << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;

    if (k % 2) {
        odd(n, k);
    } else {
        even(n, k);
    }

    return 0;
}

