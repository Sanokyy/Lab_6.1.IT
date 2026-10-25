
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Формування масиву
void Create(int a[], int n, int Low, int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

// Виведення масиву
void Print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];

    cout << endl;
}

// Кількість від'ємних або непарних елементів
int Count(int a[], int n)
{
    int k = 0;

    for (int i = 0; i < n; i++)
        if (a[i] < 0 || a[i] % 2 != 0)
            k++;

    return k;
}

// Сума від'ємних або непарних елементів
int Sum(int a[], int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
        if (a[i] < 0 || a[i] % 2 != 0)
            s += a[i];

    return s;
}

// Заміна від'ємних або непарних елементів нулями
void Replace(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] < 0 || a[i] % 2 != 0)
            a[i] = 0;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 24;
    int a[n];

    int Low = -50;
    int High = 15;

    Create(a, n, Low, High);

    cout << "Original array:" << endl;
    Print(a, n);

    int k = Count(a, n);
    int s = Sum(a, n);

    cout << "Count = " << k << endl;
    cout << "Sum = " << s << endl;

    Replace(a, n);

    cout << "Modified array:" << endl;
    Print(a, n);

    return 0;
}
