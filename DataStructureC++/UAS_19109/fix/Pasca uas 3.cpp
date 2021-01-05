#include<iostream>
#include<malloc.h>
#define Nil NULL

using namespace std;

struct nod {
    struct nod* left;
    char data;
    struct nod* right;
};

typedef struct nod NOD;
typedef NOD POKOK;

NOD* NodBaru(char item);
void BinaPokok(POKOK** T);
bool PokokKosong(POKOK* T);
void TambahNod(NOD** p, char item);
void preOrder(POKOK* T);
void inOrder(POKOK* T);
void postOrder(POKOK* T);

int main() { cout<<"Nama : Cahyani wulan prameswari"<<endl<<endl;
    POKOK* kelapa;
    char buah;

    BinaPokok(&kelapa);

    TambahNod(&kelapa, buah = 'C');
    TambahNod(&kelapa->left, buah = 'A');
    TambahNod(&kelapa->left->left, buah = 'H');
    TambahNod(&kelapa->left->right, buah = 'Y');
    TambahNod(&kelapa->right, buah = 'A');
    TambahNod(&kelapa->right->right, buah = 'N');
    TambahNod(&kelapa->right->right->left, buah = 'I');
    TambahNod(&kelapa->right->right->right, buah = 'W');

    cout << "Tampilan secara PreOrder : ";
    preOrder(kelapa);

    cout << endl;
    cout << "Tampilan secara InOrder : ";
    inOrder(kelapa);

    cout << endl;
    cout << "Tampilan secara PostOrder : ";
    postOrder(kelapa);


    cout << endl;
    cout << endl;

}

NOD* NodBaru(char item) {
    NOD* n;
    n = (NOD*)malloc(sizeof(NOD));

    if (n != Nil) {
        n->data = item;
        n->left = Nil;
        n->right = Nil;
    }
    return n;
}

void BinaPokok(POKOK** T) {
    *T = Nil;
}

bool PokokKosong(POKOK* T) {
    return((bool)(T == Nil));
}

void TambahNod(NOD** p, char item) {
    NOD* n;
    n = NodBaru(item);

    *p = n;
}

void preOrder(POKOK* T) {
    if (!PokokKosong(T)) {
        cout << " " << T->data;
        preOrder(T->left);
        preOrder(T->right);
    }
}

void inOrder(POKOK* T) {
    if (!PokokKosong(T)) {
        inOrder(T->left);
        cout << " " << T->data;
        inOrder(T->right);
    }
}

void postOrder(POKOK* T) {
    if (!PokokKosong(T)) {
        postOrder(T->left);
        postOrder(T->right);
        cout << " " << T->data;
    }
}
