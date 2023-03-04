#include<iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[4] = {2,4,4,2};
    std::cout << is_fanarray(array, 4) << std::endl;
    return 0;
}


