/*Read user input from std::cin with a prompt for a number "Enter a number: ". 
Display the number back to std::cout with the format in scientific notation.*/

#include "stdafx.h"
#include <iostream>
#include <iomanip> // because setf(ios::scientific) would not work. error states that "name followed by "::" must 
				  //be a class or namespace name. 

using namespace std; // Both the Scientific member function or manipulator did not work without this namespace.
using std::cout; //redundant with use of namespace - see README
using std::cin;  //redundant with use of namespace - see README


int main()
{
	double number;
	
	cout << "Enter a number: ";
	cin >> number;


	cout << '\n' << scientific << number << '\n';


    return 0;
}

