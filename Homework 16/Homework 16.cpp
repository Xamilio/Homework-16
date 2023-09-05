#include <iostream>
#include"time.h"
using namespace std;
int main()
{
	cout << "Home task #9.1.1\n";
	int const n = 10, x = 5, a = 10, b = 20;
	int m[n], m1[x], m2[x];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		m[i] = a + rand() % (b - a);
		cout << m[i] << " ";
	}
	cout << "\n\n";
	cout << "1  2\n";
	for (int i = 0; i < x; i++)
	{
		m1[i] = m[i];
		m2[i] = m[i + 5];
	}
	for (int i = 0; i < x; i++)
	{
		cout << m1[i] << " " << m2[i] << "\n";
	}

		cout << "Home task #9.1.2\n";
		int const n = 10, a = 10, b = 20;
		int mass1[n], mass2[n], result[n];
		srand(time(NULL));
		cout << "первое + второе = результат\n";

		for (int i = 0; i < n; i++)
		{
			mass1[i] = a + rand() % (b - a);
			mass2[i] = a + rand() % (b - a);
			result[i] = mass1[i] + mass2[i];
			cout << mass1[i] << " + " << mass2[i];
			cout << " = " << result[i] << "\n\n";
		}
}