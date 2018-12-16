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
    int N;
    cin >> N;
    vector<string> W;

    for (int i = 0; i < N; i++) {
        string Wi;
        cin >> Wi;
        W.push_back(Wi);
    }

    for (int i = 1; i < N; i++) {
        if (W[i].front() != W[i - 1].back()) {
            cout << "No" << endl;
            return 0;
        }
        for (int j = 0; j < i - 1; j++) {
            if (W[i] == W[j]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}

