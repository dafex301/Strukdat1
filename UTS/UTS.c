#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/************************************************************************
type Queue = <wadah: array [1..5] of Pasien, head: integer, tail: integer>
procedure Mengantri(input/output: Q:Queue, input P:Pasien)
{I.S.: Q,P Terdefinisi}
{F.S.: Q tetap atau bertambah 1 elemen}
{Proses: menambahkan P ke posisi yang tepat selama Q belum penuh}
{asumsi queue 1}
****************************************************************/
typedef struct {int no;
                int prioritas;
                } Pasien;

typedef struct {Pasien wadah[6];
                int  head;
                int  tail;
                } queue;

void createPasien(Pasien *p, int prior) {
    (*p).no = rand();
    (*p).prioritas = prior;
}

void Mengantri(queue *Q, Pasien P) {
    // kamus lokal
    int i, j;
    // Pasien temp;

    // algoritma
    if (!((*Q).head == 1 && (*Q).tail == 5)) { // not isFull
        i = 1;
        while ((*Q).wadah[i].prioritas <= P.prioritas) {
            // printf("prioritas sekarang: %d\n", (*Q).wadah[i].prioritas);
            i++;
        }

        // opsi for loop
        // for(j=(*Q).tail; j>=i; j--) {
        //     // printf("j sekarang: %d\n", j);
        //     (*Q).wadah[j+1] = (*Q).wadah[j];
        // }

        // opsi while
        j = (*Q).tail;
        while(j >= i) {
            (*Q).wadah[j+1] = (*Q).wadah[j];
            j--;
        }
        (*Q).wadah[j+1] = P;
        (*Q).tail++;

        // printf("urutan yang didapat: %d\n", i);
    }
}

void printPrioritas(queue Q) {
    printf("\n[");
    for(int i=1; i<=Q.tail; i++) {
        printf("%d ", Q.wadah[i].prioritas);
    }
    printf("]\n\n");
}

void printNo(queue Q) {
    printf("\n[");
    for(int i=1; i<=Q.tail; i++) {
        printf("%d ", Q.wadah[i].no);
    }
    printf("]\n\n");
}

int main()
{
queue q;
Pasien A;
Pasien B;
Pasien C;
Pasien D;
Pasien E;

createPasien(&A, 1);
createPasien(&B, 2);
createPasien(&C, 2);
createPasien(&D, 3);
// printf("no=%d prioritas=%d\n", A.no, A.prioritas);
// printf("no=%d prioritas=%d\n", B.no, B.prioritas);
// printf("no=%d prioritas=%d\n", C.no, C.prioritas);
// printf("no=%d prioritas=%d\n", D.no, D.prioritas);
// printf("[1, 2, 2, 3]\n\n");
createPasien(&E, 3);
// q.wadah[1] = A;
// q.wadah[2] = B;
// q.wadah[3] = C;
// q.wadah[4] = D;
// q.head = 0;
// q.tail = 0;
printNo(q);
printPrioritas(q);
Mengantri(&q, E);
printNo(q);
printPrioritas(q);
// printf("\n=====no pasien A: %d prioritas: %d=======\n", A.no, A.prioritas);
// printf("\n=====no pasien B: %d prioritas: %d=======\n", B.no, B.prioritas);
// printf("\n=====no pasien C: %d prioritas: %d=======\n", C.no, C.prioritas);
// printf("\n=====no pasien D: %d prioritas: %d=======\n", D.no, D.prioritas);
printf("\n=====no pasien E: %d prioritas: %d=======\n", E.no, E.prioritas);


return 0;
}



