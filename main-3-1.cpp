#include<iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[1] = {0};
    std::cout << is_fanarray(array, 1) << std::endl;
    return 0;
}


