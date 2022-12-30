#ifndef DIVISI_H_INCLUDED
#define DIVISI_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define NIL NULL

typedef string infotype_D;
typedef struct elm_D *adr_D;

struct elm_D{
    infotype_D info;
    adr_D next;
};

struct List_D{
    adr_D first;
};

void createList(List_D &L);
adr_D alokasi_scd(infotype_D x);
void insertFirst(List_D &L, adr_D P);
void deleteFirst(List_D &L, adr_D P);
void printInfo(List_D L);
adr_D findElement(List_D L, infotype_D x);

#endif // DIVISI_H_INCLUDED
