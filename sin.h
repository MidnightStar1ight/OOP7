#ifndef SIN_H
#define SIN_H

#include "polynom.h"
#include "function.h"


template <class number>
class Sin : public Function<number>
{
public:
    Array<number>calculateShit(int pow);
    Sin();
    Sin(int pow): Function<number>(pow, calculateShit(pow)){}
};

template <class number>
Array<number> Sin<number>::calculateShit(int pow)
{
    Array<number> derivatives;
    derivatives.resize(pow+1);
    for (int i = 0; i <= pow; i++) {
        if ( (i % 4 == 1) or (i % 4 == 3) )
            derivatives[i] = number(0, 0);
        if (i % 4 == 2)
            derivatives[i] = number(-1, 0);
        if (i % 4 == 0)
            derivatives[i] = number(1, 0);
    }
    return derivatives;
}

#endif // SIN_H
