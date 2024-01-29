#include <iostream>
#include <list>
#include "Complexlist.hpp"

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
    float magnitude = m.magnitude();
    cout << magnitude << endl;

//conjugation
    tie(helpa, helpb) = m.conjugation();
    ComplexNumber d = ComplexNumber(helpa, helpb);
    cout << d.pretty_print();

//real
    float real = m.real();
    cout << real << endl;

//imaginary
    string imaginary = m.imaginary();
    cout << imaginary << endl;

//multiplication
    tie(helpa, helpb) = m.multiplication(n);
    ComplexNumber h = ComplexNumber(helpa, helpb);
    cout << h.pretty_print();

//division
    tie(helpa, helpb) = m.division(n);
    ComplexNumber i = ComplexNumber(helpa, helpb);
    cout << i.pretty_print();


//sum up everything...
    cout << "complete!!\n";

    ComplexList listed = ComplexList("list");

    listed.add_to_list(m);
    listed.add_to_list(n);
    listed.add_to_list(a);
    listed.add_to_list(b);
    listed.add_to_list(h);
    listed.add_to_list(i);

    cout << "The sum of all equations done is: " << listed.sum() << endl;

    //listed.get_list();

    return 0;
}