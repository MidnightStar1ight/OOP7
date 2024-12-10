#ifndef SI_H
#define SI_H

#include "polynom.h"
#include "function.h"

template <class number>
class Si: public Function<number>
{
    Array<number> calculateShit(int pow);
public:
    Si();
    Si(int pow): Function<number>(pow, calculateShit(pow)){}
    number operator()(number value);
};

#endif // SIN_H
