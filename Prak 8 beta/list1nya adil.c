/* Program   : list1.c */
/* Deskripsi : file body modul list linier dengan representasi fisik pointer */
/* NIM/Nama  : 24060120140060 - Muhammad Adil Raja Saputra */
/* Tanggal   : 26 Oktober 2021 */
/***********************************/

#ifndef list1_C
#define list1_C
#include <stdio.h>
#include <stdlib.h>
#include "list1.h"

/* ----- Pembuatan List Kosong ----- */
void CreateList (List *L){
/* I.S.		: sembarang
   F.S.		: Terbentuk list kosong */

   // Kamus Lokal

   // Algoritma
   First(*L) = Nil;
}

/* ----- Test List Kosong ----- */
boolean ListEmpty (List L){
/* Mengirim true jika list kosong */

    // Kamus Lokal

    // Algoritma
    if (First(L) == Nil){
        return true;
    }
    else {
        return false;
    }
}

/* ----- Manajemen Memori ----- */
address Alokasi (infotype X){
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak Nil,
   dan misalnya menghasilkan P, maka
   Info(P) = X, Next(P) = Nil
   Jika alokasi gagal, mengirimkan Nil */

    // Kamus Lokal
    address P;

    // Algoritma
    P = (address)malloc(sizeof(ElmtList));
    if (P != Nil){
        info(P) = X;
        next(P) = Nil;
    }
    return P;
}

void Dealokasi (address P){
/* I.S.		: P terdefinisi
   F.S.		: P dikembalikan ke sistem
   Melakukan dealokasi/pengembalian address P */

    // Kamus Lokal

    // Algoritma
    info(P) = 0;
    next(P) = NULL;
    free(P);
}

/* ----- Primitif Berdasarkan Alamat ------ */
/* Penambahan Elemen Berdasarkan Alamat */
void InsertFirst (List *L, address P){
/* I.S. 	: Sembarang, P sudah dialokasi
   F.S.		: Menambahkan elemen ber-address P sebagai elemen pertama */

    // Kamus Lokal

    // Algoritma
    next(P) = First(*L);
    First(*L) = P;
}

void InsertAfter (List *L, address P, address Prec){
/* I.S.		: Prec pastilah elemen list dan bukan elemen terakhir,
			  P sudah dialokasi
   F.S. 	: Insert P sebagai elemen sesudah elemen beralamat Prec */

    // Kamus Lokal

    // Algoritma
    next(P) = next(Prec);
    next(Prec) = P;
}

void InsertLast (List *L, address P){
/* I.S.		: Sembarang, P sudah dialokasi
   F.S.		: P ditambahkan sebagai elemen terakhir yang baru */

    // Kamus Lokal
    address Last;

    // Algoritma
    if (First(*L) == Nil){
        InsertFirst(L,P);
    }
    else {
        Last = First(*L);
        while (next(Last) != Nil){
            Last = next(Last);
        }
        InsertAfter(L, P, Last);
    }
}

/* Penghapusan Sebuah Elemen */
void DelFirst (List *L, address *P){
/* I.S.     : List tidak kosong
   F.S.     : P adalah alamat elemen pertama list sebelum penghapusan
              Elemen list berkurang satu (mungkin menjadi kosong)
              First element yang baru adalah suksesor elemen pertama yang
              lama */

    // Kamus Lokal
    infotype E;

    // Algoritma
    *P = First(*L);
    E = info(*P);
    First(*L) = next(First(*L));
    next(*P) = Nil;
    Dealokasi(P);
}

void DelLast (List *L, address *P){
/* I.S.     : List tidak kosong
   F.S.     : P adalah alamat elemen terakhir list sebelum penghapusan
              Elemen list berkurang satu (mungkin menjadi kosong)
              Last element baru adalah predesesor elemen pertama yang
              lama, jika ada */

    // Kamus Lokal
    address Last, PrecLast;

    // Algoritma
    Last = First(*L);
    PrecLast = Nil;
    while (next(Last) != Nil){
        PrecLast = Last;
        Last = next(Last);
    }
    *P = Last;
    if (PrecLast = Nil){
        First(*L) = Nil;
    }
    else {
        next(PrecLast) = Nil;
    }
}

void DelAfter (List *L, address * Pdel, address Prec){
/* I.S.     : List tidak kosong. Prec adalah anggota list L.
   F.S.     : Menghapus Next(Prec) :
              Pdel adalah alamat elemen list yang dihapus */

    // Kamus Lokal

    // Algoritma
    *Pdel = next(Prec);
    next(Prec) = next(next(Prec));
    next(*Pdel) = Nil;
}

/* ----- Primitif Berdasarkan Nilai ----- */
/* Penambahan Elemen */
void InsVFirst (List *L, infotype X){
/* I.S.		: L mungkin kosong
   F.S. 	: X ditambahkan sebagai elemen pertama L
   Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen
   			  pertama dengan nilai X jika alokasi berhasil.
   			  Jika alokasi gagal, maka I.S.= F.S. */

    // Kamus Lokal
    address P;

    // Algoritma
    P = Alokasi(X);
    if (P != Nil){
        InsertFirst(L,P);
    }
}

void InsVLast (List *L, infotype X){
/* I.S. 	: L mungkin kosong
   F.S.		: X ditambahkan sebagai elemen terakhir L
   Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
   			  di akhir yaitu
   			  jika alokasi berhasil, elemen terakhir yang baru bernilai X
   			  Jika alokasi gagal, maka I.S.= F.S. */

    // Kamus Lokal
    address P;

    // Algoritma
    P = Alokasi(X);
    if (P != Nil){
        InsertLast(L,P);
    }
}

void InsVAfter (List *L, infotype X, infotype Xprec){
/* I.S. 	: L mungkin kosong
   F.S.		: X ditambahkan sebagai elemen setelah Prec
   Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
   			  setelah Prec yaitu
   			  jika alokasi berhasil, elemen setelah Prec yang baru bernilai X
   			  Jika alokasi gagal, maka I.S.= F.S. */

    // Kamus Lokal
    address P, Prec;

    // Algoritma
    P = Alokasi(X);
    Prec = First(*L);
    if (info(Prec) == Xprec){
        InsertAfter(L,P,Prec);
    }
    else {
        while (info(Prec) != Xprec && next(Prec) != Nil){
            Prec = next(Prec);
            if (info(Prec) == Xprec){
                InsertAfter(L,P,Prec);
            }
        }
    }
}
#endif // list1_C
