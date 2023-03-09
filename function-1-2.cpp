#include<iostream>

int is_identity(int array[10][10]){

    int check = 1;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i == j && array[i][j] != 1){
                check = 0;
            }

            else if (i != j && array[i][j] != 0) {
                check = 0;
            }

        }


    }
    return check;
}
