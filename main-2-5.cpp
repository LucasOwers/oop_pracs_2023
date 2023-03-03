#include<iostream>

extern bool is_descending(int array[], int n);

int main(){
    int array[5] = {1,5,6,7,8};
    std::cout << is_descending(array, 5) << std::endl;
    return 0;
}

