#include "header.h"
#include <string.h>

void extractWord(lStack &S, string inpString){
    string s(inpString);
    char p[s.length()];

    for(int i=0; i<sizeof(p); i++){
        p[i] = s[i];
        push(S, p[i]);
    }
}

void tryCase(lStack &S){
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
        popAll(S);
        cout<<"Type Word: ";
        cin>>inpWord;
        extractWord(S, inpWord);
//        palidrome = isPalidrome(S);
        cout<<endl<<"original Word: "<< inpWord<<endl;
        cout<<"Reverse Word: ";
        printInfo(S);
        isPalindrome(S);
    }

}

void createStack(lStack &S){
    Top(S)=0;
}

bool isEmpty(lStack S){
    if(Top(S)==0){
        return true;
    }else{
        return false;
    }
}
bool isFull(lStack S){
    if(Top(S)==100){
        return true;
    }else{
        return false;
    }
}
void push(lStack &S, infotype x){
    if(!isFull(S)){
        Top(S)=Top(S)+1;
        info(S)[Top(S)]=x;
    }
}
int pop(lStack &S){
    infotype x;

    x=info(S)[Top(S)];
    Top(S)=Top(S)-1;
    return x;
}
void printInfo(lStack S){
    int i=Top(S);

    while(i>=1){
        cout<<(info(S)[i]);
        i--;
    }
    cout<<endl;
}

void popAll(lStack &S){
    int i=Top(S);
    int clearS;

    while(i>=1){
        info(S)[Top(S)] = NULL;
        Top(S) = Top(S)-1;
        i--;
    }
    cout<<endl;
}

void isPalindrome(lStack S){
    int l = 1; // Start from leftmost and rightmost corners of str
    int r=Top(S), length=0;

    while(r > l){ // compare characters while they are same or not
        if(info(S)[l] != info(S)[r]){
            cout<<("Not Palindrome\n");
            return;
        }
        r--;
        l++;
    }
    cout<<("is palindrome\n");
}
