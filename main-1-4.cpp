#include <iostream>

// signature declaration

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[5] = {4,5,6,9,8};
    int secondarray[5] = {7,4,2,5,0};
    std::cout << "The sum of the array is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
    return 0;
}