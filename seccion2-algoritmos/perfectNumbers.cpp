# include <iostream>
using namespace std;

// Build an algorithms that determines if a given number is a perfect number.

void perfectNumber(int n){
    int sum = 0;
    for (int i = 1;i<=n/2;i++){
        if (n%i==0){
            sum += i;
        }
    }
    if (n == sum){
        cout << n << " is a perfect number" << endl;
    } else {
        cout << n << " is not a perfect number" << endl;
    }
}

int main(){
    perfectNumber(6);
    perfectNumber(7);
    perfectNumber(8);
    perfectNumber(28);
    perfectNumber(496);
    perfectNumber(8128);
}