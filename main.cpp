#include <iostream>
#include "Complex.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    std::cout << "Введите действительную и мнимую части первого комплексного числа: ";
    double re1, im1;
    std::cin >> re1 >> im1;
    Complex z1(re1, im1);

    std::cout << "Введите действительную и мнимую части второго комплексного числа: ";
    double re2, im2;
    std::cin >> re2 >> im2;
    Complex z2(re2, im2);

    // Вывод чисел
    std::cout << "Первое число: ";
    z1.Print();
    std::cout << "Второе число: ";
    z2.Print();

    // Арифметические операции
    Complex sum = z1 + z2;
    std::cout << "Сумма: ";
    sum.Print();

    Complex diff = z1 - z2;
    std::cout << "Разность: ";
    diff.Print();

    Complex prod = z1 * z2;
    std::cout << "Произведение: ";
    prod.Print();

    Complex quot = z1.Div(z2);
    std::cout << "Частное: ";
    quot.Print();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.