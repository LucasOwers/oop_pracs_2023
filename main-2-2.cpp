#include <iostream>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    int number_of_digits = 4;
    int binary_digits[4] = {1,1,0,0};
    int sum = bin_to_int(binary_digits,number_of_digits);
    cout << sum << endl;
    return 0;
}