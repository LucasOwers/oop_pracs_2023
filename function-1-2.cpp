#include<iostream>

//function declaration
double array_mean(int array[], int size){
    double array_mean = 0.0;
    double array_sum = 0.0;{
    for (int i = 0; i < size; i++) {
        array_sum = array_sum+array[i];
    }
    array_mean = array_sum/size;
    }
    return array_mean;
}
