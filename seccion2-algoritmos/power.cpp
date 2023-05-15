# include <iostream>
using namespace std;

// build an algorithm that powers to integers numbers without using math power operations.

int power(int a, int b){
    int value = 1;
    while (b > 0) {
        value *= a;
        b--;
    }
    return value;
}

int main() {
    int a = 5;
    int b = 3;
    cout << a << "^" << b << " = " << power(a,b);
}