/***********************************/
/* Program   : main.c */
/* Deskripsi : aplikasi driver modul Tstack */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 13/09/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "tstack.h"
#include "boolean.h"


int main()
{
    // Kamus
    Tstack B;

    // Algoritma
    createStack(&B);

    printf("Hello world!\n");
    return 0;
}
