# include <iostream>
using namespace std;

// build a program that divide two integers numbers without using "/" operator.

int division(int a, int b){
    int value = 0;
    while (a >= b) {
        value++;
        a -= b;
    }
    return value;
    // the remains value of a corresponds at the rest of division
}



int main(){
    cout << "5 / 2 = " << division(5,2) << endl;

}