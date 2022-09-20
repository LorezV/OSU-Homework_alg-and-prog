#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(nullptr));

	const int l = 6;
	int G[l][l];

	for (int i = 0; i < l; i++) {
		for (int j = 0; j < l; j++) {
			G[i][j] = rand();
		}
	}



	return 0;
}