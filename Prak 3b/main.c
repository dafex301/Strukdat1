/***********************************/
/* Program   : main.c */
/* Deskripsi : aplikasi driver modul Tstack */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 16/09/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "tstack.h"


int main()
{
    // kamus
    Tstack A;
    char a;

    // algoritma
    createStack(&A);
    prinTstack(A);
    printf("\n%d %d %d", top(A), isEmptyStack(A), isFullStack(A));
    push(&A, 'A');
    push(&A, 'B');
    push(&A, 'C');
    printf("\n");
    prinTstack(A);
    pop(&A, &a);
    printf("\n%c\n", a);
    prinTstack(A);
    printf("\n");
    viewStack(A);
    pushBabel1(&A, 'Z');
    printf("\n");
    viewStack(A);
    return 0;
}
