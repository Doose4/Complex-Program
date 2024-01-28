//#include <cassert>
//#include <iostream>
//#include <string>
//#include "ComplexNumber.hpp"
//
//using namespace std;
//
//int main()
//{
//	ComplexNumber z = ComplexNumber(0,0);
//	ComplexNumber o = ComplexNumber(1,1);
//	ComplexNumber m = ComplexNumber(3, 5);
//	ComplexNumber b = ComplexNumber(7, 10);
//	ComplexNumber i = ComplexNumber(2000, -2000);
//	ComplexNumber e = ComplexNumber(3.3, 1.4);
//	ComplexNumber s = ComplexNumber(4, 1.11);
//	
//	cout << "Starting tests..." << endl;
//	assert(z.get_form() == "0 + 0i");
//	assert(o.get_form() == "1 + 1i");
//	assert(m.get_form() == "3 + 5i");
//	assert(b.get_form() == "7 + 10i");
//	//assert(i.get_form() == "2000 - 2000i");
//		string helpee = "2000 - 2000i";
//		string helpea = i.get_form();
//		int c;
//		int d;
//
//		for (int a = 0; a < helpee.length(); a++) {
//			c = helpee[a];
//			d = helpea[a];
//			cout << c << " - " << d << endl;
//		}
//		cout << helpee.length() << " - " << helpea.length() << endl;
//
//		if (helpea == helpee)
//		{
//			cout << "good" << endl;
//		}
//		else {
//			cout << "bad" << endl;
//		}
//	assert(e.get_form() == "3.3 + 1.4i");
//	assert(s.get_form() == "4 + 1.11i");
// 
//	assert(m.addition(b) == "10 + 15i");
//	assert(m.subtraction(b) == "-4 - 5i");
//	assert(m.multiplication(b) == "-29 + 65i");
//	assert(m.division(b) == "71 + 5i / 149");
//	
//	cout << "Your tests succeeded!" << endl;
//}