# include <iostream>
using namespace std;

void verifyPrime(int number){
    bool prime = true;
    for (int i=2;i<number/2; i++){
        if (number%i == 0) prime = false;
    }

    if (prime) cout << number << " is prime" << endl;
    else cout << number << " is not prime" << endl;
} 

int main(){
    int number = 10;
    verifyPrime(number);
    number = 13;
    verifyPrime(number);
}