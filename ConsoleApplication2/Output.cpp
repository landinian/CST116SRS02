/*Format the following sales information using C++ stream manipulators.
West: $ 36,364.87
Midwest: $ 12,431.33
East: $127,690.50
South: $ 9,200.00

Right align the labels and colons and align the $’s using i/o manipulators. 

Place value punctuation according to the U.S. convention of 3 digits per group separated by commas 
with decimal point for dollar/cent separator. 

Show 2 digits to the right of the decimal point even when there are not fractions of a dollar in the data. 

Align the values as expected for a column of numbers (See Figure 5.4.1 p114)*/

#include "stdafx.h"
#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
	cout << fixed << setprecision(2);

	float West = 36364.87F;
	float Midwest = 12431.33F;
	float East = 127690.50F;
	float South = 9200.00F; 
	
	cout << right << "West" << setw(4) << ":" << left << "$" << '\t' << '\t' << setw(9) << right << West << endl;
	cout << right << "Midwest" << ":" << left << "$" << '\t' << '\t' << setw(9) << right << Midwest << endl;
	cout << right << "East" << setw(4) << right << ":" << left << "$" << '\t' << '\t' << East << endl;
	cout << right << "South" << setw(3) << right << ":" << left << "$" << '\t' << '\t' << setw(9) << right << South << endl;
	
	

    return 0;
}

