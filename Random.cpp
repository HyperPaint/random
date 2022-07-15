#include <iostream>

using namespace std;

unsigned int a; // множитель
unsigned int c; // слагаемое
unsigned int m; // модуль
unsigned int seed; // начальное значение

unsigned int next();

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите множитель: " << endl;
	cin >> a;
	cout << "Введите слагаемое: " << endl;
	cin >> c;
	cout << "Введите модуль: " << endl;
	cin >> m;
	cout << "Последовательность: " << endl;
	seed = 0;
	cin.get();
	while (true)
	{
		cout << next();
		cin.get();
	}
	return 0;
}

unsigned int next()
{
	seed = (seed * a + c) % m;
	return seed;
}