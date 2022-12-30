#include "absensi.h"

void createlist(List_A &L) {
    first(L) = NIL;
}
adr_A alokasi_trd(adr_P P, adr_D D) {
    adr_A H = new elm_A;
    pegawai(H) = P;
    divisi(H) = D;
    next(H) = NIL;
    prev(H) = NIL;
    return H;
}
void insertFirst(List_A &L, adr_A P) {
    if(first(L)== NIL){
        first(L) = P;
        next(P) = P;
        prev(P) = P;
    } else {
        next(P) = first(L);
        prev(P) = prev(first(L));
        next(prev(P)) = P;
        prev(first(L)) = P;
        first(L) = P;
    }
}
void deleteElement(List_A &L, adr_A &P){
    if(next(P)== P) {
        first(L) = NIL;
    } else {
        if(first(L) == P) {
            first(L) = next(P);
        }
        next(prev(P)) = next(P);
        prev(next(P)) = prev(P);
    }
    prev(P) = NIL;
    next(P) = NIL;
}

adr_A findElement(List_A L, adr_P P, adr_D D){
    adr_A H = first(L);
    if(H != NIL) {
        do{
            if(pegawai(H)== P && divisi(H)== D){
                return H;
            }
            H = next(H);
        }while(H != first(L));
    }
    return NIL;
}

adr_A findElement(List_A L, infotype_P px, infotype_D dx){
    adr_A H = first(L);
    if(H != NIL){
        do{
            if( info(pegawai(H)) == px && info(divisi(H))== dx ){
                return H;
            }
            H = next(H);
        }while(H!= first(L));
    }
    return NIL;
}

void connect(List_A &LA, List_P LP, List_D LD, infotype_P px, infotype_D dx){
    adr_P P = findElement(LP, px);
    adr_D D = findElement(LD, dx);
    if(P != NIL && D != NIL){
        adr_A H = alokasi_trd(P, D);
        insertFirst(LA, H);
    }
}

void disconnect(List_A &LA, infotype_P px, infotype_D dx){
    adr_A H = findElement(LA, px, dx);
    if(H != NIL){
        deleteElement(LA, H);
        delete H;
    }

}

void printAbsen(List_A LA, List_P LP){
    adr_P P = first(LP);
    cout<<"print Absensi dari Pegawai"<< endl;
    while(P != NIL){
        cout<<info(P)<< " - ";
        adr_A H = first(LA);
        if(H != NIL){
            do{
                if(pegawai(H)==P){
                    cout<<info(divisi(H))<<", ";
                }
                H = next(H);
            }while(H != first(LA));
        }
        cout<<endl;
        P = next(P);
    }
    cout<<endl<<endl;
}

void printAbsen(List_A LA, List_D LD){
    adr_D P = first(LD);
    cout<<"print pegawai dari divisi"<< endl;
    while(P != NIL){
        cout<<info(P)<< " - ";
        adr_A H = first(LA);
        if(H != NIL){
            do{
                if(divisi(H)==P){
                    cout<<info(pegawai(H))<<", ";
                }
                H = next(H);
            }while(H != first(LA));
        }
        cout<<endl;
        P = next(P);
    }
    cout<<endl<<endl;
}
