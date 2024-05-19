#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    int size;
    cout << "Введите размер векторов: ";
    cin >> size;

    // Инициализация векторов с заданным размером и чтение их элементов
    Vector v1(size);
    cout << "Введите элементы первого вектора:\n";
    v1.readFromInput();

    Vector v2(size);
    cout << "Введите элементы второго вектора:\n";
    v2.readFromInput();

    // Вычисление скалярного произведения
    int scalarProduct = v1 * v2;  // Использует перегруженный оператор *
    cout << "Скалярное произведение: " << scalarProduct << endl;

    return 0;
}
