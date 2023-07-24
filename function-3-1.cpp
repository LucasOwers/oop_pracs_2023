#include<iostream>

bool is_fanarray(int array[], int n){
    if (n < 1){
        return true;
    }
    int center = n/2;

    if (n > 1){
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
    }
    return true;
}