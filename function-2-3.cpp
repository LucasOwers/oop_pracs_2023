#include <iostream>

bool is_array_palindrome(int integers[], int length){
    if (length<0){
        return false;
    }
    for (int i = 0; i<length; i++){
        if (integers[i]==integers[length-i]){
            return true;
        }
    }
    return false;
}
int sum_integers(int integers[], int length){
    if (length<0){
        return -1;
    }
    int sum = 0;
    for (int i=0; i<length; i++){
        sum = sum + integers[i];
        }
    return sum;
}


int palindrome_sum(int integers[], int length){
    if (length<0){
        return -1;
    }
    if (is_array_palindrome(integers, length)==true){
        return sum_integers(integers, length);
    }
    else return -1;
}
