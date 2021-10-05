/* Program   : tqueue3.h */
/* Deskripsi : ADT Queue representasi kontigu dengan array, 
               model II: head bergeser/jelajah */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 30/09/2021 */
/***********************************/
#include "boolean.h"
#include "tqueue3.h"
#include <stdio.h>
#include <stdlib.h>

/*function isEmptyQueue3(Q:tQueue3) -> boolean
{mengembalikan true jika Q kosong}*/
boolean isEmptyQueue3(tqueue3 Q) {
    // kamus lokal

    // algoritma
    return (head3(Q) == 0 && tail3(Q) == 0);
}

/*function isFullQueue3(Q:tQueue3) -> boolean
{mengembalikan true jika Q penuh}*/
boolean isFullQueue3(tqueue3 Q) {
    // kamus lokal


    // algoritma
    return (head3(Q) == tail3(Q)%5+1);
}

/*function isOneElement3(Q:tQueue3) -> boolean
{mengembalikan true jika Q 1 elemen}*/
boolean isOneElement3(tqueue3 Q) {
    // kamus lokal

    // algoritma
    if (!isEmptyQueue3(Q)) {
        return head3(Q) == tail3(Q);
    } else {
        return false;
    }
}

/*procedure createQueue3 ( output Q:tQueue3)
{I.S.: -}
{F.S.: Q terdefinisi, kosong}
{Proses: mengisi komponen dengan 0, elemen kosong='@'}*/ 
void createQueue3(tqueue3 *Q) {
    // kamus lokal
    int i;

    // algoritma
    for(i=1; i<=5; i++) {
        (*Q).wadah[i] = '@';
    }
    (*Q).head = 0;
    (*Q).tail = 0;
}

/*Function InfoHead3(Q:tqueue3) -> character
{mengembalikan nilai elemen terdepan} */
char infoHead3(tqueue3 Q) {
    // kamus lokal
    
    // algoritma
    if (!isEmptyQueue3(Q)) {
        return Q.wadah[head3(Q)];
    } else {
        return '@';
    }
}

/*Function InfoTail3(Q:tqueue3) -> character
{mengembalikan nilai elemen terakhir} */
char infoTail3(tqueue3 Q) {
    // kamus lokal

    // algoritma
    if (!isEmptyQueue3(Q)) {
        return Q.wadah[tail3(Q)];
    } else {
        return '@';
    }
}

/*function sizeQueue3(Q:tQueue3)-> integer 
{mengembalikan panjang antrian Q} */
int sizeQueue3(tqueue3 Q) {
    // kamus lokal

    // algoritma
    if (tail3(Q) >= head3(Q)) {
        return (tail3(Q) - head3(Q)) + 1;
    } else {
        return 5 - (head3(Q) - tail3(Q)) + 1;
    }
}

/*procedure printQueue3(input Q:tQueue3)
{I.S.: Q terdefinisi}
{F.S.: -}
{proses: mencetak isi wadah ke layar}*/
void printQueue3(tqueue3 Q) {
    // kamus lokal
    int i;

    // algoritma    
    for (i=1; i<=5; i++) {
        printf("%c ", Q.wadah[i]);
    }
    printf("\n");
}

/*procedure viewQueue3(input Q:tQueue3)
{I.S.: Q terdefinisi}
{F.S.: -}
{proses: mencetak elemen yang tidak kosong ke layar}*/
void viewQueue3(tqueue3 Q) {
    // kamus lokal
    int i;

    // algoritma
    if (!isEmptyQueue3(Q)) {
        if (head3(Q) <= tail3(Q)) { // kondisi normal
            for(i=head3(Q); i<=5; i++) {
                if (Q.wadah[i] != '@') {
                    printf("%c ", Q.wadah[i]);
                }
            }
        }
        else {
            for(i=head3(Q); i<=5; i++) {
                if (Q.wadah[i] != '@') {
                    printf("%c ", Q.wadah[i]);
                }
            }
            for(i=1; i<=tail3(Q); i++) {
                if (Q.wadah[i] != '@') {
                    printf("%c ", Q.wadah[i]);
                }
            }
        }
        printf("\n");
    }
}

/*procedure enQueue3( input/output Q:tQueue3, input E: character )
{I.S.: E terdefinisi}
{F.S.: elemen wadah Q bertambah 1 bila belum penuh}
{proses: menambah elemen wadah Q sebagai tail, mungkin memutar ke 1 } */
void enqueue3(tqueue3 *Q, char E) {
    // kamus lokal

    // algoritma
    if (!isFullQueue3(*Q)) {
        if (isEmptyQueue3(*Q)) {
            (*Q).head = 1;
        }
        (*Q).tail = ((*Q).tail % 5) + 1;
        (*Q).wadah[(*Q).tail] = E;
    }
}

/*procedure deQueue3( input/output Q:tQueue3,output E: character )
{I.S.: }
{F.S.: elemen wadah Q berkurang 1 (Head), E=infohead(Q), bila kosong E=' '}
{proses: mengurangi elemen wadah Q, bila 1 elemen, maka Head dan Tail mengacu ke 0 } */
void dequeue3(tqueue3 *Q, char *E) {
    // kamus lokal

    // algoritma
    if (!isEmptyQueue3(*Q)) {
        (*E) = (*Q).wadah[head3(*Q)];
        (*Q).wadah[head3(*Q)] = '@';
        if (isOneElement3(*Q)) {
            (*Q).head = 0;
            (*Q).tail = 0;
        } else {
            (*Q).head = ((*Q).head % 5) + 1;
        }
    } else {
        (*E) = '@';
    }
}