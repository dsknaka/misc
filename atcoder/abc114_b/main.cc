#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    string s;
    cin >> s;

    int s3 = 0;
    int s3_abs = 0;
    int abs_min = 754;

    for (int i = 0; i <= s.length() - 3; i++) {
        s3 = atoi(s.substr(i, 3).c_str());
        s3_abs = abs(s3 - 753);
        if (s3_abs < abs_min) {
            abs_min = s3_abs;
        }
    }

    cout << abs_min << endl;

    return 0;
}

