#include <iostream>
using namespace std;

void dinamicArray(){
    int size;
    cout << "\n Introduce el numero de elementos del array: ";
    cin >> size;

    int *array = new int[size];

    for (int i=0; i<size; i++){
        cout << "\nIntroduce el valor del elemento " << i << " : ";
        cin >> array[i];
    }

    for (int i=0; i<size; i++){
        cout << "en la posicion " << i << " el valor es " << array[i] << endl;
    }
}

int main(){
    dinamicArray();
}

