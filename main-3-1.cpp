#include<iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[7] = {5,5,6,7,6,5,5};
    std::cout << is_fanarray(array, 7) << std::endl;
    std::cout << array[3] << std::endl;
    return 0;
}


