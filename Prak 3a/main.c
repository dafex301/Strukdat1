/***********************************/
/* Program   : maintstack.c */
/* Deskripsi : aplikasi driver modul Tstack */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 13/09/2021 */
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

    // buat tes Palindrome
    char text[10] = "kasurusak";

    // algoritma

    // createStack
    createStack(&A);

    // push
    push(&A, 'A');
    push(&A, 'B');
    push(&A, 'C');
    push(&A, 'D');
    push(&A, 'E');
    push(&A, 'F');
    push(&A, 'G');
    push(&A, 'H');
    push(&A, 'I');
    push(&A, 'J');

    // prinTstack
    printf("prinTstack:\n");
    prinTstack(A);
    printf("\n\n");

    // viewStack
    printf("viewStack:\n");
    viewStack(A);
    printf("\n\n");

    // top
    printf("Top:\n");
    printf("%d", top(A));
    printf("\n\n");

    // infotop
    printf("infotop:\n");
    printf("%c", infotop(A));
    printf("\n\n");

    // isEmptyStack
    printf("isEmptyStack:\n");
    isEmptyStack(A) ? printf("True") : printf("False");
    printf("\n\n");

    // isFullStack
    printf("isFullStack:\n");
    isFullStack(A) ? printf("True") : printf("False");
    printf("\n\n");

    // pop
    printf("Pop:\n");
    pop(&A, &a);
    printf("%c", a);
    printf("\n\n");

    // prinTstack habis pop
    printf("prinTstack:\n");
    prinTstack(A);
    printf("\n\n");

    // viewStack habis pop
    printf("viewStack:\n");
    viewStack(A);
    printf("\n\n");

    // isPalindrome
    printf("Apakah %s merupakan Palindrom\n", text);
    printf("isPalindrome: ");
    isPalindrome(text) ? printf("True") : printf("False");
    printf("\n\n");

    // pushBabel1
    pushBabel1(&A, 'Z');
    printf("pushBabel1:\n");
    prinTstack(A);
    printf("\n\n");

    // pushBabel1 case full
    pushBabel1(&A, 'A');
    printf("pushBabel1 case full:\n");
    prinTstack(A);
    printf("\n\n");


    /* pop(&A, &tes);
    pushBabel1(&A, 'Z');
    printf("\n\nTes: %c\n\n", tes);
    prinTstack(A);
    printf("\n");
    viewStack(A);
    printf("\n");
    printf("%d", isFullStack(A));
    printf("\n\n");
    printf("%d \n", top(A));
    printf("%d \n", isPalindrome(text));*/
    return 0;
}
