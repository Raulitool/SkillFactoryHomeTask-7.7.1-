#include "IntegerArray.h"
#include <iostream>

using namespace std;
int main() {

	try {
		IntegerArray arr(-1);
	}
	catch (bad_length& e) {
		std::cout << e.what() << std::endl;
	}

	IntegerArray arr(3);

	try {
		arr.get_value(5);
	}
	catch (bad_range& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		arr.set_value(0, 1);
		arr.set_value(3, 4);
	}
	catch (bad_range& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}