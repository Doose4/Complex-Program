#include <string>
using namespace std;

class ComplexNumber {
private:
    string name{};

public:
    string get_numbers();
    explicit ComplexNumber(string name);
};