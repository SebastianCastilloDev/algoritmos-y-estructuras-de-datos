#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;

void checkPal(char *string){
    bool pal = true;
    for (int i=0; i < strlen(string) / 2 ; i++){
        if (string[i] != string[strlen(string)-i-1]) {
            pal = false;
        }
    }
}

int main(){
    char name[] = "Sebastian";
    cout << name << endl;
    cout << strlen(name) << endl;
    _strlwr_s(name);
    cout << name << endl;
    cout << _strrev(name);
}