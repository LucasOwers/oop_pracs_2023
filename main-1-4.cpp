#include<iostream>

void print_scaled(int array[3][3],int scale);

int main(){
    int array[3][3] = {{1,2,3},
                       {5,6,7},
                       {9,1,2}};
    int scale = 3;
    print_scaled(array, scale);
    return 0;

}