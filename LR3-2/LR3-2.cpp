#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	float pCount = 0;
	float nCount = 0;
	float total = 32;

	for (float x = -5; x <= 3; x += 0.25) {
		float y = 3 * sin(x + 5);

		if (y >= 0) {
			pCount += 1;
		}
		else {
			nCount += 1;
		}
	}

	cout << "Процент положительных: " << pCount / total * 100 << endl;
	cout << "Процент отрицательных: " << nCount / total * 100 << endl;

	return 0;
}