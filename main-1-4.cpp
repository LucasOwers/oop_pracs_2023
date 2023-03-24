#include<iostream>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main(){
    int n = 3;
    PersonList pl = createPersonList(n);
    PersonList newList = shallowCopyPersonList(pl);
    for (int i = 0; i<n; i++){
        cout << "" << newList.people[i].name << ", " << newList.people[i].age << endl;
    }
    delete[] newList.people;
    delete[] pl.people;
    return 0;
}