#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;


void callMenuList();


struct LIST {
    char product[15];
    int account;
    struct LIST *next;
};

struct LIST *shoppinglist = NULL; // = 0x00000000;


void showList(bool optionalMenu) {
    struct LIST *item = shoppinglist;
    cout << endl << "Shopping list: " << endl << endl;

    for (int i = 1; item; i++) {
        cout << "Article " << i << ": " << item->product << " x " << item->account << endl;
        item = item->next;
    }

    if(optionalMenu) callMenuList();
}

void insertElementList(char product[15], int account, int position){
    struct LIST *article = new LIST[1];
    strcpy(article->product, product);
    article->account = account;
    article->next = NULL;

    struct LIST *item = new LIST[1];

    // if (shoppinglist == NULL) {
    //     shoppinglist = article;
    // } else {
    //     item =  shoppinglist;
    //     bool added = false;
    //     while(added == false){
    //         if (item->next == NULL) {
    //             item->next = article;
    //             added = true;
    //         } else {
    //             item = item->next;
    //         }
    //     }
    // }

    if (position == 1) {
        article->next = shoppinglist;
        shoppinglist = article;
    } else {
        item = shoppinglist;
        for (int i = 1; item; i++) {
            if(i == position - 1) break;
            item = item->next;
        }
        article->next = item->next;
        item->next = article;
    }

    article = NULL;
    delete[] article;
    item = NULL;
    delete[] item;

}

void addElementList() {
    char product[15];
    int account;
    int position;

    showList(false);
    cout << endl << "Other number to the end of list: ";

    cout << endl << "Type the product you want to buy: ";
    cin >> product;
    cout << "Type the account: ";
    cin >> account;
    cout << "Type the position of new product: ";
    cin >> position;

    insertElementList(product, account, position);

    callMenuList();
}

void removeElementList() {
    showList(false);

    int number;
    cout << "Type the number of the article you want to remove: ";
    cin >> number;

    if (number == 1 && shoppinglist != NULL) {
        shoppinglist = shoppinglist->next;
    } else {
        struct LIST *item = new LIST[1];
        item = shoppinglist;

        for (int i = 1; item; i++) {
            if (i == number - 1) {
                if (item->next->next == NULL) {
                    item->next = NULL;
                } else {
                    item->next = item->next->next;
                }

                item = NULL;
                delete[] item;
            }

            if (item) {
                item = item->next;
            }


        }
    }

    callMenuList();
}

void createList() {

    char product[15];

    strcpy(product, "champu");
    insertElementList(product,2,1);

    strcpy(product, "orange");
    insertElementList(product,20,2);

    strcpy(product, "chocolate");
    insertElementList(product,50,3);

    cout << endl << "Default articles added to shopping list." << endl;

    callMenuList();

}

void callMenuList() {
    int option;
    do {
        cout << endl << endl << "Manager of Shopping list:" << endl;
        cout << "1 - Show shopping list." << endl;
        cout << "2 - Add article." << endl;
        cout << "3 - Remove article." << endl;
        cout << "4 - Create default shopping list." << endl;
        cout << "5 - Exit." << endl;
        cout << "Type the option: ";
        cin >> option;
    } while (option < 1 || option > 5);

    switch (option) {
        case 1:
            showList(true); break;
        case 2:
            addElementList(); break;
        case 3:
            removeElementList(); break;
        case 4:
            createList(); break;
        case 5:
            break;
    }
}

int main() {
    callMenuList();

    cout << "\n\n";
}