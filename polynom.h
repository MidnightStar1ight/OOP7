#ifndef POLYNOM_H
#define POLYNOM_H

#include "array.h"

template<class number>
class Polynom
{
private:
    size_t degree;
    number An;
    Array<number> roots;

protected:
    Array<number> coefs;

public:

    void clear();

    void fillRoots(const std::string &input);
    Array<number> multiplyPolynomials(const Array<number> &poly1, const Array<number> &poly2);
    void calculateCoefs();
    void setRoot(const int index, const number &newRoot);
    void addRoot(const number &newRoot);
    void setAn(const number &newAn);
    size_t getDegree() const;
    const number &getAn() const;
    const Array<number> &getRoots() const;
    const Array<number> &getCoefs() const;
    number evaluate(const number &x) const;
    number evaluateValue(number value)
    {
        int length=coefs.getSize();
        number res;
        number temp = value;
        for (int i = 0; i < length; ++i)
        {
            res += coefs[i]*temp;
            temp *= value;
        }
        return res;
    }

    void resize(const size_t newSize);

    void show(std::ostream &output, bool isFirstForm = true) const;
};

#endif // POLYNOM_H
