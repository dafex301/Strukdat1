/************************************/
/* Program   : maintitik.c */
/* Deskripsi : aplikasi driver modul Titik */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 02/09/2021 */
/***********************************/
#include <stdio.h>
#include "titik.h"

int main() {
	//kamus main
    Titik A;
    Titik B;

	//algoritma
	makeTitik(&A);
	makeTitik(&B);

    printf("/**********SELEKTOR**********/\n");
    printf("getAbsis: %d\ngetOrdinat: %d\n", getAbsis(A), getOrdinat(A));

    printf("\n\n/*********MUTATOR*********/\n");
    setAbsis(&A,5);
    setOrdinat(&A,3);
    printf("setAbsis 5 & setOrdinat 3 = (%d, %d)\n", getAbsis(A), getOrdinat(A));

    printf("\n\n/*********PREDIKAT*********/\n");
    printf("isOrigin(A): ");
    printf("%s\n", isOrigin(A) ? "true" : "false");
    printf("isOrigin(B): ");
    printf("%s\n", isOrigin(B) ? "true" : "false");

    printf("\n\n/*********SUBRUTIN LAIN*********/\n");
    printf("Menggeser A dengan dx = 5 dan dy = 7\n");
    printf("(%d, %d) ==> ", getAbsis(A), getOrdinat(A));
    geserXY(&A, 5, 7);
    printf("(%d, %d)\n", getAbsis(A), getOrdinat(A));

    printf("\nRefleksi Sumbu X\n");
    printf("(%d, %d) ==> ", getAbsis(A), getOrdinat(A));
    refleksiSumbuX(&A);
    printf("(%d, %d)\n", getAbsis(A), getOrdinat(A));

    printf("\nRefleksi Sumbu Y\n");
    printf("(%d, %d) ==> ", getAbsis(A), getOrdinat(A));
    refleksiSumbuY(&A);
    printf("(%d, %d)\n", getAbsis(A), getOrdinat(A));

    printf("\nKuadran A: %d", Kuadran(A));
    printf("\nKuadran B: %d\n", Kuadran(B));

    printf("\nJarak titik A ke titik B: %f\n", Jarak(A,B));



	return 0;
}
