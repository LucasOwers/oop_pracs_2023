#include<iostream>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n){
    PersonList total;
    total.numPeople = n;
    total.people = new Person[n];
    for (int i = 0; i<n; i++){
        total.people[i].name = "Jane Doe";
        total.people[i].age = 1;
    }
    return total;
}



PersonList deepCopyPersonList(PersonList pl){
    //creating the new array
    Person* newArray = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++) {
        newArray[i].name = pl.people[i].name;
        newArray[i].age = pl.people[i].age;
    }


    //creating the new struct
    PersonList newList;
    newList.people = newArray;
    newList.numPeople = pl.numPeople;

    return newList;
}