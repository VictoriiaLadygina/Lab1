#include "core.h"

namespace core
{
    void core1(Square *square, std::vector<double> *vector1)
    {
        square->x += vector1->at(0);
        square->y += vector1->at(1);
    }
    void core2(Square &square, std::vector<double> &vector1)
    {
        square.x += vector1.at(0);
        square.y += vector1.at(1);
    }
}
