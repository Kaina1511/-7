﻿using namespace std;
#include <iostream>
#include <ctime>
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
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}