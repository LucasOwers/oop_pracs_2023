#include <iostream>
#include "Bike.h"
#include "Bike_yard.h"
#include <string>
using namespace std;

int main() {
    Bike_yard Bike_yard(5); //capacity is 6
    //create the store of bikes.
    // create some musicians
    Bike b1("Adidas", 50);
    Bike b2("Archer", 21);
    Bike b3("Hi", 50);
    Bike b4("Cool", 50);
    Bike b5("Cringe", 32);
    Bike b6("biking", 6);
    //add them bikes
    if (Bike_yard.add_stock(b1)){
       cout << "Added bike 1 to the bike yard stock." << endl;
 } else {
       cout << "It was not possible to add this bike to the yard." <<endl;
    }
    if (Bike_yard.add_stock(b2)){
       cout << "Added bike 2 to the bike yard stock." << endl;
 } else {
       cout << "It was not possible to add this bike to the yard." <<endl;
    }
    if (Bike_yard.add_stock(b3)){
       cout << "Added bike 3 to the bike yard stock." << endl;
 } else {
       cout << "It was not possible to add this bike to the yard." <<endl;
    }
    if (Bike_yard.add_stock(b4)){
       cout << "Added bike 4 to the bike yard stock." << endl;
 } else {
       cout << "It was not possible to add this bike to the yard." <<endl;
    }
    if (Bike_yard.add_stock(b5)){
       cout << "Added bike 5 to the bike yard stock." << endl;
 } else {
       cout << "It was not possible to add this bike to the yard." <<endl;
    }
    if (Bike_yard.add_stock(b6)){
       cout << "Added bike 6 to the bike yard stock." << endl;
 } else {
       cout << "It was not possible to add this bike to the yard." <<endl;
    }
    // print the number of bikes in the oyard.
    cout << "This bike yard has " << Bike_yard.get_total_stock_count() << " bikes in stock." << endl;
    // print the number of bikes with a specific code.
    cout << "The bike yard has " << Bike_yard.get_stock_quantity(50) << " bikes with the same bike code of 50." << endl;

return 0;
}