#ifndef PEGAWAI_H_INCLUDED
#define PEGAWAI_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define NIL NULL

typedef string infotype_P;
typedef struct elm_P *adr_P;

struct elm_P{
    infotype_P info;
    adr_P next;
};

struct List_P{
    adr_P first;
};

void createList(List_P &L);
adr_P alokasi(infotype_P x);
void insertFirst(List_P &L, adr_P P);
void deleteFirst(List_P &L, adr_P P);
void printInfo(List_P L);
adr_P findElement(List_P L, infotype_P x);
#endif // PEGAWAI_H_INCLUDED
