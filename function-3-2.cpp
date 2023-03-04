#include<iostream>
#include <algorithm>

int median_array(int array[], int n){
    if (n < 1|| n % 2 == 0){
        return 0;
     }
     int median_array = 0;
     std::sort(array, array+n);
     median_array = array[n/2];
     return median_array;
}