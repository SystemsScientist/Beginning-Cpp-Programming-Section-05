/*
 * Author: Matt Johnson
 * Subject: Namespaces
 * Purpose:
 * Date: 05/13/2023
 *
 * Notes:
 *
 * 	- Reduces syntax
 * 	- Do not have to use std::
 *
 *
 */

#include <iostream>

using namespace std; // uses the entire std namespace

int main(void) {

	int favorite_number;

	cout << "Enter your favorite number between 1 and 100: ";
	cin >> favorite_number;

	cout << "Amazing!! That's my favorite number too!" << endl;
	cout << "No really!! " << favorite_number << " is my favorite number!" << endl;

	return 0;
}
