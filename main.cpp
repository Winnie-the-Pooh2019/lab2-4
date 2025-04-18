#include <iostream>
#include "string"
#include "Complex.h"
#include <algorithm>

using namespace std;

/**
 * Форматирование программного кода (цвет и переносы строк)
 * Первые три задания не надо реализовывать, просто применить для заданий ниже
 * Первые три с вектором, а вторые 3 без вектора
 * Чужие варианты можно не писать
 */

template <typename Alesha>
bool contains(Alesha value, Alesha* array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value)
            return true;
    }

    return false;
}

template <typename T>
int index_of(T value, T* array, int size) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value)
            return i;
    }

    return -1;
}

template <typename T>
bool change(T left, T right, T* array, int size) {
    if (!contains(left, array, size) || !contains(right, array, size))
        return false;

    int left_idx = index_of(left, array, size);
    int right_idx = index_of(right, array, size);

    swap(array[left_idx], array[right_idx]);

    return true;
}

int main() {
    int* num_arr = new int[5] {5, 4, 7, 9, 0};

    bool is_success = change(5, 9, num_arr, 5);
    if (is_success)
        cout << "Successful array swap" << endl;
    else
        cout << "Failed" << endl;

    for (int i = 0; i < 5; i++) {
        cout << num_arr[i] << endl;
    }
}