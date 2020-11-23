#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
    const int b = 10, c = 2;
    srand(time(NULL));
    int a[b][c];
    for (int i = 0; i < b; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            a[i][j] = rand() % 100;
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
	int sum = 0, num = 0, sr = 0;
	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < c; ++j) {
			if (a[i][j] % 2)
			{
				sum += a[i][j];
				num++;
				sr = sum / num;
			}
		}
	}
	cout << "Среднее арифметическое четных элементов массива = " << sr << endl;
}

