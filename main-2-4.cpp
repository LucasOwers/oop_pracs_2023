#include<iostream>
#include<math.h>

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main(){
    int length = 6;
    int integers[6] = {6,0,1,1,0,6};
    int sum = sum_min_max(integers, 6);
    std::cout << " " << sum << std::endl;
    return 0;
};

