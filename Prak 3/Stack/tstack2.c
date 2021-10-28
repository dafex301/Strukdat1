/***********************************/
/* Program   : tstack.c */
/* Deskripsi : realisasi modul stack karakter */
/* NIM/Nama  : 24060120130106/Fahrel Gibran Alghany*/
/* Tanggal   : 13/09/2021*/
/***********************************/
#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "tstack.h"
/*procedure createStack( output T: Tstack)
	{I.S.: -}
	{F.S.: T terdefinisi, semua nilai elemen T.wadah = '#' }
	{Proses: menginisialisasi T} */
void createStack (Tstack *T){
    // kamus lokal
    int i;

    // algoritma
    *T.top = 0;
    for(i=1; i<=10; i++) {
        *T.wadah[i] = '';
    }
}

/*function top( T: Tstack) -> integer
	{mengembalikan posisi puncak stack } */
int top (Tstack T) {
    #define top(S) (S).top
}


/*function infotop( T: Tstack) -> character
	{mengembalikan nilai elemen top stack } */
char infotop (Tstack T){
    #define infotop(S) (S).wadah[(S).top]
}


/*function isEmptyStack( T: Tstack) -> boolean
	{mengembalikan True jika T kosong } */
boolean isEmptyStack (Tstack T) {
    return (T.top == 0);
}

/*function isFullStack( T: Tstack) -> boolean
	{mengembalikan True jika T penuh } */
boolean isFullStack (Tstack T) {
    return (T.top == 10);
}

/*procedure push ( input/output T:Tstack, input E: character )
	{I.S.: T,E terdefinisi}
	{F.S.: infotop tetap, atau berisi nilai E }
	{Proses: mengisi elemen top baru, bila belum penuh }*/
void push (Tstack *T, char E){
    if (!isFullStack(*T)) {
        *T.top++;
        *T.wadah[*T.top] = E;
    }
}

/*procedure pop ( input/output T:Tstack, output X: character )
	{I.S.: T terdefinisi}
	{F.S.: X= infotop stack lama, atau '#' }
	{Proses: mengambil elemen top, bila belum kosong }*/
void pop (Tstack *T, char *X){
    if (!isEmptyStack(*T)) {
        *X = *T.wadah[*T.top];
        *T.wadah[*T.top] = '';
        *T.top--;
    } else {
        *X = '';
    }
}

/*procedure prinTstack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan kondisi wadah T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void printStack (Tstack T) {
    // kamus lokal
    int i;

    // algoritma
    for(i=1; i<=10; i++) {
        printf("%d ", T.wadah[i]);
    }
}

void printA() {
    printf("A");
}
