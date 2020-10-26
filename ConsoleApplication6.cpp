#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a;
	if (a > 0)
	{
		a = pow(a, 3);
		cout << a;
	}
	else
	{
		if (a == 0)
			cout << a;
		else
		{
			if (a < 0)
				a = pow(a, 2);
			cout << a;
		}
	}
	if (b > 0)
	{
		b = pow(b, 3);
		cout << b;
	}
	else
	{
		if (b == 0)
			cout << b;
		else
		{
			if (b < 0)
				b = pow(b, 2);
			cout << b;
		}
	}
	if (c > 0)
	{
		c = pow(c, 3);
		cout << c;
	}
	else
	{
		if (c == 0)
			cout << c;
		else
		{
			if (c < 0)
				c = pow(c, 2);
			cout << c;
		}
	}

	

}
