// Lab_04_4.cpp
// Малаховський Назар
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 20

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, R, y, xp, xk, dx;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed << setprecision(2);
	cout << "------------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << setw(10) << "|" << setw(10) << "y" << setw(10) << "|" << endl;
	cout << "------------------------------------------" << endl;

	for (x = xp; x <= xk; x += dx) {
		if (x < 0)
			y = -(1. / 2.) * x;
		else
			if (x >= 0 && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
	
	cout << "|" << setw(10) << x << setw(10) << "|" << setw(10) << y << setw(10) << "|" << endl;
	cout << "-----------------------------------------" << endl;
	}
	return 0;
}