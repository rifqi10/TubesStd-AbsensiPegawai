#include "pegawai.h"

void createList(List_P &L){
    first(L) = NIL;
}

adr_P alokasi(infotype_P x){
    adr_P P = new elm_P;
    info(P) = x;
    next(P) = NIL;
    return P;
}

void insertFirst(List_P &L, adr_P P){
    next(P) = first(L);
    first(L) = P;
}

void deleteFirst(List_P &L, adr_P P){
    P = first(L);
    if(P != NIL){
        first(L) = next(P);
        next(P) = NIL;
    }
}

void printInfo(List_P L){
    adr_P P = first(L);
    cout<<"List Pegawai"<<endl;
    while(P != NIL){
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl<<endl;
}

adr_P findElement(List_P L, infotype_P x){
    adr_P P = first(L);
    while(P != NIL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    return NIL;
}
