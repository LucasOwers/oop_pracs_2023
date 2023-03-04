#include<iostream>

bool is_fanarray(int array[], int n){
    if (n <= 0){
        return false;
    }
    for (int i = 1; i < n/2; i++){
        if (array[i]<array[i-1]){
            return false;
        }

    }
    for (int i = n/2; i < n; i++){
        if (array[i]<array[i+1]){
            return false;
        }
    }
    return true;
}