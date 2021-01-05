#include <iostream>
#define Top(S) (S).Top
#define info(S) (S).info

using namespace std;

typedef char infotype;
struct lStack{
    infotype info[100];
    int Top;
};

void extractWord(lStack &S, string inpString);
void tryCase(lStack &S);
void createStack(lStack &S);
bool isEmpty(lStack S);
bool isFull(lStack S);
void push(lStack &S, infotype x);
int pop(lStack &S);
void printInfo(lStack S);
void popAll(lStack &S);
void isPalindrome(lStack S);
