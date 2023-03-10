#include<iostream>
#include<math.h>

int binary_to_int(int binary_digits[], int number_of_digits){

    int exponent = 0;
    int sum = 0;
    for (int i = 0; i < number_of_digits; i++){
        sum = sum + (binary_digits[i]) * pow(2, number_of_digits - i - 1);
    }
    return sum;
}