#include<iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[5] = {0,3,5,3,0};
    std::cout << is_fanarray(array, 5) << std::endl;
    return 0;
}


