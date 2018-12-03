#include<iostream>
using namespace std;
int main()
{

    cout << "a" << endl;
    cout << "b c" << endl;
    cout << "s" << endl;
    cout << "(a+b+c) s" << endl;

    int a;
    cin >> a;
    int b, c;
    cin >> b >> c;
    string s;
    cin >> s;
    cout << (a + b + c) << " " << s << endl;
    return 0;
}

