#include <iostream>
#include "headerPalindrom.h"

using namespace std;

int main(){
    const int MAXLOOP = 1000;
    int iCount;
    char inputString[100];

    cin>>iCount;
    if(iCount>1000){ //try case cannot be more than 1000
        cout<<"overload capacity, input number below 1001"<<endl;
        cin>>iCount;
    }
    for(int i=0; i<iCount; i++){ //loop for trycase
        cout<<"Type Word: ";
        cin>>inputString;
        cout<<endl<<"original Word: "<< inputString<<endl;
        isPalindrome(inputString);
        cout<<endl;
    }
    return 0;
}
