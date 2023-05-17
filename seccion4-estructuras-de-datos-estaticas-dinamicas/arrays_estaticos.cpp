#include <iostream>
using namespace std;

int main(){

    int arreglo[2] = {2,3,4}

    int train[7]; // array con 6 casillas
    train[0]=10;
    train[1]=12;
    train[2]=13;
    train[3]=11;
    train[4]=14;
    train[5]=12;
    train[6]=11;

    //recorrer un array
    for (int i = 0; i < 7; i++){
        cout << train[i] << endl;
    }

    //encontrar un elemento en un array
    int target = 13;
    for (int i = 0; i < 7; i++){
        if (target == train[i]) cout << "encontrado en la posicion " << i << endl;
    }
    
}

