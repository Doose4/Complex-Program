#include <cassert>
#include <iostream>
#include <string>
#include "Complexlist.hpp"

using namespace std;


int main()
{
    float helpa, helpb;

    ComplexNumber val1 = ComplexNumber(0, 0);
    ComplexNumber val2 = ComplexNumber(1, 1);
    ComplexNumber val3 = ComplexNumber(4, 6);
    ComplexNumber val4 = ComplexNumber(10.1, 8.9);
    ComplexNumber val5 = ComplexNumber(2, 4.7);
    ComplexNumber val6 = ComplexNumber(13.66, 4);

    cout << "starting addition testing. . .\n";
    //addition
    tie(helpa, helpb) = val1.addition(val1);
    ComplexNumber add0 = ComplexNumber(helpa, helpb);
    assert(add0.pretty_print() == "0i\n");

    tie(helpa, helpb) = val1.addition(val2);
    ComplexNumber add1 = ComplexNumber(helpa, helpb);
    assert(add1.pretty_print() == "1 + 1i\n");

    tie(helpa, helpb) = val2.addition(val3);
    ComplexNumber add2 = ComplexNumber(helpa, helpb);
    assert(add2.pretty_print() == "5 + 7i\n");

    tie(helpa, helpb) = val2.addition(val4);
    ComplexNumber add3 = ComplexNumber(helpa, helpb);
    assert(add3.pretty_print() == "11.1 + 9.9i\n");

    tie(helpa, helpb) = val5.addition(val6);
    ComplexNumber add4 = ComplexNumber(helpa, helpb);
    assert(add4.pretty_print() == "15.66 + 8.7i\n");

    cout << "Addition test passed!\n";

    //subtraction
    cout << "starting subtraction testing. . .\n";

    tie(helpa, helpb) = val1.subtraction(val2);
    ComplexNumber sub1 = ComplexNumber(helpa, helpb);
    assert(sub1.pretty_print() == "-1 - 1i\n");

    tie(helpa, helpb) = val3.subtraction(val2);
    ComplexNumber sub2 = ComplexNumber(helpa, helpb);
    cout << sub2.pretty_print();
    assert(sub2.pretty_print() == "3 + 5i\n");

    cout << "Subtraction test passed!\n";
}