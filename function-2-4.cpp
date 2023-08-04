#include<iostream>
#include<math.h>

int array_min(int integers[], int length){
        if (length<=0){
        return -1;
    }
    int min_number = 0;
    for (int i = 0; i<length; i++){
        if (integers[i]<integers[i-1]){
            integers[i]=min_number;
        }
    }
    return min_number;
}

int array_max(int integers[], int length){
        if (length<=0){
        return -1;
    }
        int max_number = integers[0];
    for (int i = 0; i<length; i++){
        if (integers[i]>integers[i-1]){
            integers[i]=max_number;
        }
    }
    return max_number;
}

int sum_min_max(int integers[], int length){
    if (length<=0){
        return -1;
    }
    int sum = 0;
    sum = array_min(integers, length) + array_max(integers, length);
    return sum;
}