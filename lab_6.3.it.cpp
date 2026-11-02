#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// 1) Звичайна функція для обчислення кількості парних елементів (int)
int CountEven(const int* a, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

// 2) Шаблон функції для обчислення кількості парних елементів для довільного типу даних
template <typename T>
int CountEven(const T* a, const int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // Ініціалізація генератора випадкових чисел
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n] = { 2, 5, 8, 11, 14, 3, 6, 9, 12, 15 };

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;

    // Виклик звичайної функції
    int count1 = CountEven(a, n);
    cout << "CountEven(a, n) [regular function] = " << count1 << endl;

    // Виклик шаблону функції для типу int
    int count2 = CountEven<int>(a, n);
    cout << "CountEven<int>(a, n) [template] = " << count2 << endl;

    return 0;
}
