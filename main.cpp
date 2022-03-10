#include <iostream>
#include "core.h"

using namespace std;

int main()
{
    float a, b;
    cin >> a;
    b = a;

    core::core1(&b);
    cout << b << endl;

    core::core2(b);
    cout << b << endl;

    return 0;
}
