#include<iostream>

extern bool is_ascending(int array[], int n);

int main(){
    int array[5] = {1,0,0,0,0};
    std::cout << is_ascending(array, 5) << std::endl;
    return 0;
}


