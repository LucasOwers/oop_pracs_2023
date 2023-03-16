#include<iostream>
using namespace std;


bool is_array_palindrome(int integers[], int length){
    for (int i = 0; i < length; i++){
        if (integers[i] == integers[length-i]){
         return true;
        }
    }
    return false;
}


int sum_integers(int integers[], int length){
    int sum = 0;
    if (length < 0){
        sum = -1;
    }
        for (int k = 0; k < length; k++){
            sum = sum + integers[k];
}
    return sum;
}

int palindrome_sum(int integers[], int length){
    if (is_array_palindrome(integers, length) == true){
        return sum_integers(integers, length);
    } else {
        return -2;
    }
}



