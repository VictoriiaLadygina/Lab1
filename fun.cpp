#include "core.h"

namespace core
{
    void core1(float *a)
    {
        *a = *a - (int)*a;
    }
    void core2(float &a)
    {
        a = a - (int)a;
    }
}
