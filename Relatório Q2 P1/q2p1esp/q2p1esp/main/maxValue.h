#ifndef MAXVALUE_H
#define MAXVALUE_H

template <typename T>
T maxValue(T* arr, int size) {
    T max = *arr;
    for (int i = 1; i < size; i++)
        if (*(arr + i) > max)
            max = *(arr + i);
    return max;
}

#endif
