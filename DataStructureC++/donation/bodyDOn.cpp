#include "headerDOn.h"

// Student ID = 1910631170170
//1 Euro = 17000
//1 Dolar = 14000
//1 BTC = 30000
//1 ETH = 25000

void createQ(Lqueue &Q){  //creating Queue
   Top(Q)=NULL;
   Tail(Q)=NULL;
}

bool isEmpty(Lqueue Q){ //For check if the Queue empty or not
    return Top(Q)==NULL && Tail(Q)==NULL;
}

address createElmt(string currency, infotype x){ //create elmt
    address p=new elmQ;

    next(p)=NULL;
    if(currency == "BTC"){ // Converting the currency
        x = x*(30000+170);
    }else if(currency == "ETH"){
        x = x*(25000+170);
    }else if(currency == "E"){
        x = x*(17000+170);
    }else if(currency == "D"){
        x = x*(14000+170);
    }
    info(p)=x;
}

void pushElmt(Lqueue &Q, address p){ //push Element to queue
    if(isEmpty(Q)){
        Top(Q)=p;
        Tail(Q)=p;
    }else{
        next(Tail(Q))=p;
        Tail(Q)=p;
    }
}

void popElmt(Lqueue &Q){ //pop elemt
    address p;

    if(isEmpty(Q)){
        cout<<"list is empty"<<endl;
        p = NULL;
    }else if(Top(Q)==Tail(Q)){
        p = Top(Q);
        createQ(Q);
        cout<<"last elmt deleted, list now empty"<<endl;
    }else{
        p = Top(Q);
        Top(Q)=next(Top(Q));
    }

    if(p!=NULL){
        cout<< "IDR "<< info(p) <<endl;
    }
}

void printQ(Lqueue Q){ //to print all the elmt in queue
    address p=Top(Q);

    while(p!=NULL){
        cout<<"IDR " <<info(p) <<", ";
        p=next(p);
    }
    cout<<endl;
}
