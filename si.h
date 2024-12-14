#ifndef SI_H
#define SI_H

#include "polynom.h"
#include "function.h"


template <class number>
class Si : public Function<number>
{
public:
    Array<number>calculateNumber(int pow);
    Si(int pow): Function<number>(pow, calculateNumber(pow)){}
};


template <class number>
Array<number> Si<number>::calculateNumber(int pow)
{
    Array<number> derivatives;
    derivatives.resize(pow+1);
    for (int i = 0; i <= pow; i++) {
        if ( (i % 4 == 1) or (i % 4 == 3) )
            derivatives[i] = number(0, 0);
        if (i % 4 == 2)
            derivatives[i] = number(double(-1) / double(i + 1), 0);
        if (i % 4 == 0)
            derivatives[i] = number(double(1) / double(i + 1), 0);
    }
    return derivatives;
}

#endif // SI_H
