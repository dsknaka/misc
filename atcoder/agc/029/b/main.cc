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
    vector<int> a_odd, a_even;

    for (int i = 0; i < n; i++) {
        int a_tmp;
        cin >> a_tmp;
        if (a_tmp % 2) {
            a_odd.push_back(a_tmp);
        } else {
            a_even.push_back(a_tmp);
        }
    }

    sort(a_odd.begin(), a_odd.end());
    sort(a_even.begin(), a_even.end());

    vector<pair<int, int> > a_pair;
    for (int i = 0; i < a_odd.size() - 1; i++) {
        for (int j = i + 1; j < a_odd.size() - 1; j++) {
            long long a_sum;
            a_sum = a_odd[i] + a_odd[j];
            while (1) {
                if (a_sum % 2 == 1) {
                    break;
                }
                a_sum /= 2;
                if (a_sum == 1) {
                    a_pair.push_back(make_pair(i, j));
                    break;
                }
            }
        }
    }


    return 0;
}

