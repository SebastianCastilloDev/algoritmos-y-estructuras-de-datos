# include <iostream>
using namespace std;

// build an algorithm that calculates factorial of a given number.

int factorial(int n){
    int value = 1;
    for (int i = 1; i <= n; i++) {
        value *= i;
    }
    return value;
}

int main() {
    int n = 5;
    cout << n << "! = " << factorial(n); 
}