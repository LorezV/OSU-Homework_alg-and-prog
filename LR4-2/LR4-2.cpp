#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(nullptr));

	const int length = 60;
	int U[length], F[length];

	// Заполняем массив рандомными данными.
	for (int i = 0; i < length; i++) {
		U[i] = rand();
	}

	// Переписываем в одномерный массив F значения квадратных корней елементов массива U.
	for (int i = 0; i < length; i++) {
		F[i] = sqrt(U[i]);
		cout << F[i] << endl;
	}

	return 0;
}