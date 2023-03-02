#include<iostream>
//function declaration.

extern int count_evens(int number);

int main() {
    int number = 8;
    std::cout << "The sum of the array is: " << count_evens(number) << std::endl;
    return 0;
}

