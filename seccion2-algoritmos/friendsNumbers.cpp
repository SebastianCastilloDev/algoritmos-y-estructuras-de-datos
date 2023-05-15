# include <iostream>
using namespace std;

void verifyFriendNumbers(int a, int b) {
    int sumA = 0;
    for (int i = 1; i<=a/2; i++){
        if (a % i == 0) sumA += i;
    }

    int sumB = 0;
    for (int i = 1; i <= b/2; i++) {
        if (b % i == 0) sumB += i;
    }

    if((a == sumB) && (b == sumA)) cout << a << " and " << b << " are friends numbers" << endl;
    else cout << a << " and " << b << " are not friends numbers" << endl;
}

int main(){
    verifyFriendNumbers(6,8);
    verifyFriendNumbers(220,284);
}