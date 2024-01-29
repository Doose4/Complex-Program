#include <string>
#include <list>
#include "ComplexNumber.hpp"

using namespace std;

class ComplexList
{
private:
	list<ComplexNumber> b_list;
	list<ComplexNumber> a_list;
	string name;

public:
	explicit ComplexList(string array_name);
	void add_to_list(ComplexNumber ComplexNumber);
	string sum();
	void get_list();
};