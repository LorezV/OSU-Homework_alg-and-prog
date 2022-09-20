#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c, d, f;
	
	cout << "Введите a, b, c, d, f через перенос строки: "; cin >> a >> b >> c >> d >> f; cout << endl;
	int r = max(a, b);
	r = max(r, max(c, d));
	r = max(r, min(12, f));
	cout << r;

	return 0;
}