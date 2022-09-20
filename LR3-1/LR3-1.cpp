#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int rSum = 0;
	int rMult = 0;

	for (int k = 8; k <= 20; k++) {
		rSum += 4 - 2 * k;
	}

	for (int k = 1; k <= 10; k++) {
		rMult *= 3 - k;
	}

	cout << rSum + rMult << endl;

	return 0;
}