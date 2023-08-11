#include <iostream>
#include <math.h>

using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits){
    int sum = 0;
    int power = 0;
    for (int i = number_of_digits-1; i>=0; i--){
        sum = sum + (binary_digits[i]*pow(2,power));
        power++;
    }
    return sum;
}
