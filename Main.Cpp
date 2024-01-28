#include <iostream>
#include <tuple>
#include "ComplexNumber.hpp"

using namespace std;

int main()
{
    float helpa, helpb;

    ComplexNumber m = ComplexNumber(4,6);
    ComplexNumber n = ComplexNumber(2,3);

//addition
    tie(helpa, helpb) = m.addition(n);
    ComplexNumber a = ComplexNumber(helpa, helpb);
    cout << a.pretty_print();

//subtraction
    tie(helpa, helpb) = m.subtraction(n);
    ComplexNumber b = ComplexNumber(helpa, helpb);
    cout << b.pretty_print();

//negation
    tie(helpa, helpb) = m.negation();
    ComplexNumber c = ComplexNumber(helpa, helpb);
    cout << c.pretty_print();

//magnatude
    tie(helpa, helpb) = m.magnitude();
    ComplexNumber d = ComplexNumber(helpa, helpb);
    cout << d.pretty_print();
/*
//conjugation
    tie(helpa, helpb) = m.conjugation();
    ComplexNumber e = ComplexNumber(helpa, helpb);
    cout << e.pretty_print();

//real
    tie(helpa, helpb) = m.real();
    ComplexNumber f = ComplexNumber(helpa, helpb);
    cout << f.pretty_print();

//imaginary
    tie(helpa, helpb) = m.imaginary();
    ComplexNumber g = ComplexNumber(helpa, helpb);
    cout << g.pretty_print();

//multiplication
    tie(helpa, helpb) = m.multiplication(n);
    ComplexNumber h = ComplexNumber(helpa, helpb);
    cout << h.pretty_print();

//division
    tie(helpa, helpb) = m.division(n);
    ComplexNumber i = ComplexNumber(helpa, helpb);
    cout << i.pretty_print();
*/
    cout << "complete!!\n";


    return 0;
}