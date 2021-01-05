#include <iostream>
#define Top(S) S.Top
#define Tail(S) S.Tail
#define next(Q) Q->next
#define info(Q) Q->info

using namespace std;

typedef int infotype;
typedef struct elmQ *address;
struct elmQ{
    infotype info;
    address next;
};
struct Lqueue{
    address Tail;
    address Top;
};

void createQ(Lqueue &Q);
bool isEmpty(Lqueue Q);
address createElmt(string currency, infotype x);
void pushElmt(Lqueue &Q, address p);
void popElmt(Lqueue &Q);
void printQ(Lqueue Q);

