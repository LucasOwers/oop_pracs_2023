#include<iostream>
#include<math.h>

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
    int length = 6;
    int integers[6] = {6,0,1,1,0,6};
    int sum = sum_if_palindrome(integers, 6);
    std::cout << " " << sum << std::endl;
    return 0;
};

