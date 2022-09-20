#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	float a = 4.35;
	float S, L;

	S = sqrt(3) / 4 * pow(a, 2);
	L = sqrt(3) / 2 * a;

	cout << "Площадь: " << S << endl << "Длина биссектрисы: " << L << endl;
	
	return 0;
}