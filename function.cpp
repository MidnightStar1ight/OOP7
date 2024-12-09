#include "function.h"

template<class number>
Function<number>::Function()
{

}

template<class number>
Function<number>::Function(int pow, Array<number> derivatives)
{
    Array<number> coefs;
    coefs.resize(pow+1);
    coefs[0] = derivatives[0];
    int factorial = 1;
    for (int i = 0; i <= pow; i++) {
        factorial*=(i+1);
        coefs[i] = number(derivatives[i]/factorial, 0);
    }
}

template<class number>
number Function<number>::operator()(number value)
{
    return this->evaluate(value);
}
