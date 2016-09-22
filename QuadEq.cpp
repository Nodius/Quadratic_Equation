//Quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c, d, x1, x2;
	cout << "Enter numbers a,b,c: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	d = (b * b) - (4 * a*c);
	if (d > 0)
	{
		x1 = (-b) + (sqrt((b ^ 2)) - (4 * a*c)) / (2 * a);
		x2 = (-b) - (sqrt((b ^ 2)) - (4 * a*c)) / (2 * a);
		cout << "X1= " << x1 << endl;
		cout << "X2= " << x2 << endl;
	}
	else if (d == 0)
	{
		x1 = (-b) / (2 * a);
		cout << "One  square root" << endl;
		cout << "X1 and X2 = " << x1 << endl;
	}
	else if (d < 0)
	{
		cout << "Zero square roots"<<endl;
	}
	return 0;
}
