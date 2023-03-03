#include<iostream>

int min_element(int array[], int n){
    int min_element = 0;
    min_element = array[1];
    for (int i = 0; i < n; i++){
        if (array[i] <= min_element){
            min_element=array[i];
        }
    }
    return min_element;
}

