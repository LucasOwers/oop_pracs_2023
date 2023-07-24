#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

int main(){
    int array[6] = {1,4,1,4,1,3};
    int n = 6;
    cout << "The weighted average of the given array is: " << weighted_average(array, 6) << endl;
    return 0;
}