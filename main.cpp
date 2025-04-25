#include <iostream>
#include "string"
#include "Complex.h"
#include "Function.h"
#include <algorithm>

using namespace std;

template<typename T>
int index_of(T value, T* array, int size) {
    for (int i = 0; i < size; i++) {
        if (value == array[i])
            return i;
    }

    return -1;
}

template<typename Bober>
bool contains(Bober number, Bober* array, int size) {
    for (int i = 0; i < size; i++) {
        if (number == array[i])
            return true;
    }

    return false;
}

template<typename T>
bool change(T left, T right, T* array, int size) {
    if (!contains(left, array, size) || !contains(right, array, size))
        return false;

    int left_idx = index_of(left, array, size);
    int right_idx = index_of(right, array, size);

    swap(array[left_idx], array[right_idx]);

    return true;
}

int main() {
    Function f(2);

    cout << f(5, 3) << endl;

    Complex z(1, 2);

    cout << z() << endl;

    cout << z[1] << endl;
}