#include <iostream>
#include "Bike.h"
using namespace std;

int main() {
   Bike b1;
   cout << "Default brand: " << b1.get_brand() << ", Default code: " << b1.get_code() << endl;
   Bike b2("Adidas", 5634);
   cout << "Brand: " << b2.get_brand() << ", Code: " << b2.get_code() << endl;
return 0;
}