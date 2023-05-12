/*
 * Author: Matt Johnson
 * Subject: C++ Keywords
 * Purpose:
 * Date: 05/12/2023
 *
 * Notes:
 *
 * 	Identifiers - main, favorite_number, cout, cin
 * 	Keywords - int, return
 *
 * Compile and Execute Program
 *
 * 	$ g++ name_of_program.cpp -o main
 * 	$ ./main
 */

#include <iostream>

int main(void) {

	int favorite_number;

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favorite_number;

	std::cout << "Amazing! That's my favorite number too!" << std::endl;
	std::cout << "No really!, " << favorite_number << " is my favorite number!" << std::endl;

	return 0;
}
