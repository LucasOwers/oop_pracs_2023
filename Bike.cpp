#include<iostream>
#include<string>
#include "Bike.h"

using namespace std;

Bike::Bike(){
    bike_brand = "";
    bike_code = 0;
}

Bike::Bike(string brand, int code){
    bike_brand=brand;
    bike_code=code;

}

string Bike::get_brand(){
    return bike_brand;
}


int Bike::get_code(){
    return bike_code;
}
Bike::~Bike(){
}