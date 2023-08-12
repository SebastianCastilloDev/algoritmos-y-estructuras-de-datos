#include <iostream>

using namespace std;
void callMenuTree();

struct BTREE {
    int number;
    struct BTREE *l;
    struct BTREE *r;
};

struct BTREE* tree = NULL;

void showTreeInorden(struct BTREE *aux) {
    if (aux) {
        showTreeInorden(aux->l);
        cout << aux->number << " "; 
        showTreeInorden(aux->r);
    }
}
void showTreePreorden(struct BTREE *aux) {
    if (aux) {
        cout << aux->number << " "; 
        showTreePreorden(aux->l);
        showTreePreorden(aux->r);
    }
}
void showTreePostorden(struct BTREE *aux) {
    if (aux) {
        showTreePostorden(aux->l);
        showTreePostorden(aux->r);
        cout << aux->number << " "; 
    }
}

void showTree() {
    int option;
    do {
        cout << endl << endl << "Select an option: " << endl;
        cout << "1 - Inorden." << endl;
        cout << "2 - Preorden." << endl;
        cout << "3 - Postorden." << endl;
        cout << "Type the option: ";
        cin >> option;
    } while (option < 1 || option > 3);

    switch (option) {
        case 1:
            cout << endl << endl << "TREE SHOWED INORDEN" << endl;
            showTreeInorden(tree);
            cout << endl << endl;
            break;
        case 2:
            cout << endl << endl << "TREE SHOWED PREORDEN" << endl;
            showTreePreorden(tree);
            cout << endl << endl;
            break;
        case 3:
            cout << endl << endl << "TREE SHOWED POSTORDEN" << endl;
            showTreePostorden(tree);
            cout << endl << endl;
            break;
    }
    callMenuTree();
}
void insertNodeTree(int number) {
    struct BTREE *node = new BTREE[1];
    node->number = number;
    node->l = NULL;
    node->r = NULL;

    if (tree == NULL) {
        tree = node;
    } else {
        struct BTREE *aux = tree;
        struct BTREE *prev;
        prev = aux;

        while(aux){
            prev = aux;
            if (number < aux->number) aux = aux->l;
            else aux = aux->r;
        }

        if (number < prev->number) prev->l = node;
        else prev->r = node;
    }
    callMenuTree();
}
void addNodeTree() {
    int number;
    cout << "Type a number: ";
    cin >> number;
    insertNodeTree(number);
    callMenuTree();
}

void createDefaultTree() {
    insertNodeTree(5);
    insertNodeTree(4);
    insertNodeTree(9);
    insertNodeTree(-2);
    insertNodeTree(8);
    insertNodeTree(0);
    insertNodeTree(3);
    insertNodeTree(6);

    callMenuTree();
}

void removeNodeTree(struct BTREE *aux, struct BTREE *prev) {
    
    if (aux) {
        removeNodeTree(aux->l, aux);
        removeNodeTree(aux->r, aux);

        cout << endl << "Deleted Node: " << aux->number << endl;
        if (prev) {
            if(aux->number < prev->number) prev->l = NULL;
            else prev->r = NULL;
        }
        if (aux == tree) tree = NULL;
        delete aux;
    }

}

void searchNodeTree(int number, bool remove) {
    
    int rounds;

    struct BTREE *searching = tree;
    struct BTREE *prev = NULL;

    for (rounds = 0; searching ;rounds++){
        if(number == searching->number) {
            break;
        } else {
            prev = searching;
        }

        if (number < searching->number) {
            searching = searching->l;
        } else {
            searching = searching->r;
        }
    }

    if (searching == NULL) cout << endl << "Node " << number << " not found";
    else {
        if(!remove) cout << endl << "Node " << number << " found after " << rounds+1 << " rounds";
        else removeNodeTree(searching, prev);
    }

    callMenuTree();

}

void searchNode() {
    int number;
    cout << "What's the number do you want to search";
    cin >> number;
    searchNodeTree(number, false);
}
void removeNode() {
    int number;
    cout << "What's the number do you want to remove";
    cin >> number;
    searchNodeTree(number, true);
}

void callMenuTree() {
    int option;
    do {
        cout << endl << endl << "Manager of tree: " << endl;
        cout << "1 - show tree." << endl;
        cout << "2 - add node." << endl;
        cout << "3 - search node." << endl;
        cout << "4 - create default tree." << endl;
        cout << "5 - remove node." << endl;
        cout << "6 - exit." << endl;
        cout << "Type the option: ";
        cin >> option;
    } while (option < 1 || option > 5);

    switch (option) {
        case 1: showTree(); break;
        case 2: addNodeTree(); break;
        case 3: searchNode(); break;
        case 4: createDefaultTree(); break;
        case 5: removeNode(); break;
        case 6: break;
    }
}

int main() {
    callMenuTree();
}