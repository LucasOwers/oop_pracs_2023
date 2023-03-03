#include<iostream>

extern void two_five_nine(int array[], int n);

int main(){
    int array[5] = {1,5,6,9,9};
    two_five_nine(array,5);
    return 0;
}
