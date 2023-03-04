#include<iostream>

extern int median_array(int array[], int n);

int main(){
    int array[7] = {3,4,6,3,2,4,3};
    std::cout << median_array(array, 7) << std::endl;
    return 0;
}
