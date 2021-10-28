/* Program   : main.c */
/* Deskripsi : aplikasi driver modul Tabel */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 09/09/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "tabel.h"
#include "boolean.h"

int main()
{
    /* KAMUS */
    Tabel A;
    Tabel B;
    int cari;
    int banyak;

    /* ALGORITMA */

    // Create Table A
    createTable(&A);
    printf("Tabel A: ");
    printTable(A);
    printf("\n\n");

    // Create Table B
    B = getNewTable();
    printf("Tabel B: ");
    printTable(B);
    printf("\n\n");

    /*
    // Populate Table A
    printf("Populate Table A with N=5...\n");
    populateTabel(&A, 5);
    printf("\n");
    printTable(A);
    printf("\n");
    viewTable(A);
    printf("\n\n");
    */

    // PopulateMark Table B
    printf("PopulateMark Table B...\n");
    populateTabelMark(&B);
    printf("\n");
    printTable(B);
    printf("\n");
    viewTable(B);
    printf("\n\n");

    // getSize Table B
    printf("getSize Table B: %d", getSize(B));
    printf("\n\n");

    // countEmpty Table B
    printf("countEmpty Table B: %d", countEmpty(B));
    printf("\n\n");

    // isEmpty Table A
    printf("isEmptyTable A: ");
    if (isEmptyTable(A) == 1) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n\n");

    // isEmpty Table B
    printf("isEmptyTable B: ");
    if (isEmptyTable(B) == 1) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n\n");

    // isFull Table A
    printf("isFullTable A: ");
    if (isFullTable(A) == 1) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n\n");

    // isFull Table B
    printf("isFullTable B: ");
    if (isFullTable(B) == 1) {
        printf("true");
    } else {
        printf("false");
    }
    printf("\n\n");

    // searchX1 Table B
    printf("searchX1 (Tabel B, 5): ");
    searchX1(B, 5, &cari);
    printf("%d", cari);
    printf("\n\n");

    // countX Table B
    printf("countX (Tabel B, 5): ");
    countX(B, 5, &banyak);
    printf("%d", banyak);
    printf("\n\n");

    // getMaxElm Tabel B
    printf("getMaxElm (B): ");
    if (getMaxElm(B) != -999) {
        printf("%d", getMaxElm(B));
    } else {
        printf("Tabel Kosong!");
    }
    printf("\n\n");

    // getMinElm Tabel B
    printf("getMinElm (B): ");
    if (getMinElm(B) != -999) {
        printf("%d", getMinElm(B));
    } else {
        printf("Tabel Kosong!");
    }
    printf("\n\n");

    // addX Tabel B
    if(!isFullTable(B)){
        printf("addX(B, 99)\n");
        addX(&B, 99);
        viewTable(B);
        printf("\n\n");
    } else {
        printf("Tabel penuh, tidak dapat melakukan prosedur addX!\n\n");
    }

    // delX Tabel B
    if(!isEmptyTable(B)) {
        printf("delX(B, 5)\n");
        delX(&B, 5);
        viewTable(B);
        printf("\n\n");
    } else {
        printf("Tabel kosong, tidak dapat melakukan prosedur delX!\n\n");
    }

    // delAllX Tabel B
    printf("delAllX(B, 5)\n");
    delAllX(&B, 5);
    viewTable(B);
    printf("\n\n");

    // updateX Tabel B
    printf("updateX(B, 99, 101)\n");
    updateX(&B, 99, 101);
    viewTable(B);
    printf("\n\n");

    return 0;
}
