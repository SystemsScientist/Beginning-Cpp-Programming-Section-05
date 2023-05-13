/*
 * Author: Matt Johnson
 * Subject: Comments
 * Purpose: 
 * Date: 05/13/2023
 *
 * Notes:
 *
 * 	- This is a multi-line comment
 * 	- Programmer explanations are embedded in source code
 * 	- They are also notes, annotations, and anything the
 * 	  program is doing
 */

#include <iostream>

int main(void) {

	int favorite_number; // this is a single line comment

	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favorite_number; // here is another single line comment

	std::cout << "Amazing! That's my favorite number too!" << std::endl;
	std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;

	return 0;
}
