#include <iostream>
#include "fract.h"
#include "date.h"

using namespace std;

int main() {
	int pos;
	cout << "Position: ";
	cin >> pos;

	switch (pos)
	{
	case 1:
	{
		cout << "FRACT" << endl;

		Fract f1(2, 3), f2(3), f3(1, 2);
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
		Fract f5(2, 3);
		cout << "f1 equal f5 - " << (f1 == f5) << endl;
		cout << "f1 equal f2 - " << (f1 == f2) << endl;
		cout << "f1 not equal f2 - " << (f1 != f2) << endl;
		cout << "f1 not equal f5 - " << (f1 != f5) << endl;

		Fract f6(1, -2), f7(-1, 2);
		cout << "f7 equal f6 - " << (f7 == f6) << endl;
		cout << "f6 < f7 - " << (f6 < f7) << endl;
		cout << "f6 <= f7 - " << (f6 <= f7) << endl;
		cout << "f6 > f3 - " << (f6 > f3) << endl;
		cout << "f6 >= f7 - " << (f6 >= f7) << endl;



		Fract sum;
		sum = sum + f1;
		sum = sum + f2;
		sum = sum + f3;
		cout << "f1 + f2 + f3 = " << sum << endl;
		cout << "Enter f4: ";
		Fract f4;
		try
		{
			cin >> f4;
		}
		catch (int)
		{
			cout << "division by zero" << endl;
		}
		//catch (char* err)
		//{
		//	cout << err << endl;
		//}
		// TODO: The fraction is still rewritten even if there is an error. What to do?
		cout << "f4 = " << f4 << endl;
		break;
	}
	case 2:
	{
		cout << "DATE" << endl << endl;
		Date d1;
		Date d2(1, 12, 2022);
		cout << d1 << '\n' << d2 << '\n';
		

	}
	default:
		cout << "Enter \"1\" or \"2\" number!";
	}


	//system("pause");
	return EXIT_SUCCESS;
}