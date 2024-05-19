#ifndef VECTOR_H
#define VECTOR_H

#include <initializer_list>
#include <vector>
#include <iostream>
using namespace std;

class Vector {
private:
    vector<int> elements;
    int size;

public:
    Vector(int size = 0);  // Определение конструктора с параметром по умолчанию
    Vector(std::initializer_list<int> elems);
    Vector(const Vector& other);
    Vector(Vector&& other) noexcept;

    ~Vector() = default;  // Использование деструктора по умолчанию

    void readFromInput();
    int operator*(const Vector& other) const;  // Определение скалярного произведения
};

#endif
