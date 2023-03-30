#include <iostream>
#include "Bike.h"
using namespace std;

int main() {
   Bike m1;
   cout << "Default brand: " << m1.get_brand() << ", Default code: " << m1.get_code() << endl;
   Bike m2("Adidas", 5634);
   cout << "Brand: " << m2.get_brand() << ", Code: " << m2.get_code() << endl;
return 0;
}