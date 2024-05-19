#include "vector.h"
#include <cmath>
#include <cstdlib>
using namespace std;

Vector::Vector(int size) : size(size), elements(size, 0) {}

Vector::Vector(std::initializer_list<int> elems) : elements(elems), size(elems.size()) {}

Vector::Vector(const Vector& other) : elements(other.elements), size(other.size) {}

Vector::Vector(Vector&& other) noexcept : elements(std::move(other.elements)), size(other.size) 
{
    other.size = 0;
}

// Метод for reading elements from user input
void Vector::readFromInput() 
{
    for (int i = 0; i < size; ++i)
        {
        cout << "Enter element at index " << i << ": ";
        cin >> elements[i];
        }
}

// Перегруженный оператор для скалярного произведения
int Vector::operator*(const Vector& other) const 
{
    if (size != other.size) 
    {
        cout << "Vectors must have the same size!" << std::endl;
        exit(EXIT_FAILURE);
    }
    int result = 0;
    for (int i = 0; i < size; ++i)
        {
        result += elements[i] * other.elements[i];
        }
    return result;
}
