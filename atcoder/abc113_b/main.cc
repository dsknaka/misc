#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<map>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int T, A;
    cin >> T >> A;

    int min = 0;
    int result = 0;
    for (int i = 1; i <= N; i++) {
        int H = 0;
        cin >> H;
        int diff = abs((T * 1000 - H * 6) - A * 1000);
        if (i == 1 || diff < min) {
            min = diff;
            result = i;
        }
    }

    cout << result << endl;

    return 0;
}

