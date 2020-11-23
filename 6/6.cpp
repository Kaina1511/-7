#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int b = 10, c = 2;
	srand(time(NULL));
	int n;
	cout << "Введите число от 0 до 10: ";
	cin >> n;
	int a[b][c];
	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			a[i][j] = rand() % 11;
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "заменив все элементы меньше заданного числа числом "<< n <<"\n";
	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if (a[i][j] < n)
			{
				a[i][j] = n;
			}
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}