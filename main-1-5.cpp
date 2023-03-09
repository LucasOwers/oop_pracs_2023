#include<iostream>

void print_summed(int array1[3][3], int array2[3][3]);

int main(){
    int array1[3][3] = {{1,2,3},
                        {5,6,7},
                        {9,1,2}};
    int array2[3][3] = {{1,2,3},
                        {5,6,7},
                        {9,1,2}};
    print_summed(array1, array2);
    return 0;

}