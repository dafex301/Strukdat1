/* Program   : mainlstack.c */
/* Deskripsi : file DRIVER modul stack berkait */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 04/10/2021 */
/***********************************/
#include <stdio.h>
#include "lstack.h"
// #include "lstack.c" // buat run di vscode

int main()
{ //KAMUS----------------------------
    lstack LS;  /*variabel parameter aktual linked Stack */
    address A; /*variabel parameter aktual address */
    int X; // variabel untuk pop
	
  //ALGORITMA------------------------

    // createLStack
    printf("\n----createLStack----\n");
    createLStack(&LS);

    // viewStack
    printf("viewStack: ");
    viewLStack(LS);

    // tinggiL
    printf("tinggiL: %d\n", tinggiL(LS));

    // isEmptyLStack
    printf("isEmptyLStack: ");
    (isEmptyLStack(LS)) ? printf("True\n") : printf("False\n");

    // popL ketika empty
    printf("\n----PopL (empty)----\n");
    popL(&LS, &X);

    // viewStack
    printf("popL ketika empty: ");
    printf("%d\n", X);

    // pushL
    printf("\n----PushL----\n");
    pushL(&LS, 20);
    pushL(&LS, 4);
    pushL(&LS, 69);

    // viewStack
    printf("viewStack: ");
    viewLStack(LS);

    // tinggiL
    printf("tinggiL: %d\n", tinggiL(LS));

    // isEmptyLStack
    printf("isEmptyLStack: ");
    (isEmptyLStack(LS)) ? printf("True\n") : printf("False\n");

    // popL
    printf("\n----PopL----\n");
    popL(&LS, &X);

    // viewStack
    printf("viewStack: ");
    viewLStack(LS);

    // tinggiL
    printf("tinggiL: %d\n", tinggiL(LS));

    // isEmptyLStack
    printf("isEmptyLStack: ");
    (isEmptyLStack(LS)) ? printf("True\n") : printf("False\n");

    return 0;
}
