/*

#include "si.h"

template <class number>
Si<number>::Si(int pow) {
    Array<number> derivatives;
    for (int i = 0; i <= pow; i++) {
        if ( (i % 4 == 1) or (i % 4 == 3) )
            derivatives[i] = number(0, 0);
        if (i % 4 == 2)
            derivatives[i] = number(double(-1) / (i+1), 0);
        if (i % 4 == 0)
            derivatives[i] = number(double(1) / (i+1), 0);
    }
    Function<number> (pow, derivatives);
}


template<class number>
Si<number>::Si()
{

}


*/
