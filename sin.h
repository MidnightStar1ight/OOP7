#ifndef SIN_H
#define SIN_H

#include "polynom.h"
#include "function.h"


template <class number>
class Sin : public Function<number>
{
public:
    Sin();
    Sin(int pow);
    number calculate(number value);
};

#endif // SIN_H
