#include <iostream>
#include <string>
#include <sstream>
#include "ComplexNumber.hpp"

using namespace std;

ComplexNumber::ComplexNumber(float a, float b)
{
	this->a = a;
	this->b = b;
}

string ComplexNumber::get_form()
{
	stringstream a1;
	stringstream b1;
	string brdge;
	
	if (b < 0)
	{	
		b = abs(b);	
		brdge = " - ";
	}
	else {
		brdge = " + ";
	}

	a1 << a;
	b1 << b;

	return a1.str() + brdge + b1.str() + "i";
};

string ComplexNumber::addition(ComplexNumber ComplexNumber) {
	float c = a + ComplexNumber.a;
	float d = b + ComplexNumber.b;

	stringstream c1;
	stringstream d1;
	string brdge;

	if (d < 0)
	{
		d = abs(d);
		brdge = " - ";
	}
	else {
		brdge = " + ";
	}

	c1 << c;
	d1 << d;

	return c1.str() + brdge + d1.str() + "i";
}

string ComplexNumber::subtraction(ComplexNumber ComplexNumber) {
	float c = a - ComplexNumber.a;
	float d = b - ComplexNumber.b;

	stringstream c1;
	stringstream d1;
	string brdge;

	if (d < 0)
	{
		d = abs(d);
		brdge = " - ";
	}
	else {
		brdge = " + ";
	}

	c1 << c;
	d1 << d;

	return c1.str() + brdge + d1.str() + "i";
}

string ComplexNumber::multiplication(ComplexNumber ComplexNumber) {
	float c = (a * ComplexNumber.a) - (b * ComplexNumber.b);
	float d = (a * ComplexNumber.b) + (b * ComplexNumber.a);
	stringstream c1;
	stringstream d1;
	string brdge;

	if (d < 0)
	{
		d = abs(d);
		brdge = " - ";
	}
	else {
		brdge = " + ";
	}

	c1 << c;
	d1 << d;

	return c1.str() + brdge + d1.str() + "i";
}

string ComplexNumber::division(ComplexNumber ComplexNumber) {
	float c = (a * ComplexNumber.a) + (b * ComplexNumber.b);
	float d = (a * ComplexNumber.b) - (b * ComplexNumber.a);
	float e = (ComplexNumber.a * ComplexNumber.a) + (ComplexNumber.b * ComplexNumber.b);

	stringstream c1;
	stringstream d1;
	stringstream e1;
	string brdge;

	if (d < 0)
	{
		d = abs(d);
		brdge = " + ";
	}
	else {
		brdge = " - ";
	}

	c1 << c;
	d1 << d;
	e1 << e;

	return c1.str() + brdge + d1.str() + "i / " + e1.str();
}