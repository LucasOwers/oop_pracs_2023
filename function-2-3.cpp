#include<iostream>
#include<math.h>

bool is_palindrome(int integers[], int length){
    for (int i = 0; i < length/2; i++){
        if (integers[i] != integers[length - 1 - i]){
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length){
    if (length<=0){
        return -1;}
    int sum = 0;
    for (int i = 0; i<length; i++){
        sum = sum+integers[i];
        }
    return sum;
}


int sum_if_palindrome(int integers[], int length){
    if (length<=0){
        return -1;}

    if (is_palindrome(integers, length) == true){
        return sum_array_elements(integers, length);
    }
    else return -2;
}






