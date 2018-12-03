#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>

using namespace std;

int num(map<int, int>& factor, int n)
{
    int result = 0;
    for (map<int, int>::iterator itr = factor.begin(); itr != factor.end(); itr++) {
        if (itr->second >= n) { result++;}
    }

    return result;
}

int main()
{
    long long n;
    cin >> n;

    map<int, int> factor;
    for (int j = 2; j <= n; j++) {
        int current = j;
        for (int i = 2; i <= j; i++) {
            while (current % i == 0) {
                factor[i]++;
                current /= i;
            }
        }
    }

    int result = 0;
    result += num(factor, 74);
    result += num(factor, 24) * (num(factor, 2) - 1);
    result += num(factor, 14) * (num(factor, 4) - 1);
    result += (num(factor, 4) * (num(factor, 4) - 1) * (num(factor, 2) - 2)) / 2;

    cout << result << endl;

    return 0;
}

