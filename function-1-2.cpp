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