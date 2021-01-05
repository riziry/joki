#include "header.h"
#include <string.h>

void extractWord(Lstack &S, string inpString){
    string s(inpString);
    char p[s.length()];

    for(int i=0; i<sizeof(p); i++){
        p[i] = s[i];
        push(S, createElmt(s[i]));
    }
}

void tryCase(Lstack &S){
    const int TryMAX = 1000;
    int iCount;
    string inpWord, reversedWord;
    bool palidrome;

    cin>>iCount;
    while(iCount>TryMAX){
        cout<<"overload capacity, input number below 1001"<<endl;
        cin>>iCount;
    }
    for(int i=0; i<iCount; i++){
        cout<<"Type Word: ";
        cin>>inpWord;
        extractWord(S, inpWord);
        palidrome = isPalidrome(S);
        cout<<endl<<"original Word: "<< inpWord<<endl;
        cout<<"Reverse Word: ";
        reverseWord(S);
        if(palidrome){
            cout<<"\npalidrome"<<endl;
        }else{
            cout<<"\nnot palidrome"<<endl;
        }
        cout<<endl;
    }

}

void createStack(Lstack &S){
    Top(S) = NULL;
}

address createElmt(infotype x){
    address p=new elmtS;

    next(p)=NULL;
    info(p)=x;

    return p;
}

bool isEmpty(Lstack S){
    return Top(S) == NULL;
}

void push(Lstack &S, address p){
    if(isEmpty(S)){
        Top(S) = p;
    }else{
        next(p) = Top(S);
        Top(S) = p;
    }
}

void pop(Lstack &S){
    address p;

    if(isEmpty(S)){
        cout<< "stack is empty"<<endl;
    }else if(next(Top(S)) == NULL){
        p = Top(S);
        createStack(S);
    }else{
        p = Top(S);
        Top(S) = next(Top(S));
    }
    cout<<info(p);
}

void reverseWord(Lstack &S){
    address p = Top(S);
    int i=0;

    while(p!=NULL){
//        pop(S);
        cout<<info(p);
        p = next(p);
    }
}

bool isPalidrome(Lstack S){
    address p1=Top(S), p2;
    bool palidromeCheck=true;

    while(next(next(p1))==NULL){
        p2 = next(p1)
    }

    while(Top(S) == p2)

    return palidromeCheck;
}
