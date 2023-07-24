#include<iostream>

bool is_fanarray(int array[], int n) {
    if (n < 1) {
        return false;
    }

    int center_one = n / 2;
    int center_two = n / 2;

    if (n % 2 != 0) {
        center_one = n / 2;
        center_two = n / 2;
    }

    if (array[center_one] != array[center_two]) {
        return false;
    }

    if (n > 1) {
        for (int i = 1; i < center_one; i++) {
            if (array[i] < array[i - 1]) {
                return false;
            }
            if (array[center_one] < array[i]) {
                return false;
            }
        }
        for (int i = center_two + 1; i < n; i++) {
            if (array[i] > array[i - 1]) {
                return false;
            }
            if (array[center_two] < array[i]) {
                return false;
            }
        }
    }
    return true;
}
