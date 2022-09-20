#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(nullptr));

	int LL[29];
	const int length = sizeof(LL) / sizeof(LL[0]);
	float summ = 0;

	for (int i = 0; i < length; i++) {
		LL[i] = rand();
	}

	for (int i = 0; i < length - 1; i++) {
		if (abs(LL[i]) > LL[length - 1]) {
			summ = (summ + (float)LL[i]) / 2;
		}
	}
	
	cout << summ;

	return 0;
}