#include<iostream>

int max_element(int array[], int n){
    int max_element = 0;
    max_element = array[1];
    for (int i = 0; i < n; i++){
        if (array[i] >= max_element){
            max_element=array[i];
        }
    }
    return max_element;
}