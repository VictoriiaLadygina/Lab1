#include <iostream>
#include "core.h"

using namespace std;

int main()
{
    float a, b, x, y, z, w;
    cin >> a;
    cin >> b;
    x = a;
    y = b;
    z = a;
    w = b;

    core::core1(&x, &y);
    cout << x << endl;

    core::core2(z, w);
    cout << z << endl;

    return 0;
}
