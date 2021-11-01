/* Program   : mainlist1.c */
/* Deskripsi : file DRIVER modul linked list */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 26/10/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "list1.h"
#include "list1.c"


int main() {
    // KAMUS
    List A, B, C, D, E, F, G, H, I, J;
    address a, b, c, d, e, f;
    address z;
    infotype x;

    // Algoritma
    printf("================FAHREL GIBRAN ALGHANY================");
    printf("\n====================24060120130106===================\n");

    printf("\n================Create List================\n\n");
    CreateList(&A);
    CreateList(&B);

    a = Alokasi(1);
    b = Alokasi(2);
    c = Alokasi(3);
    d = Alokasi(4);
    e = Alokasi(5);

    printf("\n================Insert First================\n");
    printf("Sebelum: "); PrintInfo(A);
    printf("ListEmpty(A): "); (ListEmpty(A))?printf("True\n"):printf("False\n");
    printf("NbElmt(A): %d", NbElmt(A));
    InsertFirst(&A, a);
    InsertFirst(&A, b);
    InsertFirst(&A, c);
    printf("\n\nSesudah: "); PrintInfo(A);
    printf("ListEmpty(A): "); (ListEmpty(A))?printf("True\n"):printf("False\n");
    printf("NbElmt(A): %d", NbElmt(A));
    printf("Average(A): %d", Average(A));

    printf("\n\n================FSearch================\n");
    printf("Mencari address d (4)\n");
    printf("Apakah ada di dalam list A: "); (FSearch(A, d)?printf("True") : printf("False"));

    printf("\n\n================Insert After================\n");
    printf("Sebelum: "); PrintInfo(A);
    InsertAfter(&A, d, b);
    printf("Sesudah: "); PrintInfo(A);

    printf("\n================Insert Last================\n");
    printf("Sebelum: "); PrintInfo(A);
    InsertLast(&A, e);
    printf("Sesudah: "); PrintInfo(A);

    printf("\n================Delete First================\n");
    printf("Sebelum: "); PrintInfo(A);
    DelFirst(&A, &f);
    printf("Sesudah: "); PrintInfo(A);

    printf("\n================Delete Last================\n");
    printf("Sebelum: "); PrintInfo(A);
    DelLast(&A, &f);
    printf("Sesudah: "); PrintInfo(A);

    printf("\n================Delete After================\n");
    printf("Sebelum: "); PrintInfo(A);
    DelAfter(&A, &f, b);
    printf("Sesudah: "); PrintInfo(A);

    printf("\n================FSearch================\n");
    printf("Mencari address b (2)\n");
    printf("Apakah ada di dalam list A: "); (FSearch(A, b)?printf("True") : printf("False"));

    printf("\n\n================InsVFirst================\n");
    printf("Sebelum: "); PrintInfo(B);
    printf("ListEmpty(B): "); (ListEmpty(B))?printf("True\n"):printf("False\n");
    printf("NbElmt(B): %d", NbElmt(B));
    InsVFirst(&B, 10);
    InsVFirst(&B, 20);
    InsVFirst(&B, 30);
    InsVFirst(&B, 40);
    InsVFirst(&B, 50);
    printf("\n\nSesudah: "); PrintInfo(B);
    printf("ListEmpty(B): "); (ListEmpty(B))?printf("True\n"):printf("False\n");
    printf("NbElmt(B): %d\n", NbElmt(B));
    printf("Average(B): %d", Average(B));

    printf("\n\n================InsVLast================\n");
    printf("Sebelum: "); PrintInfo(B);
    InsVLast(&B, 60);
    printf("Sesudah: "); PrintInfo(B);

    printf("\n================InsVAfter================\n");
    printf("Sebelum: "); PrintInfo(B);
    InsVAfter(&B, 100);
    printf("Sesudah: "); PrintInfo(B);

    printf("\n================InsVAfter2================\n");
    printf("Sebelum: "); PrintInfo(B);
    InsVAfter2(&B, 70, 30);
    printf("Sesudah: "); PrintInfo(B);

    printf("\n================DelVFirst================\n");
    printf("Sebelum: "); PrintInfo(B);
    DelVFirst(&B, &x);
    printf("Sesudah: "); PrintInfo(B);
    printf("Nilai yang dihapus: %d\n", x);

    printf("\n================DelVLast================\n");
    printf("Sebelum: "); PrintInfo(B);
    DelVLast(&B, &x);
    printf("Sesudah: "); PrintInfo(B);
    printf("Nilai yang dihapus: %d\n", x);

    printf("\n================DelVAfter================\n");
    printf("Sebelum: "); PrintInfo(B);
    DelVAfter(&B, &x);
    printf("Sesudah: "); PrintInfo(B);
    printf("Nilai yang dihapus: %d\n", x);

    printf("\n================DelVAfter2================\n");
    printf("Sebelum: "); PrintInfo(B);
    DelVAfter2(&B, &x, 40);
    printf("Sesudah: "); PrintInfo(B);
    printf("Nilai yang dihapus: %d\n", x);

    printf("\n================SearchPrec================\n");
    printf("List: "); PrintInfo(B);
    z = SearchPrec(B, 10);
    printf("Nilai sebelum 10: %d", info(z));

    printf("\n\n================InversList================\n");
    printf("Sebelum: "); PrintInfo(B);
    InversList(&B);
    printf("Sesudah: "); PrintInfo(B);

    printf("\n================FInversList================\n");
    printf("List B: "); PrintInfo(B);
    C = FInversList(B);
    printf("List C: "); PrintInfo(C);

    printf("\n================CopyList================\n");
    printf("List C: "); PrintInfo(C);
    CopyList(&C, &D);
    printf("List D: "); PrintInfo(D);

    printf("\n================FCopyList================\n");
    printf("List D: "); PrintInfo(D);
    E = FCopyList(D);
    printf("List E: "); PrintInfo(E);

    printf("\n================CpAlokList================\n");
    CreateList(&F);
    printf("Sebelum: "); PrintInfo(F);
    CpAlokList(E, &F);
    printf("Sesudah: "); PrintInfo(F);

    printf("\n================Konkat================\n");
    CreateList(&G);
    printf("Sebelum: "); PrintInfo(G);
    Konkat(E, F, &G);
    printf("Sesudah: "); PrintInfo(G);
    printf("List yang dikonkat (E): "); PrintInfo(E);
    printf("List yang dikonkat (F): "); PrintInfo(F);

    printf("\n================Konkat1================\n");
    CreateList(&H);
    printf("Sebelum: "); PrintInfo(H);
    Konkat1(&E, &F, &H);
    printf("Sesudah: "); PrintInfo(H);
    printf("List yang dikonkat (E): "); PrintInfo(E);
    printf("List yang dikonkat (F): "); PrintInfo(F);

    printf("\n================PecahList================\n");
    CreateList(&I);
    CreateList(&J);
    printf("Sebelum(I): "); PrintInfo(I);
    printf("Sebelum(J): "); PrintInfo(J);
    printf("List yang dipecah: "); PrintInfo(H);
    PecahList(&I, &J, H);
    printf("Sesudah(I): "); PrintInfo(I);
    printf("Sesudah(J): "); PrintInfo(J);

    printf("\n================DelAll================\n");
    printf("Sebelum: "); PrintInfo(B);
    DelAll(&B);
    printf("Sesudah: "); PrintInfo(B);


    return 0;
}
