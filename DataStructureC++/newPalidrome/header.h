#include <iostream>
#define Top(S) S.Top
#define info(P) P->info
#define next(P) P->next

using namespace std;

typedef char infotype;
typedef struct elmtS *address;
struct elmtS{
    infotype info;
    address next;
};
struct Lstack{
    address Top;
};

void extractWord(Lstack &S, string inpString);
void tryCase(Lstack &S);
void createStack(Lstack &S);
address createElmt(infotype x);
bool isEmpty(Lstack S);
void push(Lstack &S, address p);
void pop(Lstack &S);
void reverseWord(Lstack &S);
bool isPalidrome(Lstack S);
