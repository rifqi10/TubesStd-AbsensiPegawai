#ifndef ABSENSI_H_INCLUDED
#define ABSENSI_H_INCLUDED

#include "pegawai.h"
#include "divisi.h"
#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define prev(P) P->prev
#define pegawai(P) P->pegawai
#define divisi(P) P->divisi
#define NIL NULL

typedef struct elm_A *adr_A;

struct elm_A {
    adr_P pegawai;
    adr_D divisi;
    adr_A next;
    adr_A prev;

};

struct List_A {
    adr_A first;
};

void createlist(List_A &L);
adr_A alokasi_trd(adr_P P, adr_D D);
void insertFirst(List_A &L, adr_A P);
void deleteElement(List_A &L, adr_A &P);

adr_A findElement(List_A L, adr_P P, adr_D D);
adr_A findElement(List_A L, infotype_P px, infotype_D dx);

void connect(List_A &LA, List_P LP, List_D LD, infotype_P px, infotype_D dx);
void disconnect(List_A &LA, infotype_P px, infotype_D dx);

void printAbsen(List_A LA, List_P LP);
void printAbsen(List_A LA, List_D LD);

#endif // ABSENSI_H_INCLUDED
