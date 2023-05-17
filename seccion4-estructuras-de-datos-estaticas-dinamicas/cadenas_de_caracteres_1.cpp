#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;



int main(){
    char name[] = "Sebastian";
    cout << name << endl;
    cout << strlen(name) << endl;
    _strlwr_s(name);
    cout << name << endl;
    cout << _strrev(name);
}