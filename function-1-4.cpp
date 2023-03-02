#include<iostream>

//function declaration
int sum_two_arrays(int array[], int secondarray[], int size){
    int sum_two_arrays = 0;
    for (int i = 0; i < size; i++) {
        sum_two_arrays = sum_two_arrays+array[i];
        sum_two_arrays = sum_two_arrays+secondarray[i];
    }
    return sum_two_arrays;
}