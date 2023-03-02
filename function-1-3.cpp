#include <iostream>

//function declaration
int num_count(int array[], int size, int number){
    int num_count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i]==number){
           num_count++;
        }
    }
    return num_count;
}