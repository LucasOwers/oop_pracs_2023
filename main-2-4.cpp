#include<iostream>

extern bool is_ascending(int array[], int n);

int main(){
    int array[5] = {1,5,6,7,8};
    std::cout << std::boolalpha << is_ascending(array, 5) << std::endl;
    return 0;
}


