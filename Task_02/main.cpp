#include <iostream>
#include "func.h"

struct S {
 
	double a, b;
	void print_S() {
		std::cout << "struct S contains: " << "a = " << a
				  <<", b = "<< b << std::endl;
	}
	
	double sum(double, double) {
		return this->a + this->b;
	}
	//constructor
	S(double a, double b) 
	{
		this->a = a;
		this->b = b;
	};

};

int main() {
	//SYNTAX ERRORS
	int i; //var i is not initialized
	double d_num = 5.123;

	//correct code:
	// int i = 0;
	// 
	//auto res = [i, d_num](S str) {
	//	return str.sum(str.a, str.b);
	//};

	//incorrect
	auto res = [i, d_num](S str) {
		str.sum(str.a, str.b);
	};
	
	//error_02
	// correct code with the arguments:
	//S str (i, d_num);

	//incorrect
	S str ();
	//!!!std:: cout << res(str); //main syntax error

	//SEMANTIC ERRORS
	int count = 0;
	int array[5]{ 1,2,3,4,5};

	//correct code
	//for (auto&el : array) {
	//	array[count] = el + 1;
	//	count++;
	//	std::cout << el << std::endl;

	//}
	//incorrect_01 
	for (auto el : array) {
		array[count] = el + 1;
		count++;
		std::cout << el << std::endl;
	}
	//incorrect_02
	for (auto &el : array) {
		std::cout << array[el] << std::endl;
	}

	//LINKER ERRORS
	//errors in multiply defined symbols
	
	//int a = 20;
	int b = 10;
	func(a, b);
}