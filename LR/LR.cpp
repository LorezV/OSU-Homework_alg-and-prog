#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    float x = 0.333, f;
    int p;

    cout << "Введите P: "; cin >> p; cout << endl;
    f = sin(pow(x, 4) - 0.4 * p) + ((cos(x) + 1) / sqrt(abs(tan(p + 1))));
    cout << "Результат: " << f << endl;

    return 0;
}