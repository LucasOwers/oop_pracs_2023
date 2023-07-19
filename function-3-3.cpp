#include <iostream>
using namespace std;

double weighted_average(int array[], int n){
    if (n<1){
        return 0;
    }

    double weighted_average = 0.0;

    int countzeros = 0;
    int countones = 0;
    int counttwos = 0;
    int countthrees = 0;
    int countfours = 0;
    int countfives = 0;
    int countsixes = 0;
    int countsevens = 0;
    int counteights = 0;
    int countnines = 0;


    for(int i = 0; i<n; i++){
        if (array[i]==0){
            countzeros++;
        }
        if (array[i]==1){
            countones++;
        }
        if (array[i]==2){
            counttwos++;
        }
        if (array[i]==3){
            countthrees++;
        }
        if (array[i]==4){
            countfours++;
        }
        if (array[i]==5){
            countfives++;
        }
        if (array[i]==6){
            countsixes++;
        }
        if (array[i]==7){
            countsevens++;
        }
        if (array[i]==8){
            counteights++;
        }
        if (array[i]==9){
            countnines++;
        }
    }

    weighted_average = (countzeros*(0*countzeros)+countones*(1*countones)+counttwos*(2*counttwos)+countthrees*(3*countthrees)+countfours*(4*countfours)+countfives*(5*countfives)+countsixes*(6*countsixes)+countsevens*(7*countsevens)+counteights*(8*counteights)+countnines*(9*countnines))/n;
    return weighted_average;
}