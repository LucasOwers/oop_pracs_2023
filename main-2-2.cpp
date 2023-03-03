#include<iostream>
//function declaration

 extern int max_element(int array[], int n);

int main() {
    int array[5] = {11,5,6,9,8};
    std::cout << "The largest number is: " << max_element(array, 5) << std::endl;
    return 0;
}