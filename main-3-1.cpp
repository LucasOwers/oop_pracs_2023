#include<iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[4] = {0,3,3,0};
    std::cout << is_fanarray(array, 4) << std::endl;
    return 0;
}


