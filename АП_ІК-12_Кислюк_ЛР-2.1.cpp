// АП_ІК-12_Кислюк_ЛР-2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// АП ІК-12 Кислюк ЛР-2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Lab_02.cpp
// < Кислюк Владислав >
// Лабораторна робота № 2.1.
// Лінійні програми.
// Варіант 7

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double alpha;
	cout << "Enter alpha (in radians): ";
	cin >> alpha;

	double Pi = 4 * atan(1.0);

	double part1 = pow(cos(3.0 / 8.0 * Pi - alpha / 4.0), 2);
	double part2 = pow(cos(11.0 / 8.0 * Pi + alpha / 4.0), 2);
	double z1 = part1 - part2;
	double z2 = (sqrt(2.0) / 2.0) * sin(alpha / 2.0);
	cout << fixed << setprecision(20);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}// Step 1 comment
