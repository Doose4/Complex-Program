#include <iostream>
#include <string>
#include<tuple>
using namespace std;

class ComplexNumber
{
private:
	float a;
	float b;

public:
	explicit ComplexNumber(float a, float b);
	string pretty_print();
	tuple<float, float> addition(ComplexNumber ComplexNumber);
	tuple<float, float> subtraction(ComplexNumber ComplexNumber);
	tuple<float, float> negation();
	tuple<float, float> magnitude();
	tuple<float, float> conjugation();
	tuple<float, float> real();
	tuple<float, float> imaginary();
	tuple<float, float> multiplication(ComplexNumber ComplexNumber);
	tuple<float, float> division(ComplexNumber ComplexNumber);
};