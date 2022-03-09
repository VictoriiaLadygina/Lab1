#include "core.h"

namespace core
{
    void core1(float *a, float *b)
    {
        *a += *b;
    }
    void core2(float &a, float &b)
    {
        a += b;
    }
}


