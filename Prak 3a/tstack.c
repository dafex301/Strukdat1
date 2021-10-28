/************************************/
/* Program   : tstack.c */
/* Deskripsi : realisasi body modul Stack */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 16/09/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "tstack.h"
#include "boolean.h"
#include <string.h>

/*procedure createStack( output T: Tstack)
	{I.S.: -}
	{F.S.: T terdefinisi, semua nilai elemen T.wadah = '#' }
	{Proses: menginisialisasi T} */
void createStack (Tstack *T){
    // kamus lokal
    int i;

    // algoritma
    top(*T) = 0;
    for(i=1; i<=10; i++) {
        (*T).wadah[i] = '#';
    }
}

/*function top( T: Tstack) -> integer
	{mengembalikan posisi puncak stack } */
//int top (Tstack T);
//#define top(S) (S).top

/*function infotop( T: Tstack) -> character
	{mengembalikan nilai elemen top stack } */
//char infotop (Tstack T);
//#define infotop(S) (S).wadah[(S).top]



/*function isEmptyStack( T: Tstack) -> boolean
	{mengembalikan True jika T kosong } */
boolean isEmptyStack (Tstack T) {
    // kamus lokal

    // algoritma
    return (top(T) == 0);
}

/*function isFullStack( T: Tstack) -> boolean
	{mengembalikan True jika T penuh } */
boolean isFullStack (Tstack T) {
    // kamus lokal

    // algoritma
    return (top(T) == 10);
}

/*procedure push ( input/output T:Tstack, input E: character )
	{I.S.: T,E terdefinisi}
	{F.S.: infotop tetap, atau berisi nilai E }
	{Proses: mengisi elemen top baru, bila belum penuh }*/
void push (Tstack *T, char E){
    // kamus lokal

    // algoritma
    if (!isFullStack(*T)) {
        top(*T)++;
        infotop(*T) = E;
    }
}

/*procedure pop ( input/output T:Tstack, output X: character )
	{I.S.: T terdefinisi}
	{F.S.: X= infotop stack lama, atau '#' }
	{Proses: mengambil elemen top, bila belum kosong }*/
void pop (Tstack *T, char *X){
    // kamus lokal

    // algoritma
    if (!isEmptyStack(*T)) {
        (*X) = infotop(*T);
        infotop(*T) = '#';
        top(*T)--;
    } else {
        (*X) = '#';
    }
}

/*procedure prinTstack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan kondisi wadah T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void prinTstack (Tstack T) {
    // kamus lokal
    int i;

    // algoritma
    for(i=1; i<=10; i++) {
        printf("%c ", T.wadah[i]);
    }
}

/*procedure viewStack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan elemen tak kosong T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void viewStack (Tstack T){
    // kamus lokal
    int i;

    // algoritma
    for(i=1; i<=top(T); i++){
        printf("%c ", T.wadah[i]);
    }
}

/*function isPalindrome ( T:stack ) -> boolean
    {mengembalikan True jika Palindrome} */
boolean isPalindrome (char str[]){
    /* kamus lokal */
    int i;
    int mid, length; // nilai tengah dan panjang string
    char temp;
    Tstack Z;

    /* algoritma */
    // create stack lokal
    createStack(&Z);

    // mencari panjang string
    length = strlen(str);

    // mencari nilai tengah
    mid = length / 2;

    // push karakter pertama sampai tengah
    for(i=0; i<mid; i++) {
        push(&Z, str[i]);
    }

    // cek apakah panjang string ganjil, jika ganjil lewati karakter tengah
    if (length%2 != 0) {
        i++;
    }

    // jika belum menemui akhir string
    while (str[i] != '\0') {
        pop(&Z, &temp);

        // Jika karakter berbeda maka bukan palindrome
        if (temp != str[i]) {
            return false;
        }
        i++;
    }
    return true;
}

/*procedure pushBabel1 ( input/output T:Tstack, input E: character )
	{I.S.: T terdefinisi, E terdefinisi }
	{F.S.: T bertambah 1 elemen (E) atau menjadi kosong bila penuh }
	{Proses: menumpuk top atau menghapus semua elemen }*/
void pushBabel1 (Tstack *T, char E){
    // kamus lokal
    int i;

    // algoritma
    if (isFullStack(*T)) {
        top(*T) = 0;
        for(i=1; i<=10; i++) {
            (*T).wadah[i] = '#';
        }
    } else {
        push(&(*T), E);
    }
}
