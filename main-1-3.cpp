#include <iostream>

//signature
extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {4,5,6,6,6};
    int number = 6;
    std::cout << "The number of elements that equal the number 6 in the array is: " << num_count(array, 5, number) << std::endl;
    return 0;
}
