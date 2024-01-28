#include <iostream>
#include <string>
#include <sstream>
#include <tuple>
#include <cmath>
#include "ComplexNumber.hpp"

using namespace std;

ComplexNumber::ComplexNumber(float a, float b)
{
	this->a = a;
	this->b = b;
}

string ComplexNumber::pretty_print(){
	stringstream c1;
	stringstream d1;
	string brdge;

	if (a != 0) {
		if (b != 0) {
			if (b < 0)
			{
				b = abs(b);
				brdge = " - ";
			}
			else {
				brdge = " + ";
			}
			c1 << a;
			d1 << b;

			return c1.str() + brdge + d1.str() + "i\n";
		}
		else {
			c1 << a;
			return c1.str() + "\n";
		}
	} else {
		d1 << b;
		return d1.str() + "i\n";
	}
};

tuple<float, float> ComplexNumber::addition(ComplexNumber ComplexNumber) {
	float c = a + ComplexNumber.a;
	float d = b + ComplexNumber.b;

	return  make_tuple(c,d);
}

tuple<float, float> ComplexNumber::subtraction(ComplexNumber ComplexNumber) {
	float c = a - ComplexNumber.a;
	float d = b - ComplexNumber.b;

	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::negation() {
	float c = a * -1;
	float d = b * -1;

	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::magnitude() {
	float c = sqrt((a*a)+(b*b));
	float d = 0;
	
	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::conjugation() {
	float c;
	float d;

	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::real() {
	float c;
	float d;

	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::imaginary() {
	float c;
	float d;

	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::multiplication(ComplexNumber ComplexNumber) {
	float c = (a * ComplexNumber.a) - (b * ComplexNumber.b);
	float d = (a * ComplexNumber.b) + (b * ComplexNumber.a);
	
	return make_tuple(c, d);
};

tuple<float, float> ComplexNumber::division(ComplexNumber ComplexNumber) {
	float c = (a * ComplexNumber.a) + (b * ComplexNumber.b);
	float d = (a * ComplexNumber.b) - (b * ComplexNumber.a);
	float e = (ComplexNumber.a * ComplexNumber.a) + (ComplexNumber.b * ComplexNumber.b);

	c = c / e;
	d = d / e;

	return make_tuple(c, d);
};