#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int array_sum(int[], int);

int main() {
    int array[5] = {4,5,6,9,8};
    std::cout << "The sum of the array is: " << array_sum(array, 5) << std::endl;
    return 0;
}