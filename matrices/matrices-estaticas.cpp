#include <iostream>
using namespace std;

void staticMa() {
    //matriz llena de ceros
    int ma[9][3] = {0};

    //matriz con valores
    int ma1[3][9] = {{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}};

    //recorriendo un array
    int ma2[9][3];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 3; j++) {
            ma2[i][j] = (i+1)+(j+1);
        }
    }
}

void multidimensionalArrays() {
    staticMa();
}

int main() {
    multidimensionalArrays();
}