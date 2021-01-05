#include <iostream>
#include "headerDOn.h"

using namespace std;

int main(){
    const int MAXQ = 20;
    int insCount, inpDonation;
    string instruction, currenncy;
    address P;
    Lqueue Q;

    createQ(Q);
    cin>>insCount;
    if(insCount > MAXQ){ //Instruction cannot be more than MAXQ
        cout<<"Overload capacity, enter n <= 20"<<endl;
        cin>>insCount;
    }
    for(int i=0; i<insCount; i++){ //loop read the instruction and currency
        cin>>instruction;
        if (instruction == "push"){ //if the instruction is "push"
            cin>>currenncy; cin>>inpDonation;
            pushElmt(Q, createElmt(currenncy, inpDonation));
        }else if (instruction == "pop"){ //else if the instruction is "pop"
            popElmt(Q);
        }
    }

    cout<<endl<<"print all queue left:";
    printQ(Q);

    return 0;
}
