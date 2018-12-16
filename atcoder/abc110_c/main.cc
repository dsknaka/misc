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
    string S, T;
    cin >> S >> T;

    vector<int> sv(26, 0), st(26, 0);

    for (int i = 0; i < S.length(); i++) {
        sv[S[i] - 'a']++;
        st[T[i] - 'a']++;
    }

    sort(sv.begin(), sv.end());
    sort(st.begin(), st.end());

    for (int i = 0; i < sv.size(); i++) {
        if (sv[i] != st[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

