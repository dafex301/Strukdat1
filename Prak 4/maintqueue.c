#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "tqueue.h"
#include "tqueue.c"

/* Program   : maintqueue.c */
/* Deskripsi : ADT Queue representasi kontigu dengan array,
               model I: head selalu di posisi 0 atau 1 */
/* NIM/Nama  : 24060120130106/Fahrel Gibran Alghany*/
/* Tanggal   : 23/09/2021*/
/***********************************/
int main()
{
    // kamus
    tqueue A;
    tqueue B;
    char a;
    char b;

    // algoritma

    // createQueue
    createQueue(&A);
    printf("createQueue:\n");
    printQueue(A);
    printf("\n\n");
    printf("isEmpty: %d\n\n", isEmptyQueue(A));

    createQueue(&B);

    // enqueue
    enqueue(&A, 'Z');
    enqueue(&B, 'A');
    enqueue(&B, 'B');
    enqueue(&B, 'C');
    printf("isEmpty: %d\n\n", isEmptyQueue(A));
    printf("enqueue:\n");
    printQueue(A);
    printf("\n\nviewQueue:\n");
    viewQueue(A);
    printf("\n\nhead: %c %d\n", infoHead(A), head(A));
    printf("tail: %c %d\n", infoTail(A), tail(A));
    printf("sizeQueue: %d\n", sizeQueue(A));

    // isOneElement
    printf("isOneElement: ");
    (isOneElement(A))?printf("True"):printf("False");
    printf("\n\n");

    enqueue(&A, 'X');
    printf("enqueue:\n");
    printQueue(A);
    printf("\n\nviewQueue:\n");
    viewQueue(A);
    printf("\nhead: %c %d\n", infoHead(A), head(A));
    printf("tail: %c %d\n", infoTail(A), tail(A));
    printf("sizeQueue: %d\n", sizeQueue(A));

    // isOneElement
    printf("isOneElement: ");
    (isOneElement(A))?printf("True"):printf("False");
    printf("\n\n");

    // dequeue
    dequeue(&A, &a);
    printf("dequeue:\n");
    printQueue(A);
    printf("\nhead: %c %d\n", infoHead(A), head(A));
    printf("tail: %c %d", infoTail(A), tail(A));
    printf("\n\n");

    // maxlength
    printf("Queue A:\n");
    printQueue(A);
    printf("\nQueue B:\n");
    printQueue(B);
    printf("\nMax length: ");
    printf("%d", maxlength(A, B));
    printf("\n\n");

    // enqueue2
    printf("enqueue2 input P\n");
    enqueue2(&A, &B, 'P');
    printf("Queue A:\n");
    printQueue(A);
    printf("\nQueue B:\n");
    printQueue(B);
    printf("\n\n");

    // dequeue2
    printf("dequeue2\n");
    dequeue2(&A, &B, &b);
    printf("Queue A:\n");
    printQueue(A);
    printf("\nQueue B:\n");
    printQueue(B);
    printf("\n\n");

    // enqueue2
    printf("enqueue2 input R\n");
    enqueue2(&A, &B, 'R');
    printf("Queue A:\n");
    printQueue(A);
    printf("\nQueue B:\n");
    printQueue(B);
    printf("\n\n");

    // dequeue2
    printf("dequeue2\n");
    dequeue2(&A, &B, &b);
    printf("Queue A:\n");
    printQueue(A);
    printf("\nQueue B:\n");
    printQueue(B);
    printf("\n\n");
    return 0;
}
