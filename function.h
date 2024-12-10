#ifndef FUNCTION_H
#define FUNCTION_H
#include "polynom.h"

template <class number>
class Function : public Polynom<number>
{
public:
    Function(int pow, Array<number> derivatives) {
        Array<number> coefs;
        coefs.resize(pow+1);
        coefs[0] = derivatives[0];
        int factorial = 1;
        for (int i = 0; i <= pow; i++) {
            factorial*=(i+1);
            coefs[i] = derivatives[i]/factorial;
        }
        this->coefs = coefs;
    }
    number operator()(number value) {
        return this->count_value(value);
    }
};

#endif // FUNCTION_H
