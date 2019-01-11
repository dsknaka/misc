#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int dfs(long long n, int n_max)
{
    int ret = 0;

    if (n > n_max) {
        return 0;
    }

    if (to_string(n).find('3') != string::npos
            && to_string(n).find('5') != string::npos
            && to_string(n).find('7') != string::npos
       ) {
        ret = 1;
    }

    ret += dfs(n * 10 + 3, n_max);
    ret += dfs(n * 10 + 5, n_max);
    ret += dfs(n * 10 + 7, n_max);

    return ret;
}


int main()
{
    long long n;
    cin >> n;

    cout << dfs(0, n) << endl;

    return 0;
}

