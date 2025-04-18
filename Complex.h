//
// Created by ivan on 4/4/25.
//

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
    double *re; // Указатель на действительную часть числа
    double *im; // Указатель на мнимую часть числа

public:
    Complex(); // Конструктор по умолчанию (инициализирует число как 0 + 0i)
    Complex(const Complex& z);
    Complex(double x, double y); // Конструктор с параметрами (инициализирует число как x + yi)

    ~Complex();

    void SetRe(double x); // Устанавливает действительную часть числа
    void SetIm(double y); // Устанавливает мнимую часть числа

    double GetRe() const; // Возвращает действительную часть числа
    double GetIm() const; // Возвращает мнимую часть числа

    double Abs() const; // Возвращает модуль комплексного числа
    double Arg() const; // Возвращает аргумент комплексного числа
    void Print() const; // Выводит число в алгебраической форме (a + bi)
    void TrigPrint() const; // Выводит число в тригонометрической форме (r * (cos(phi) + i*sin(phi)))
    void ExpPrint() const; // Выводит число в экспоненциальной форме (r * e^(i*phi))

    // Complex operator+(const Complex& z) const;
    // Complex operator+(int number) const;

    Complex operator-(const Complex& z) const;
    Complex operator*(const Complex& z) const;
    Complex operator/(const Complex& z) const;

    Complex& operator++() {
        *this->re += 1;
        *this->im += 1;

        return *this;
    }

    Complex& operator++(int) {
        *this->re += 1;
        *this->im += 1;

        return *this;
    }

    Complex& operator--() {
        *this->re -= 1;
        *this->im -= 1;

        return *this;
    }

    Complex& operator--(int) {
        *this->re -= 1;
        *this->im -= 1;

        return *this;
    }

    bool operator==(const Complex &z) const {
        return *this->re == *z.re && *z.im == *this->im;
    }

    bool operator!=(const Complex &z) const {
        return !(*this == z);
    }

    bool operator>(const Complex &z) const {
        return this->Abs() > z.Abs();
    }

    bool operator<(const Complex &z) const {
        return this->Abs() < z.Abs();
    }

    bool operator>=(const Complex &z) const {
        return this->Abs() >= z.Abs();
    }

    bool operator<=(const Complex &z) const {
        return this->Abs() <= z.Abs();
    }

    Complex Add(const Complex &z) const; // Сложение двух комплексных чисел
    Complex Sub(const Complex &z) const; // Вычитание комплексных чисел
    Complex Mult(const Complex &z) const; // Умножение комплексных чисел
    Complex Div(const Complex &z) const; // Деление комплексных чисел
};

inline Complex operator+(int number, const Complex& z2) {
    return Complex(z2.GetRe() + number, z2.GetIm());
}

inline Complex operator+(const Complex& z1, const Complex& z2) {
    return Complex(z1.GetRe() + z2.GetRe(), z1.GetIm() + z2.GetIm());
}

#endif //COMPLEX_H
