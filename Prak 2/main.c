/* Program   : main.c */
/* Deskripsi : aplikasi driver modul Tabel */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 09/09/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "tabel.h"

int main()
{
    // kamus main
    Tabel A;
    Tabel B;
    int cari;
    int banyak;

    // algoritma
    printf("Init Tabel A\n");
    createTable(&A);

    printf("\n");

    printf("CreateTabel B\n");
    B = getNewTable();
    printf("\n");

    printf("printTabel A: \n");
    printTable(A);
    printf("\n\n");

    printf("printTabel B: \n");
    printTable(B);
    printf("\n\n");

    printf("viewTabel A: \n");
    viewTable(A);
    printf("\n\n");

    /*
    // POPULATE TABEL
    printf("populateTabel A sebanyak 4 N:\n");
    populateTabel(&A, 4);

    printf("\nprintTabel A: \n");
    printTable(A);
    printf("\n\n");

    printf("viewTabel A: \n");
    viewTable(A);
    printf("\n\n");
    */

    // POPULATE TABELMARK
    printf("populateTabelMark A:\n");
    populateTabelMark(&A);

    printf("\nprintTabel A: \n");
    printTable(A);
    printf("\n\n");

    printf("viewTabel A: \n");
    viewTable(A);
    printf("\n\n");

    printf("getSize A: \n");
    printf("%d", getSize(A));
    printf("\n\n");

    printf("countEmpty A: \n");
    printf("%d", countEmpty(A));
    printf("\n\n");

    printf("isEmptyTable A: \n");
    if (isEmptyTable(A) == 1) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n\n");

    printf("isFullTable A: \n");
    if (isFullTable(A) == 1) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n\n");

    printf("searchX1 (Tabel A, 5, cari): \n");
    searchX1(A, 5, &cari);
    printf("%d", cari);
    printf("\n\n");

    printf("countX (Tabel A, 5, banyak): \n");
    countX(A, 5, &banyak);
    printf("%d", banyak);
    printf("\n\n");

    //getMaxElm
    printf("getMaxElm (A): \n");
    if (getMaxElm(A) != -999) {
        printf("%d", getMaxElm(A));
    } else {
        printf("Tabel Kosong!");
    }
    printf("\n\n");

    // getMinElm
    printf("getMinElm (A): \n");
    if (getMinElm(A) != -999) {
        printf("%d", getMinElm(A));
    } else {
        printf("Tabel Kosong!");
    }
    printf("\n\n");

    // addX
    if(!isFullTable(A)){
        printf("addX(A, 99)\n");
        addX(&A, 99);
        viewTable(A);
        printf("\ngetSize A: \n");
        printf("%d", getSize(A));
        printf("\n\n");
    } else {
        printf("Tabel penuh, tidak dapat melakukan prosedur addX!\n\n");
    }

    // delX
    printf("delX(A, 5)\n");
    delX(&A, 5);
    viewTable(A);
    printf("\ngetSize A: \n");
    printf("%d", getSize(A));
    printf("\n\n");

    // delAllX
    printf("delAllX(A, 5)\n");
    delAllX(&A, 5);
    viewTable(A);
    printf("\ngetSize A: \n");
    printf("%d", getSize(A));
    printf("\n\n");

    // updateX
    printf("updateX(A, 99, 101)\n");
    updateX(&A, 99, 101);
    viewTable(A);
    printf("\ngetSize A: \n");
    printf("%d", getSize(A));
    printf("\n\n");

    return 0;
}
