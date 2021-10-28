/* Program   : list1.c */
/* Deskripsi : file REALISASI modul linked list */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 26/10/2021 */
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

    // kamus lokal

    // algoritma
    First(*L) = Nil;
}

/* ----- Test List Kosong ----- */
boolean ListEmpty (List L) {
/* Mengirim true jika list kosong */

    // kamus lokal

    // algoritma
    return First(L) == Nil;
}

/* ----- Manajemen Memori ----- */
address Alokasi (infotype X){
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak Nil, 
   dan misalnya menghasilkan P, maka
   Info(P) = X, Next(P) = Nil
   Jika alokasi gagal, mengirimkan Nil */

    // kamus lokal
    address P;

    // algoritma
    P = (address)malloc(sizeof(ElmtList));
    if (P!=Nil) {
        info(P) = X;
        next(P) = Nil;
    }
    return P;
}

void Dealokasi (address P){
/* I.S.		: P terdefinisi
   F.S.		: P dikembalikan ke sistem
   Melakukan dealokasi/pengembalian address P */

    // kamus lokal

    // algoritma
    info(P) = 0;
    next(P) = Nil;
    free(P);
}

/* ----- Primitif Berdasarkan Alamat ------ */
/* Penambahan Elemen Berdasarkan Alamat */
void InsertFirst (List *L, address P){
/* I.S. 	: Sembarang, P sudah dialokasi
   F.S.		: Menambahkan elemen ber-address P sebagai elemen pertama */

    // kamus lokal
    next(P) = First(*L);
    First(*L) = P;
}

void InsertAfter (address P, address Prec){
/* I.S.		: Prec pastilah elemen list dan bukan elemen terakhir,
	          P sudah dialokasi
   F.S. 	: Insert P sebagai elemen sesudah elemen beralamat Prec */

    // kamus lokal
    
    // algoritma
    next(P) = next(Prec);
    next(Prec) = P;
}

void InsertLast (List *L, address P) {
/* I.S.		: Sembarang, P sudah dialokasi
   F.S.		: P ditambahkan sebagai elemen terakhir yang baru */

    // kamus lokal
    address Last;

    // algoritma
    if (First(*L) == Nil) {
        InsertFirst(&(*L), P);
    } else {
        // Traversal list sampai address terakhir
        Last = First(*L);
        while (next(Last) != Nil) {
            Last = next(Last);
        }
        InsertAfter(P, Last);
    }
}

/* Penghapusan Sebuah Elemen */
void DelFirst (List *L, address *P){
/* I.S.     : List tidak kosong
   F.S.     : P adalah alamat elemen pertama list sebelum penghapusan
              Elemen list berkurang satu (mungkin menjadi kosong)
              First element yang baru adalah suksesor elemen pertama yang
              lama */

    // kamus lokal

    // Algoritma
    (*P) = First(*L);
    First(*L) = next(First(*L));

}

void DelLast (List *L, address *P) {
/* I.S.     : List tidak kosong
   F.S.     : P adalah alamat elemen terakhir list sebelum penghapusan
              Elemen list berkurang satu (mungkin menjadi kosong)
              Last element baru adalah predesesor elemen pertama yang 
              lama, jika ada */

    // kamus lokal
    address Last, PrecLast;
    
    // algoritma
    Last = First(*L);
    PrecLast = Nil;
    while (next(Last) != Nil) {
        PrecLast = Last;
        Last = next(Last);
    }
    (*P) = Last;
    if (PrecLast == Nil) {
        First(*L) = Nil;
    } else {
        next(PrecLast) = Nil;
    }

}

void DelAfter (List *L, address *Pdel, address Prec){
/* I.S.     : List tidak kosong. Prec adalah anggota list L.
   F.S.     : Menghapus Next(Prec) : 
              Pdel adalah alamat elemen list yang dihapus */

    // kamus Lokal

    // algoritma
    *Pdel = next(Prec);
    next(Prec) = next(next(Prec));
    next(*Pdel) = Nil;
}

/* ----- Primitif Berdasarkan Nilai ----- */
/* Penambahan Elemen */
void InsVFirst (List *L, infotype X) {
/* I.S.		: L mungkin kosong
   F.S. 	: X ditambahkan sebagai elemen pertama L
   Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen 
   			  pertama dengan nilai X jika alokasi berhasil.
   			  Jika alokasi gagal, maka I.S.= F.S. */

    // kamus lokal
    address P;

    // algoritma
    P = Alokasi(X);
    if (P!=Nil) {
        InsertFirst(&(*L), P);
    }
}

void InsVLast (List *L, infotype X) {
/* I.S. 	: L mungkin kosong
   F.S.		: X ditambahkan sebagai elemen terakhir L
   Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
   			  di akhir yaitu
   			  jika alokasi berhasil, elemen terakhir yang baru bernilai X
   			  Jika alokasi gagal, maka I.S.= F.S. */

    // kamus lokal
    address P;

    // algoritma
    P = Alokasi(X);
    if (P!=Nil) {
        InsertLast(&(*L), P);
    }
}

void InsVAfter (List *L, infotype X, infotype Y ){
    /* I.S. 	: L mungkin kosong
    F.S.		: X ditambahkan sebagai elemen setelah Prec
    Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
            setelah Prec yaitu
            jika alokasi berhasil, elemen setelah Prec yang baru bernilai X
   			Jika alokasi gagal, maka I.S.= F.S. */
    // kamus lokal
    address P, Prec;

    // algoritma
    P = Alokasi(X);
    Prec = searchAddress(*L, Y);
    if (Prec != Nil) {
        if(!ListEmpty(*L)) {
            InsertAfter(P, Prec);
        } else {
            InsertFirst(&(*L), P);
        }
    }
    
}

void AdrLast(List *L, address *Prec, address *Last) {
/*mencari alamat elemen terakhir dan sebelumnya*/

    // kamus lokal

    // algoritma
    if (!ListEmpty(*L)) {
        *Last = First(*L);
        *Prec = Nil;
        while (next(*Last) != Nil) {
            *Prec = *Last;
            *Last = next(*Last);
        }
    } else {
        printf("List kosong");
    }
}

/* Penghapusan ELemen */
void DelVFirst (List *L, infotype *X) {
/* I.S.		: List L tidak kosong
   F.S.		: Elemen pertama list dihapus den nilai info disimpan pada X
   			 dan alamat elemen pertama di-dealokasi */

    // kamus Lokal
    address P;

    // algoritma
    P = First(*L);
    *X = info(P);
    First(*L) = next(First(*L));
    next(P) = Nil;
    Dealokasi(P);
}


void DelVLast (List *L, infotype *X) {
/* I.S.		: List L tidak kosong
   F.S.		: Elemen terakhir list dihapus : nilai info disimpan pada X
   			  dan alamat elemen terakhir di-dealokasi */

    // kamus lokal
    address Last, Prec;

    // algoritma
    AdrLast(&(*L), &Prec, &Last);
    *X = info(Last);
    if (Prec == Nil) {
        First(*L) = Nil;
    } else {
        next(Prec) = Nil;
    }
    Dealokasi(Last);
}

void DelVAfter (List *L, infotype *X, infotype Prec) {
/* I.S.		: List L tidak kosong
   F.S.		: Elemen list setelah Prec dihapus : nilai info disimpan pada X
   			  dan alamat elemen setelah Prec di-dealokasi */

    // kamus Lokal
    address P, Pdel;
    
    // algoritma
    P = searchAddress(*L, Prec);
    if (P != Nil) {
        Pdel = next(P);
        *X = info(Pdel);
        DelAfter(&(*L), &Pdel, P);
        Dealokasi(Pdel);
    }
}

/* ----- Proses Semua Elemen List ----- */
void PrintInfo (List L){
/* I.S.     : List mungkin kosong
   F.S.     : Jika list tidak kosong, semua info yg disimpan pada elemen
              list diprint
              Jika list kosong, hanya menuliskan "list kosong" */

    // kamus lokal
    address P;

    // algoritma
    P = First(L);
    if (!ListEmpty(L)) {
        while (P != Nil) {
            printf("%d ", info(P));
            P = next(P);
        }
        printf("\n");
    } else {
        printf("List Kosong\n");
    }
}

int NbElmt (List L) {
/* Mengirimkan banyaknya elemen list; mengirimkan 0 jika list kosong */

    // kamus lokal
    address P;
    int i;

    // algoritma
    P = First(L);
    i = 0;
    while (P!=Nil) {
        i++;
        P = next(P);
    }
    return i;
}

address searchAddress (List L, infotype X) {
    // mencari address dari infotype X
    
    // kamus lokal
    address P;
    int i = 100;

    // algoritma
    if (!ListEmpty(L)) {
        P = First(L);
        while (info(P) != X && next(P) != Nil) {
            P = next(P);
        }
        if (info(P) == X) {
            return P;
        } else {
            return Nil;
        }
    }
}

#endif