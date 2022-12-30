#include "divisi.h"

void createList(List_D &L){
    first(L) = NIL;
}

adr_D alokasi_scd(infotype_D x){
    adr_D P = new elm_D;
    info(P) = x;
    next(P) = NIL;
    return P;
}

void insertFirst(List_D &L, adr_D P){
    next(P) = first(L);
    first(L) = P;
}

void deleteFirst(List_D &L, adr_D P){
    P = first(L);
    if(P != NIL){
        first(L) = next(P);
        next(P) = NIL;
    }
}

void printInfo(List_D L){
    adr_D P = first(L);
    cout<<"List Divisi"<<endl;
    while(P != NIL){
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl<<endl;
}

adr_D findElement(List_D L, infotype_D x){
    adr_D P = first(L);
    while(P != NIL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return NIL;
}
