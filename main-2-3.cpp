#include <iostream>

extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);
extern int palindrome_sum(int integers[], int length);

int main(){
    int length = 4;
    int integers[4] = {1,2,2,1};
    int sum = palindrome_sum(integers,length);
    std::cout << sum << std::endl;
    return 0;
}