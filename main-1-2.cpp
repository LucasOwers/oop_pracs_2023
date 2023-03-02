#include <iostream>

//signature.

extern double array_mean(int array[], int n);


int main() {
    int array[5] = {4,5,6,9,8};
    std::cout << "The mean of the array is: " << array_mean(array, 5) << std::endl;
    return 0;
}