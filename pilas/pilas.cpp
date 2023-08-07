#include <iostream>

using namespace std;

void callMenuStack();

struct STOCK {
    int serialnumber;
    struct STOCK *next;
};

struct STOCK* cheese = NULL;

void showStack() {
    cout << endl << "Report of products in stock: " << endl;
    cout << endl << "CHEESE: ";
    struct STOCK *aux;

    aux = cheese;

    while (aux) {
        cout << endl << "Serial number: " << aux->serialnumber;
        aux = aux->next;
    }

    callMenuStack();
}

void addElementStack() {
    int account;
    cout << "How much units of cheese do you want to add?: ";
    cin >> account;

    for (int i = 0; i < account; i++) {
        struct STOCK *unity = new STOCK[1];
        unity->serialnumber = rand() % 1000;
         if (cheese == NULL) {
            cheese = unity;
            unity->next =  NULL;
         } else {
            unity->next = cheese;
            cheese = unity;
         }
    }
    callMenuStack();
}

void removeElementStack() {
    int account;
    cout << endl << "How much units of cheese do you wnat to remove: ";
    cin >> account;

    struct STOCK *aux = cheese;
    for (int i = 0; i < account; i++) {
        if(aux == NULL) cout << endl << "Stock of cheese is empty" << endl;
        else {
            cheese = cheese->next;
            delete aux;
            aux = cheese;
        }
    }
    callMenuStack();
}

void callMenuStack() {
    int option;
    do {
        cout << endl << endl << "Manager of stock:" << endl;
        cout << "1 - show products." << endl;
        cout << "2 - add products." << endl;
        cout << "3 - remove products." << endl;
        cout << "4 - exit." << endl;
        cout << "Type the option: ";
        cin >> option;
    } while (option < 0 || option > 4);

    switch (option) {
    case 1: showStack(); break;
    case 2: addElementStack(); break;
    case 3: removeElementStack(); break;
    case 4: break;
    }
}

int main() {
    callMenuStack();
}