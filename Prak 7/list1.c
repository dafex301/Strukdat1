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

    // algoritma
    next(P) = First(*L);
    First(*L) = P;
}

void InsertAfter (List *L, address P, address Prec){
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
        InsertAfter(&(*L), P, Last);
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

void InsVAfter (List *L, infotype X) {
/* I.S. 	: L mungkin kosong 
   F.S.		: X ditambahkan sebagai elemen setelah Prec
   Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
   			  setelah Prec yaitu 
   			  jika alokasi berhasil, elemen setelah Prec yang baru bernilai X
   			  Jika alokasi gagal, maka I.S.= F.S. */

    // kamus lokal
    address P, Prec, Last;
    
    // algoritma
    P = Alokasi(X);
    if (!ListEmpty(*L)) {
        AdrLast(&(*L), &Prec, &Last);
        InsertAfter(&(*L), P, Prec);
    } else {
        InsVFirst(&(*L), X);
    }
}

void InsVAfter2 (List *L, infotype X, infotype Prec ){
    /* I.S. 	: L mungkin kosong
    F.S.		: X ditambahkan sebagai elemen setelah Prec
    Proses 	: Melakukan alokasi sebuah elemen dan menambahkan elemen list
            setelah Prec yaitu
            jika alokasi berhasil, elemen setelah Prec yang baru bernilai X
   			Jika alokasi gagal, maka I.S.= F.S. */
    // kamus lokal
    address P, Q;

    // algoritma
    P = Alokasi(X);
    Q = Search(*L, Prec);
    if (Q != Nil) {
        if(!ListEmpty(*L)) {
            InsertAfter(&(*L), P, Q);
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

void DelVAfter (List *L, infotype *X) {
/* I.S.		: List L tidak kosong
   F.S.		: Elemen list setelah Prec dihapus : nilai info disimpan pada X
   			  dan alamat elemen setelah Prec di-dealokasi */

    // kamus lokal
    address P, Prec, Last;

    // Algoritma
    if (!ListEmpty(*L)) {
        AdrLast(&(*L), &Prec, &Last);
        *X = info(next(Prec));
        DelAfter(&(*L), &P, Prec);
        Dealokasi(P);
    }
}

void DelVAfter2 (List *L, infotype *X, infotype Prec) {
/* I.S.		: List L tidak kosong
   F.S.		: Elemen list setelah Prec dihapus : nilai info disimpan pada X
   			  dan alamat elemen setelah Prec di-dealokasi */

    // kamus Lokal
    address P, Pdel;
    
    // algoritma
    P = Search(*L, Prec);
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

infotype Average(List L) {
/* Mengirimkan nilai rata-rata info(P) */

    // kamus lokal
    address P;
    infotype i, sum;

    // algoritma
    P = First(L);
    i = 0;
    sum = 0;
    while (P!=Nil) {
        i++;
        sum += info(P);
        P = next(P);
    }
    return (sum / i);
}

/****************** PENCARIAN SEBUAH ELEMEN LIST ******************/

address Search (List L, infotype X) {
    /* Mencari apakah ada elemen list dengan info(P)= X */ 
    /* Jika ada, mengirimkan address elemen tersebut. */ 
    /* Jika tidak ada, mengirimkan Nil */ 
    
    // kamus lokal
    address P;

    // algoritma
    if (!ListEmpty(L)) {
        P = First(L);
        while (info(P) != X && P != Nil) {
            P = next(P);
        }
        if (info(P) == X) {
            return P;
        } else {
            return Nil;
        }
    }
}

boolean FSearch (List L, address P) {
/* Mencari apakah ada elemen list yang beralamat P */
/* Mengirimkan true jika ada, false jika tidak ada */

    // kamus lokal
    address Psearch;

    // algoritma
    if (!ListEmpty(L)) {
        Psearch = First(L);
        while (P != Psearch && Psearch != Nil) {
            Psearch = next(Psearch);
        }
        return P == Psearch;
    }
    else {
        return false;
    }
}

address SearchPrec (List L, infotype X) {
/* Mengirimkan address elemen sebelum elemen yang nilainya=X */
/* Mencari apakah ada elemen list dengan info(P)= X */
/* Jika ada, mengirimkan address Prec, dengan Next(Prec)=P */
/* dan Info(P)=X. */
/* Jika tidak ada, mengirimkan Nil */
/* Jika P adalah elemen pertama, maka Prec=Nil */
/* Search dengan spesifikasi seperti ini menghindari */
/* traversal ulang jika setelah Search akan dilakukan operasi lain*/

    // kamus Lokal
    address P, Prec;

    // algoritma
    if (!ListEmpty(L)) {
        P = First(L);
        Prec = Nil;
        while (info(P) != X && P != Nil) {
            Prec = P;
            P = next(P);
        }
        if (info(P) == X) {
            return Prec;
        } else {
            return Nil;
        }
    }
}

/****************** PROSES TERHADAP LIST ******************/

void DelAll (List *L) {
/* I.S. sembarang */
/* F.S. Delete semua elemen list dan alamat elemen di-dealokasi */
/*      List L menjadi list kosong */

    // kamus lokal
    infotype del;

    // algoritma
    while (First(*L) != Nil) {
        DelVFirst(&(*L), &del);
    }
}

void InversList (List *L) {
/* I.S. sembarang. */
/* F.S. elemen list dibalik : */
/* Elemen terakhir menjadi elemen pertama, dan seterusnya. */
/* Membalik elemen list, tanpa melakukan alokasi/dealokasi. */
    
    // kamus lokal
    address P, Prec, Next;

    // algoritma
    P = First(*L);
    Prec = Nil;
    while (P != Nil) {
        Next = next(P);
        next(P) = Prec;
        Prec = P;
        P = Next;
    }
    First(*L) = Prec;
}

List FInversList (List L) {
/* Mengirimkan list baru, hasil invers dari L */
/* dengan menyalin semua elemn list. Alokasi mungkin gagal. */
/* Jika alokasi gagal, hasilnya list kosong */
/* dan semua elemen yang terlanjur di-alokasi, harus didealokasi */

    // kamus Lokal
    List Lnew;
    address P;

    // algoritma
    CreateList(&Lnew);
    if (!ListEmpty(L)) {
        P = First(L);
        while (P != Nil) {
            InsVFirst(&Lnew, info(P));
            P = next(P);
        }
        return Lnew;
    }
}

void CopyList (List *L1, List *L2) {
/* I.S. L1 sembarang. F.S. L2=L1 */
/* L1 dan L2 "menunjuk" kepada list yang sama.*/
/* Tidak ada alokasi/dealokasi elemen */

    // kamus lokal

    // algoritma
    First(*L2) = First(*L1);
}

List FCopyList (List L) {
/* Mengirimkan list yang merupakan salinan L */
/* dengan melakukan alokasi. */
/* Jika ada alokasi gagal, hasilnya list kosong dan */
/* semua elemen yang terlanjur di-alokasi, harus didealokasi */

    // kamus lokal
    List Lnew;
    address P;

    // algoritma
    CreateList(&Lnew);
    if (!ListEmpty(L)) {
        P = First(L);
        while (P != Nil) {
            InsVLast(&Lnew, info(P));
            P = next(P);
        }
        return Lnew;
    }
}

void CpAlokList (List Lin, List *Lout) {
/* I.S. Lin sembarang. */
/* F.S. Jika semua alokasi berhasil,maka Lout berisi hasil copy Lin */
/* Jika ada alokasi yang gagal, maka Lout=Nil dan semua elemen yang terlanjur dialokasi, didealokasi */
/* dengan melakukan alokasi elemen. */
/* Lout adalah list kosong jika ada alokasi elemen yang gagal */

    // kamus lokal
    address P;

    // algoritma
    P = First(Lin);
    while (P != Nil) {
        InsVLast(&(*Lout), info(P));
        P = next(P);
    }
}

void Konkat (List L1, List L2, List *L3) {
/* I.S. L1 dan L2 sembarang */
/* F.S. L1 dan L2 tetap, L3 adalah hasil konkatenasi L1 & L2 */
/* Jika semua alokasi berhasil, maka L3 adalah hasil konkatenasi*/
/* Jika ada alokasi yang gagal, semua elemen yang sudah dialokasi */
/* harus di-dealokasi dan L3=Nil*/
/* Konkatenasi dua buah list : L1 & L2 menghasilkan L3 yang “baru” */
/* Elemen L3 adalah hasil alokasi elemen yang “baru”. */
/* Jika ada alokasi yang gagal, maka L3 harus bernilai Nil*/
/* dan semua elemen yang pernah dialokasi didealokasi */
    
    // kamus lokal

    // algoritma
    CpAlokList(L1, &(*L3));
    CpAlokList(L2, &(*L3));
}

void Konkat1 (List *L1, List *L2, List *L3) {
/* I.S. L1 dan L2 sembarang */
/* F.S. L1 dan L2 kosong, L3 adalah hasil konkatenasi L1 & L2 */
/* Konkatenasi dua buah list : L1 dan L2 */
/* menghasilkan L3 yang baru (dengan elemen list L1 dan L2)*/
/* dan L1 serta L2 menjadi list kosong.*/
/* Tidak ada alokasi/dealokasi pada prosedur ini */

    // kamus lokal
    address Prec, Last;

    // algoritma
    First(*L3) = First(*L1);
    AdrLast(&(*L3), &Prec, &Last);
    next(Last) = First(*L2);
    First(*L1) = Nil;
    First(*L2) = Nil;
}

void PecahList (List *L1, List *L2, List L) {
/* I.S. L mungkin kosong */
/* F.S. Berdasarkan L, dibentuk dua buah list L1 dan L2 */
/* L tidak berubah: untuk membentuk L1 dan L2 harus alokasi */
/* L1 berisi separuh elemen L dan L2 berisi sisa elemen L */
/* Jika elemen L ganjil, maka separuh adalah NbElmt(L) div 2 */

    // kamus lokal
    int len, i;
    address P;
    
    // algoritma
    P = First(L);
    len = NbElmt(L)/2;
    i = 0;
    while (i < len) {
        InsVLast(&(*L1), info(P));
        P = next(P);
        i++;
    }
    while (P != Nil) {
        InsVLast(&(*L2), info(P));
        P = next(P);
    }
}


#endif