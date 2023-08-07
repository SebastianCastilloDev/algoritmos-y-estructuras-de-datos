#include <iostream>

using namespace std;

void callMenuQueue();
struct QUEUE {
    char name[15];
    struct QUEUE *prev;
};

struct QUEUE *CheckOutCounter = NULL;

void showQueue() {

    cout << endl << "Customers on CheckOutCounter: " << endl;

    struct QUEUE *aux = CheckOutCounter;
    for (int i = 1; aux; i++) {
        cout <<  "Position: "<< i << ": " << aux->name << endl;
        aux = aux->prev;
    }
    

    callMenuQueue();
}

void addElementQueue() {
    struct QUEUE client;
    cout << "type the name of the new client in the queue: ";
    cin >> client.name;
    client.prev = NULL;

    if (CheckOutCounter == NULL) {
        CheckOutCounter = &client;
    } else {
        struct QUEUE *aux = CheckOutCounter;
        while(aux->prev != NULL) {
            aux = aux->prev;
        }
        aux->prev = &client;
    }
    callMenuQueue();
}

void removeElementQueue() {
    if (CheckOutCounter) {
        cout << "Customer named: " << CheckOutCounter->name << " was served." << endl;

        struct QUEUE *aux = new QUEUE[1];
        aux = CheckOutCounter;
        CheckOutCounter = CheckOutCounter->prev;

        aux->prev = NULL;
        aux = NULL;
        delete[] aux;
    }
    callMenuQueue();
}

void callMenuQueue() {
    int option;

    do {
        cout << endl << endl << "Manager of queue: " << endl;
        cout << "1 - show queue." << endl;
        cout << "2 - add customer to queue." << endl;
        cout << "3 - serve customer." << endl;
        cout << "4 - exit." << endl;
        cout << "Type the option: ";
        cin >> option;
    } while (option < 1 || option > 4);

    switch (option)
    {
        case 1: showQueue(); break;
        case 2: addElementQueue(); break;
        case 3: removeElementQueue(); break;
        case 4: break;
    }
}

int main() {
    callMenuQueue();

    cout << "\n\n";
}