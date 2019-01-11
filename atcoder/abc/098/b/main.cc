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
    string s;
    cin >> n >> s;

    int count_max = 0;
    for (int i = 0; i < n - 1; i++) {
        int count = 0;
        vector<int> vx(26, 0);
        vector<int> vy(26, 0);
        for (int x = 0; x < i + 1; x++) {
            vx[s[x] - 'a']++;
        }
        for (int y = i + 1; y < n; y++) {
            vy[s[y] - 'a']++;
        }
        for (int j = 0; j < 26; j++) {
            if (vx[j] * vy[j] != 0) {
                count++;
            }
        }
        count_max = max(count_max, count);
    }

    cout << count_max << endl;

    return 0;
}

