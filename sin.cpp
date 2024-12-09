#include "sin.h"

template<class number>
Sin<number>::Sin()
{

}

template <class number>
Sin<number>::Sin(int pow) {
    Array<number> derivatives;
    for (int i = 0; i <= pow; i++) {
        if ( (i % 4 == 1) or (i % 4 == 3) )
            derivatives[i] = number(0, 0);
        if (i % 4 == 2)
            derivatives[i] = number(-1, 0);
        if (i % 4 == 0)
            derivatives[i] = number(1, 0);
    }
    Function<number> (pow, derivatives);

}

template<class number>
number Sin<number>::calculate(number value)
{
    return this->calculate(value);
}
