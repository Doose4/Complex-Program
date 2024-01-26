#include <iostream>
#include <string>
#include "ComplexNumber.hpp"

using namespace std;

ComplexNumber::ComplexNumber(string name)
{
  this->name = name;
}

string ComplexNumber::get_numbers()
{
  return name;
};