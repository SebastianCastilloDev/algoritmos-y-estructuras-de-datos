#include <iostream>
using namespace std;

void showMA3x3(int ma[3][3]) {
    for (int i = 0; i < 3; i++){
        cout << endl;
        for (int j = 0; j < 3; j++) {
            cout << ma[i][j] << "\t";
        }
    }
}

void multiplyMatrix(){
    int A[3][3] = {{3,1,-2},{0,4,2},{7,5,1}};
    int B[3][3] = {{-1,0,8},{3,6,9},{0,0,3}};

    int C[3][3];

    showMA3x3(A);
    cout << endl << "\tx";
    showMA3x3(B);
    cout << endl << "\t=";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j]; 
        }
    }

    showMA3x3(C);


}

int main(){
    multiplyMatrix();
}