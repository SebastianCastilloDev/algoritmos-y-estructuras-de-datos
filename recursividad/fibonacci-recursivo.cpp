#include <iostream>
#include <ctime>

using namespace std;

double fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << fibonacci(10);
}