#include <iostream>
#include "pegawai.h"
#include "divisi.h"
#include "absensi.h"

using namespace std;

List_P pegawai;
List_D divisi;
List_A absensi;

int main()
{
    cout << "||====================================================||" << endl;
    cout << "||            TUBES STD - Absensi Pegawai             ||" << endl;
    cout << "||====================================================||" << endl;
    cout << "||            1.Muhammad Aulia Rifqi Hafid            ||" << endl;
    cout << "||            2. Muhammad Ghazy Fawwaz Hakim          ||" << endl;
    cout << "||====================================================||" << endl;
    cout << endl;

    adr_P P;
    adr_D D;

    createList(divisi);
    insertFirst(divisi, alokasi_scd("Pengadaan"));
    insertFirst(divisi, alokasi_scd("Pemasaran"));
    insertFirst(divisi, alokasi_scd("Distribusi"));
    insertFirst(divisi, alokasi_scd("Akuntansi"));
    insertFirst(divisi, alokasi_scd("Manufaktur"));
    printInfo(divisi);


    createList(pegawai);
    insertFirst(pegawai, alokasi("Gabby"));
    insertFirst(pegawai, alokasi("Aurel"));
    insertFirst(pegawai, alokasi("Jubaedah"));
    insertFirst(pegawai, alokasi("Tasya"));
    insertFirst(pegawai, alokasi("Bella"));
    printInfo(pegawai);



    createlist(absensi);
    printAbsen(absensi, pegawai);
    cout<<"=-=-=-=-=-=-=-=-=-=-=-=-Connect=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

    connect(absensi, pegawai, divisi, "Gabby", "Pengadaan");
    connect(absensi, pegawai, divisi, "Aurel", "Pemasaran");
    connect(absensi, pegawai, divisi, "Tasya", "Distribusi");
    connect(absensi, pegawai, divisi, "Bella", "Akuntansi");
    connect(absensi, pegawai, divisi, "Jubaedah", "Manufaktur");
    printAbsen(absensi, pegawai);


    cout<<"=-=-=-=-=-=-=-=-=-=-=-Disconnect=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    disconnect(absensi, "Gabby", "Pengadaan");
    printAbsen(absensi, pegawai);

    cout<<"=-=-=-=-=-=-=-=-=-=-=-Divisi=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    printAbsen(absensi, divisi);
    return 0;
}
