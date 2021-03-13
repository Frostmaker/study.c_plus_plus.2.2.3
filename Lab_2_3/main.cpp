#include <iostream>
#include "fract.h"

using namespace std;

int main() {

	Fract f1(2, 3),f2(3),f3(1,2);
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl; 
	cout << "f3 = " << f3 << endl;
	Fract res = f1 + f2;
	cout << "f1 + f2 = " << res << endl;
	res = f1 + f3;
	cout << "f1 + f3 = " << res << endl;
	res = f2 - f3;
	cout << "f2 - f3 = " << res << endl;
	res = f1 * f1;
	cout << "f1 * f1 = " << res << endl;
	res = f3 / f2;
	cout << "f3 / f2 = " << res << endl;





	Fract sum;
	sum = sum + f1;
	sum = sum + f2;
	sum = sum + f3;
	cout << "f1 + f2 + f3 = " << sum << endl;
	//cout << "Enter f4: ";
	//Fract f4;
	//cin >> f4;
	//cout << "f4 = " << f4 << endl;



	//system("pause");
	return EXIT_SUCCESS;
}