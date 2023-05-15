# include <iostream>
using namespace std;

// build a program that multiply two integers numbers without using "*" operator.

int multiplyV1(int a, int b){
    int value = 0;
    int i = 0;
    while (i<b){
        i++;
        value += a;
    }
    return value;
}

int multiplyV2(int a, int b){
    int value = 0;
    int i = b;
    while (i>0){
        i--;
        value += a;
    }
    return value;
}

int main(){
    cout << "5 * 2 = " << multiplyV1(5,2) << endl;
    cout << "5 * 2 = " << multiplyV2(5,2) << endl;
}