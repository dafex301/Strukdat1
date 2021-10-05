/* Program   : tqueue3.h */
/* Deskripsi : ADT Queue representasi kontigu dengan array, 
               model II: head bergeser/jelajah */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 30/09/2021 */
/***********************************/
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "tqueue3.h"

int main() 
{
    // Kamus lokal
    tqueue3 A;
    tqueue3 B;
    char a;

    // Algoritma
    printf("createQueue:\n");
    createQueue3(&A);
    printQueue3(A);
    createQueue3(&B);

    printf("\nenqueue A dan B\n");
    enqueue3(&A,'A');
    enqueue3(&A,'B');
    printQueue3(A);

    printf("\ndequeue A:\n");
    dequeue3(&A, &a);
    printQueue3(A);

    printf("\nenqueue C, D, E, dan F\n");
    enqueue3(&A,'C');
    enqueue3(&A,'D');
    enqueue3(&A,'E');
    enqueue3(&A,'F');
    printQueue3(A);
    viewQueue3(A);

    printf("\nisEmpty: ");
    (isEmptyQueue3(A)) ? printf("True") : printf("False");

    printf("\nisFull: ");
    (isFullQueue3(A)) ? printf("True") : printf("False");

    printf("\nisOneElement: ");
    (isOneElement3(A)) ? printf("True") : printf("False");

    printf("\nHead: %d", head3(A));
    printf("\ninfoHead: %c", infoHead3(A));

    printf("\nTail: %d", tail3(A));
    printf("\ninfoTail: %c", infoTail3(A));

    printf("\nsizeQueue: %d", sizeQueue3(A));

    printf("\n\ndequeue B, C, D\n");
    dequeue3(&A, &a);
    dequeue3(&A, &a);
    dequeue3(&A, &a);
    printQueue3(A);
    viewQueue3(A);

    printf("\nisEmpty: ");
    (isEmptyQueue3(A)) ? printf("True") : printf("False");

    printf("\nisFull: ");
    (isFullQueue3(A)) ? printf("True") : printf("False");

    printf("\nisOneElement: ");
    (isOneElement3(A)) ? printf("True") : printf("False");

    printf("\nHead: %d", head3(A));
    printf("\ninfoHead: %c", infoHead3(A));

    printf("\nTail: %d", tail3(A));
    printf("\ninfoTail: %c", infoTail3(A));

    printf("\nsizeQueue: %d", sizeQueue3(A));

    return 0;
}
