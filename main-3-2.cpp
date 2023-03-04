#include<iostream>

extern int median_array(int array[], int n);

int main(){
    int array[5] = {5,3,2,1,4};
    std::cout << median_array(array, 5) << std::endl;
    return 0;
}
