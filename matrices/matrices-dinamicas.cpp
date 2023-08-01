#include <iostream>
using namespace std;

void dinamicMa () {
    int rows;
    cout << "\nSet the number of rows:";
    cin >> rows;

    //array de punteros
    int **ma = new int*[rows];

    int *columns = new int[rows];

    for (int i = 0; i < rows; i++) {
        cout << "\n Set the number of columns for the row" << i+1 << ": ";
        cin >> columns[i];
        ma[i] = new int[columns[i]];
    }

    for (int i = 0; i < rows; i++) {
        cout << endl;
        for (int j = 0; j < columns[i]; j++) {
            ma[i][j] = i+j;
            cout << ma[i][j] << "\t";
        }
    }

    delete[] ma;
    delete[] columns;
}

int main() {
    dinamicMa();
}