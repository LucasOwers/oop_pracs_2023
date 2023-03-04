#include<iostream>

bool is_fanarray(int array[], int n){
    if (n < 1|| n % 2 == 0){
        return false;
    }
    int center = n/2;

    for (int i = 1; i < center; i++){
        if (array[i]<array[i-1]){
            return false;
        }

    }
    for (int i = center; i < n; i++){
        if (array[i]>array[i-1]){
            return false;
        }
    }
    return true;
}