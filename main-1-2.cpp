#include<iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main() {
    int n = 2;
    PersonList total =  createPersonList(n);
    for (int i = 0; i<n; i++){
        cout << "" << total.people[i].name << ", " << total.people[i].age << endl;
    }
    delete[] total.people;
    return 0;
}