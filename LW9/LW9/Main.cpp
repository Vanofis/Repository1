#include <iostream>
#include "LW9.h"

using namespace std;

int main()
{
	double m, t, c;

	cout << "Enter M:" << endl;
	cin >> m;
	cout << "Enter T:" << endl;
	cin >> t;
	cout << "Enter C:" << endl;
	cin >> c;

	double a = CalculateA(m, t, c);

	cout << fixed << "A: " << a << endl;

	double x, y;

	cout << "Enter X:" << endl;
	cin >> x;
	cout << "Enter Y:" << endl;
	cin >> y;

	double b = CalculateB(x, y);

	cout << fixed << "B: " << b << endl;

	cout << "Smallest: " << (a < b ? a : b) << endl;
	system("pause");
}

