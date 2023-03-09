#include<iostream>

int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {{ 1, 2, 3, 4},
                       { 5, 6, 7, 8},
                       { 9, 1, 2, 3},
                       { 4, 5, 6, 7}};
    int sum = sum_diagonal(array);
    std::cout << "Sum of the main diagonal: " << sum << std::endl;
    return 0;
}


