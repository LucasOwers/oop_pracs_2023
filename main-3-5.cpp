#include<iostream>

extern double sum_even(double array[], int n);

int main() {
    double array[5] = {11,5,6,9,8};
    std::cout << "The sum of numbers in even positions is: " << sum_even(array, 5) << std::endl;
    return 0;
}