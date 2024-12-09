#ifndef SI_H
#define SI_H

#include "polynom.h"
#include "function.h"

template <class number>
class Si: public Function<number>
{
public:
    Si();
    Si(int pow);
};

#endif // SIN_H
