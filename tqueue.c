#include "boolean.h"
#include "tqueue.h"
#include <stdio.h>
#include <stdlib.h>

/* Program   : tqueue.c */
/* Deskripsi : ADT Queue representasi kontigu dengan array,
               model I: head selalu di posisi 0 atau 1 */
/* NIM/Nama  : 24060120130106/Fahrel Gibran Alghany*/
/* Tanggal   : 23/09/2021*/
/***********************************/

/*procedure createQueue ( output Q:tQueue)
{I.S.: -}
{F.S.: Q terdefinisi, kosong}
{Proses: mengisi komponen dan elemen dengan '@' }*/
void createQueue(tqueue *Q){
    // kamus lokal
    int i;

    // algoritma
    for (i=1; i<=5; i++) {
        (*Q).wadah[i] = '@';
    }
    head(*Q) = 0;
    tail(*Q) = 0;
}

/*function infoHead(Q:tQueue)-> character
{mengembalikan nilai elemen terdepan antrian Q} */
/*pikirkan bila antrian kosong*/
int infoHead(tqueue Q){
    // kamus lokal

    // algoritma
    if (!isEmptyQueue(Q)){
        return Q.wadah[head(Q)];
    } else {
        return '@';
    }
}

/*function infoTail(Q:tQueue)-> character
{mengembalikan nilai elemen terakhir antrian Q} */
/*pikirkan bila antrian kosong*/
int infoTail(tqueue Q){
    // kamus lokal

    // algoritma
    if (!isEmptyQueue(Q)) {
        return Q.wadah[tail(Q)];
    } else {
        return '@';
    }
}

/*function sizeQueue(Q:tQueue)-> integer
{mengembalikan panjang antrian Q} */
int sizeQueue(tqueue Q){
    // kamus lokal

    // algoritma
    if (!isEmptyQueue(Q)){
        return tail(Q) - head(Q) + 1;
    } else {
        return 0;
    }
}

/*procedure printQueue(input Q:tQueue)
{I.S.: Q terdefinisi}
{F.S.: -}
{proses: mencetak semua elemen wadah ke layar}*/
void printQueue(tqueue Q){
    // kamus lokal
    int i;

    // algoritma
    for (i=1; i<=5; i++) {
        printf("%c ", Q.wadah[i]);
    }
}

/*procedure viewQueue(input Q:tQueue)
{I.S.: Q terdefinisi}
{F.S.: -}
{proses: mencetak elemen Queue yang terisi, ke layar}*/
void viewQueue(tqueue Q) {
    // kamus lokal
    int i;

    // algoritma
    if (!isEmptyQueue(Q)) {
        for (i=1; i<=tail(Q); i++){
            printf("%c ", Q.wadah[i]);
        }
    }
}

/*function isEmptyQueue(Q:tQueue) -> boolean
{mengembalikan true jika Q kosong}*/
boolean isEmptyQueue(tqueue Q){
    // kamus lokal

    // algoritma
    return (head(Q) == 0 && tail(Q) == 0);
}

/*function isFullQueue(Q:tQueue) -> boolean
{mengembalikan true jika Q penuh}*/
boolean isFullQueue(tqueue Q){
    // kamus lokal

    // algoritma
    return tail(Q) == 5;
}

/*function isOneElement(Q:tQueue) -> boolean
{mengembalikan true jika hanya ada 1 elemen }*/
boolean isOneElement(tqueue Q){
    // kamus lokal

    // algoritma
    return (head(Q) == tail(Q));
}

/*procedure enqueue( input/output Q:tQueue, input E: character )
{I.S.: E terdefinisi}
{F.S.: elemen wadah Q bertambah 1, bila belum penuh}
{proses: menambah elemen wadah Q } */
void enqueue(tqueue *Q, char E){
    // kamus lokal

    // algoritma
    if (!isFullQueue(*Q)){
        if (isEmptyQueue(*Q)){
            head(*Q) = 1;
        }
        tail(*Q)++;
        (*Q).wadah[tail(*Q)] = E;
    }
}

/*procedure deQueue( input/output Q:tQueue, output E: character )
{I.S.: }
{F.S.: E=infohead(Q) atau E='@' bila Q kosong, elemen wadah Q berkurang 1 }
{proses: mengurangi elemen wadah Q, semua elemen di belakang head digeser maju }
{bila awalnya 1 elemen, maka Head dan Tail menjadi 0 } */
void dequeue(tqueue *Q, char *E){
    // kamus lokal
    int i;

    // algoritma
    if (!isEmptyQueue(*Q)){
        (*E) = infoHead(*Q);
        if (isOneElement(*Q)){
            (*Q).wadah[head(*Q)] = '@';
            head(*Q) = 0;
            tail(*Q) = 0;
        } else {
            for(i=1; i<tail(*Q); i++){
                (*Q).wadah[i] = (*Q).wadah[i+1];
            }
            (*Q).wadah[tail(*Q)] = '@';
            tail(*Q)--;
        }
    } else {
        (*E) = '@';
    }
}

/*tambahan, dikerjakan bila luang */


/*function maxlength(Q1:tqueue, Q2:tqueue) --> integer */
/*{mengembalikan ukuran yang terpanjang dari 2 antrian}*/
int maxlength(tqueue Q1, tqueue Q2){
    // kamus lokal

    // algoritma
    if (sizeQueue(Q1) >= sizeQueue(Q2)) {
        return sizeQueue(Q1);
    } else {
        return sizeQueue(Q2);
    }
}

/*procedure enqueue2( input/output Q1:tQueue, input/output Q2:tQueue, input E: character )
{I.S.: E terdefinisi}
{F.S.: elemen wadah Q1 atau Q2 bertambah 1, bila belum penuh}
{proses: menambah elemen wadah pada antrian terpendek dari Q1 atau Q2}
{asumsi: jika panjangnya sama, maka ditambah dua-duanya} */
void enqueue2(tqueue *Q1, tqueue *Q2, char E){
    // kamus lokal

    // algoritma
    if (sizeQueue(*Q1) < sizeQueue(*Q2)) {
        enqueue(&(*Q1), E);
    } else if (sizeQueue(*Q1) > sizeQueue(*Q2)) {
        enqueue(&(*Q2), E);
    }
    else { /* panjang keduanya sama */
        if (!isFullQueue(*Q1) && !isFullQueue(*Q2)) {
            enqueue(&(*Q1), E);
            enqueue(&(*Q2), E);
        }
    }
}

/*procedure deQueue2( input/output Q1:tQueue, input/output Q2:tQueue, output E: character )
{I.S.: }
{F.S.: E=infohead Q1 atau Q2 atau E=' ' bila Q1 dan Q2 kosong, elemen wadah Q1 atau Q2 berkurang 1 }
{proses: mengurangi elemen wadah antrian terpanjang Q1 atau Q2, semua elemen di belakang head digeser maju }
{bila awalnya 1 elemen, maka Head dan Tail antrian menjadi 0 }
{asumsi: jika panjang keduanya sama, maka hanya Q1 yang dikurangi elemennya} */
void dequeue2(tqueue *Q1, tqueue *Q2, char *E){
    // kamus lokal

    // algoritma
    if (sizeQueue(*Q1) >= sizeQueue(*Q2)) {
        dequeue(&(*Q1), &(*E));
    } else /* (sizeQueue(*Q1) < sizeQueue(*Q2)) */ {
        dequeue(&(*Q2), &(*E));
    }
}


