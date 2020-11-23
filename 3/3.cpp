using namespace std;
#include <iostream>
#include <ctime>
int main()
{
    setlocale(LC_ALL, "rus");
    const int b = 3, c = 3;
    srand(time(NULL));
    int a[b][c];
    for (int i = 0; i < b; ++i) {  
        for (int j = 0; j < c; ++j)
        {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl; 
    }
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j) 
            sum += a[i][j];
        }
    }
    cout << "Сумма элементов главной диагонали = " << sum << endl;

}