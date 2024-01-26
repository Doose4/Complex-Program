#include <string>
using namespace std;

class ComplexNumber
{
private:
	float a{};
	float b{};

public:
	explicit ComplexNumber(float a, float b);
	string get_form();
	string addition(ComplexNumber ComplexNumber);
	string subtraction(ComplexNumber ComplexNumber);
	string multiplication(ComplexNumber ComplexNumber);
	string division(ComplexNumber ComplexNumber);
};