#include <iostream>
#include <vector>
#include <list>
#include "ring_buffer.h"

using namespace std;

void CheckType()
{
    cout << "short: ";
    cout << sizeof(short) << " ";
    cout << numeric_limits<short>::max() << " ";
    cout << numeric_limits<short>::min() << endl;

    cout << "int: ";
    cout << sizeof(int) << " ";
    cout << numeric_limits<int>::max() << " ";
    cout << numeric_limits<int>::min() << endl;

    cout << "long: ";
    cout << sizeof(long) << " ";
    cout << numeric_limits<long>::max() << " ";
    cout << numeric_limits<long>::min() << endl;

    cout << "long long: ";
    cout << sizeof(long long) << " ";
    cout << numeric_limits<long>::max() << " ";
    cout << numeric_limits<long long>::max() << " ";
    cout << numeric_limits<long long>::min() << endl;

}


int main(void)
{
    CheckType();

    return 0;
}

