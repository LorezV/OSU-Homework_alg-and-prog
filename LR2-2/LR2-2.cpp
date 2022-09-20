#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int in;

	while (true) {
		cin >> in; cout << endl;

		switch (in)
		{
		case 1:
			cout << "Русская классика";
			break;
		case 2:
			cout << "Зарубежная классика";
			break;
		case 3:
			cout << "Мифы и легенды";
			break;
		case 4:
			cout << "Поэзия";
			break;
		case 5:
			cout << "Сказки";
			break;
		case 6:
			cout << "Детективы";
			break;
		case 7:
			cout << "Любовные романы";
			break;
		default:
			break;
		}

		cout << endl;
	}

	return 0;
}