#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include "ComplexList.hpp"

using namespace std;

ComplexList::ComplexList(string array_name)
{
    this->name = array_name;
};

void ComplexList::add_to_list(ComplexNumber ComplexNumber)
{
    a_list.push_back(ComplexNumber);
    b_list.push_back(ComplexNumber);
};

string ComplexList::sum()
{
    float rl = 0;
    float im = 0;
    list<ComplexNumber>::iterator i;
    for (i = a_list.begin(); i != a_list.end(); ++i)
    {
        rl = rl + i->real();
        im = im + i->imnum();
    }

	stringstream c1;
	stringstream d1;
	string brdge;

	if (rl != 0) {
		if (im != 0) {
			if (im < 0)
			{
				im = abs(im);
				brdge = " - ";
			}
			else {
				brdge = " + ";
			}
			c1 << rl;
			d1 << im;

			return c1.str() + brdge + d1.str() + "i\n";
		}
		else {
			c1 << rl;
			return c1.str() + "\n";
		}
	}
	else {
		d1 << im;
		return d1.str() + "i\n";
	}

    return "NA";
};

void ComplexList::get_list()
{
    list<ComplexNumber>::iterator i;
    for (i = a_list.begin(); i != a_list.end(); ++i)
    {
        cout << i->real() << endl << i->imnum() << endl;
    }
    cout << endl;
}