# include <iostream>
using namespace std;

// build a program that calculate the difference between two integers numbers without using "-" operator, only can use "+" operator.

int subAlg(int a, int b){
    int value = 0;
    while (a > b){
        b++;
        value++;
    }
    return value;
}

int main(){
    cout << "5 - 1 = " << subAlg(5,1);
}