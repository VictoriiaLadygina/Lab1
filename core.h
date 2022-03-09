#ifndef CORE_H_INCLUDED
#define CORE_H_INCLUDED
#include <vector>
#pragma once

class Square
{
public:
    double x, y;
};
namespace core
{
    void core1 (Square *, std::vector<double> *);
    void core2(Square &, std::vector<double> &);
}

#endif // CORE_H_INCLUDED

