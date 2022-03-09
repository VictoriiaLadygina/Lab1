#include <iostream>
#include <vector>
#include "core.h"

using namespace std;

int main()
{
    vector<double> vector1, vector2;
    double a;
    cin >> a;
    vector1.push_back(a);
    cin >> a;
    vector1.push_back(a);


    Square square, square2;
    cin >> square.x;
    cin >> square.y;

    square2 = square;
    vector2 = vector1;

    core::core1(&square, &vector1);
    cout << square.x << " " << square.y << endl;

    core::core2(square2, vector2);
    cout << square2.x << " " << square2.y << endl;

    return 0;
}
