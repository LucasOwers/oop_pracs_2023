#include<iostream>

//function declaration
int array_sum(int array[], int size){
    int array_sum = 0;
    for (int i = 0; i < size; i++) {
        array_sum = array_sum+array[i];
    }
    return array_sum;
};