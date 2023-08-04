#include <iostream>
#include <limits>

int array_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int max_value = std::numeric_limits<int>::min();
    for (int i = 0; i < length; i++) {
        if (integers[i] > max_value) {
            max_value = integers[i];
        }
    }

    return max_value;
}

int array_min(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int min_value = std::numeric_limits<int>::max();
    for (int i = 0; i < length; i++) {
        if (integers[i] < min_value) {
            min_value = integers[i];
        }
    }

    return min_value;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }

    int min_value = array_min(integers, length);
    int max_value = array_max(integers, length);

    if (min_value == -1 || max_value == -1) {
        return -1; // One of the functions returned -1, indicating an invalid array
    }

    return min_value + max_value;
}

