#include<iostream>
using namespace std;

extern int palindrome_sum(int integers[], int length);


int main(){
    int length = 4;
    int integers[4] = {1,2,2,1};
    int sum = palindrome_sum(integers, length);
    cout << "" << sum << endl;
    return 0;
}