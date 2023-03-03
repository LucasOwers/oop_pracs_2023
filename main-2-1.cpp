#include<iostream>
//function declaration

 extern int min_element(int array[], int n);

int main() {
    int array[5] = {9,5,6,9,8};
    std::cout << "The minimum element is: " << min_element(array, 5) << std::endl;
    return 0;
}
