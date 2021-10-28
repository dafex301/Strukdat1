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
    List A, B;
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

    printf("\n================Insert After================\n");
    printf("Sebelum: "); PrintInfo(A);
    InsertAfter(d, b);
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

    printf("\n================InsVFirst================\n");
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
    printf("NbElmt(B): %d", NbElmt(B));

    printf("\n\n================InsVLast================\n");
    printf("Sebelum: "); PrintInfo(B);
    InsVLast(&B, 60);
    printf("Sesudah: "); PrintInfo(B);

    printf("\n================InsVAfter================\n");
    printf("Sebelum: "); PrintInfo(B);
    InsVAfter(&B, 70, 30);
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
    DelVAfter(&B, &x, 40);
    printf("Sesudah: "); PrintInfo(B);
    printf("Nilai yang dihapus: %d\n", x);

    return 0;
}
