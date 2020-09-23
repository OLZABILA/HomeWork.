#include <iostream>
#include <cmath>

using namespace std;

int main()
 {
	double PI; PI = 3.1415;
	double SideSquare, Square;
	cout << "Enter Side Area ";
	cin  >> SideSquare;
	Square = SideSquare * SideSquare;

	double Radius, CircleArea;
	cout << "Enter Radius Circle ";
	cin >> Radius;
	CircleArea = PI * (Radius * Radius);

	double OneOnFoutSquare;
	OneOnFoutSquare = Square / 4;
	cout << "1/4 Square =  " << OneOnFoutSquare;

	double angle;
	angle = (CircleArea + Square) / 4;
	cout << "\a \n1/4 angle  =  " << angle << "\n \n \n";

	system ("pause");
}