#ifndef FUNCTION_H
#define FUNCTION_H
#include "polynom.h"

template <class number>
class Function : public Polynom<number>
{
public:
    Function();
    Function(int pow, Array<number> coefs);
    number operator()(number value);
};

#endif // FUNCTION_H
