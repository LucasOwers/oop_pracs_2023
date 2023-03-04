#include <iostream>

void print_pass_fail(char grade){

    switch (grade){
        default:
            std::cout << "Nothing.\n";
            break;
        case 'E':
        case 'D':
             std::cout << "fail.\n";
             break;
        case 'C':
        case 'B':
        case 'A':
             std::cout << "pass.\n";
             break;
    }
}