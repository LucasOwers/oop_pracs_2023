#include<iostream>

int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int number_of_digits = 4;
    int binary_digits[] = {1,1,0,1};
    int sum = binary_to_int(binary_digits, number_of_digits);
    std::cout << "" << sum << std::endl;
    return 0;
}