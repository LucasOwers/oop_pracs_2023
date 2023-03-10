#include<iostream>
#include<string>
#include<math.h>


void print_binary_str(std::string decimal_number){

    int number = std::stoi(decimal_number);
    int binary = 0;
    int exponent = 0;

    while (true) {
        int whole = number / 2;
        int rem = number % 2;

        binary += rem * pow(10.0,exponent);

        if (whole == 0) {
            std::cout << binary << "\n";
            return;
        }

        exponent++;
        number = whole;
    }
}




