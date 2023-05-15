# include <iostream>
using namespace std;

// build a program that calculate the difference without using "-" operator, only can use "+" operator.

int main(){
    int a, b;
    a = 5;
    b = 1;
    cout << a << " - " << b << " = ";
    int value = 0;
    while (a > b) {
        b++;
        value++;
    }

    cout << value;
}