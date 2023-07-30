#include <iostream>
#include <ctime>

using namespace std;

void countdown(int number) {
    cout << endl << number;
    if (number > 0) countdown(number-1);
    else cout << endl << "BOOM";
}


int factorialRecursion(int number) {
    if (number == 0) {
        return 1;
    } else {
        return number*factorialRecursion(number-1);
    }
}

void hanoi(int n, int source, int dest, int aux) {
    if(n>0) {
        hanoi(n-1, source, aux, dest);
        cout << "Disk from position " << source << " to " << dest;
        hanoi(n-1, aux, dest, source);
    }
}
void callRecursion() {
    //countdown(5);
    //cout << endl << "5!: " << factorialRecursion(3);
    hanoi(2,1,3,2);
}

int main() {
    callRecursion();

    cout << "\n\n";
}