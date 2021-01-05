#include <iostream>
#include <stdlib.h>
#include <string>

#define Nil NULL

using namespace std;

struct Node {
    int info;
    struct Node* next;
};

typedef Node* Nod;

void Push(Nod* List, int input);
int Pop(Nod* List);
int konversieuro(int value);
int konversidollar(int value);
int konversibitcoin(int value);
int konversiethereum(int value);

void Push(Nod* List, int input){
    Nod tmp = *List;
    *List = (Nod)malloc(sizeof(**List));
    if (*List != Nil){
        (*List)->info = input;
        (*List)->next = tmp;
    }
}

int Pop(Nod* List){
    int result = -1;
    Nod tmp = *List;
    if(*List == Nil){
        return result;
    }
    else
    {
    for (Nod current = tmp; current != Nil; current = current->next)
        {
            if (current->next == Nil){
                result = current->info;
                tmp->next = Nil;
                return result;
            }
            tmp = current;
        }
    }
}

int konversieuro(int value){
     return value * (17000 + 170);
}

int konversidollar(int value){
     return value * (14000 + 170);
}

int konversibitcoin(int value){
     return value * (30000 + 170);
}

int konversiethereum(int value){
     return value * (25000 + 170);
}

int main()
{
    Node* Uang = Nil;
    int P = 0, input, jumlah = 0;
    string Perintah, Matauang;
    cout<<"";
    cin>>P;

    for(int i = 0; i < P; i++)
    {
        cin>>Perintah;
        if (Perintah == "push" ){
        cin>>Matauang;
        cin>>input;
        if (Matauang == "E")
            Push(&Uang, konversieuro(input));
        else if(Matauang == "D")
            Push(&Uang, konversidollar(input));
        else if (Matauang == "BTC")
            Push(&Uang, konversibitcoin(input));
        else if (Matauang == "ETH")
            Push(&Uang, konversiethereum(input));
        }
        else if (Perintah == "pop"){
        jumlah += Pop(&Uang);
        cout<<jumlah<<endl;
        }
    }
}
