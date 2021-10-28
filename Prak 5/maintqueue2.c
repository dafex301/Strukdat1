/* Program   : tqueue2.h */
/* Deskripsi : ADT Queue representasi kontigu dengan array, 
               model II: head bergeser/jelajah */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 30/09/2021 */
/***********************************/
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "tqueue2.h"

int main() 
{
    // Kamus lokal
    tqueue2 A;
    tqueue2 B;
    char a;

    // Algoritma
    printf("createQueue:\n");
    createQueue2(&A);
    printQueue2(A);
    createQueue2(&B);

    printf("\nenqueue A dan B\n");
    enqueue2(&A,'A');
    enqueue2(&A,'B');
    printQueue2(A);

    printf("\ndequeue:\n");
    dequeue2(&A, &a);
    printQueue2(A);

    printf("\nenqueue C, D, E, dan F\n");
    enqueue2(&A,'C');
    enqueue2(&A,'D');
    enqueue2(&A,'E');
    enqueue2(&A,'F');
    printQueue2(A);

    printf("\nisEmpty: ");
    (isEmptyQueue2(A)) ? printf("True") : printf("False");

    printf("\nisFull: ");
    (isFullQueue2(A)) ? printf("True") : printf("False");

    printf("\nisOneElement: ");
    (isOneElement2(A)) ? printf("True") : printf("False");

    printf("\nHead: %d", head2(A));
    printf("\ninfoHead: %c", infoHead2(A));

    printf("\nTail: %d", tail2(A));
    printf("\ninfoTail: %c", infoTail2(A));

    printf("\nsizeQueue: %d", sizeQueue2(A));

    return 0;
}