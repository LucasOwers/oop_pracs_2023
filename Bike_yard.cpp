#include<iostream>
#include<string>
#include "Bike.h"
#include "Bike_yard.h"

using namespace std;

Bike_yard::Bike_yard(){
    bike_capacity = 0;
    total_stock = 0;
    stock_quantity = 0;
    current_stock_list = nullptr;
}

Bike_yard::Bike_yard(int capacity) {
    bike_capacity = capacity;
    total_stock = 0;
    stock_quantity = 0;
    current_stock_list = new Bike[capacity];
}

int Bike_yard::get_total_stock_count(){
    return total_stock;
}

int Bike_yard::get_stock_quantity(int code){
    for (int i = 0; i<bike_capacity; i++){
        if (current_stock_list[i].get_code() == code){
            stock_quantity++;
        }

    }
    return stock_quantity;
}



Bike *Bike_yard::get_current_stock_list(){
    return current_stock_list;
}

bool Bike_yard::add_stock (Bike b){
    if (total_stock >= bike_capacity){
        return false;
    }
    else {
        current_stock_list[total_stock] = b;
        total_stock++;
        return true;
     }
}

Bike_yard::~Bike_yard(){
    delete[] current_stock_list;
}