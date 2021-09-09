/************************************/
/* Program   : tabel.c */
/* Deskripsi : realisasi body modul Tabel */
/* NIM/Nama  : 24060120130106 / Fahrel Gibran Alghany */
/* Tanggal   : 09/09/2021 */
/***********************************/

#include <stdio.h>
#include <stdlib.h>
#include "tabel.h"
#include "boolean.h"


/*procedure createTable( output T: Tabel)
	{I.S.: -}
	{F.S.: size=0, setiap elemen wadah=-999}
	{Proses: menginisialisasi T} */
void createTable (Tabel *T) {
    // kamus lokal
    int i;

    // algoritma
    (*T).size = 0;
    for(i=1; i<=10; i++) {
        (*T).wadah[i] = -999;
    }
}

/*function getNewTable() --> Tabel
	{mengembalikan tabel dengan size=0, setiap elemen wadah=-999} */
Tabel getNewTable (){
    // kamus lokal
    Tabel T;

    // algoritma
    createTable(&T);
    return T;
}

/*procedure printTable ( input T:Tabel )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan semua elemen T ke layar} */
void printTable (Tabel T){
    // kamus lokal
    int i;

    // algoritma
    for(i=1; i<=10; i++){
        printf("%d ", T.wadah[i]);
    }
}

/*procedure viewTable ( input T:Tabel )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan elemen T yang terisi ke layar} */
void viewTable (Tabel T) {
    // kamus lokal
    int i;

    // algoritma
    for(i=1; i<=T.size; i++){
        printf("%d ", T.wadah[i]);
    }
}

/* procedure populateTabel( input/output T: Tabel, input N: integer )
{I.S.: T terdefinisi }
{F.S.: T terisi sebanyak N elemen}
{Proses: mengisi elemen wadah T dengan masukan keyboard, sebanyak N kali}
{Syarat: angka-angka masukan keyboard > 0 }*/
void populateTabel (Tabel *T, int N){
    // kamus lokal
    int x;
    int i;

    // algoritma
    i = 0;
    while(x>0 && i<N){
        i = i+1;
        printf("input ke-%d: ", i);
        scanf("%d", &x);
        (*T).wadah[i] = x;
    }
    (*T).size = i;
}

/* procedure populateTabelMark( input/output T: Tabel)
{I.S: T terdefinisi }
{F.S: T terisi sejumlah elemen }
{proses: mengisi elemen dengan masukan keyboard berulang hingga masukan bernilai <=0} */
void populateTabelMark (Tabel *T){
    // kamus lokal
    int x;
    int i;

    // algoritma
    i = 0;
    printf("input ke-1: ");
    scanf("%d", &x); //input elemen pertama
    while(x>0 && i<10) {
        i = i+1;
        (*T).wadah[i] = x;
        if (i<10) {
            printf("input ke-%d: ", i+1);
            scanf("%d", &x);
        }
    }
    ((*T).size) = i;
}

/*function getSize( T: Tabel) -> integer
	{mengembalikan banyak elemen pengisi T } */
int getSize (Tabel T){
    // kamus lokal

    // algoritma
    return T.size;
}

/*function countEmpty( T: Tabel) -> integer
	{mengembalikan banyak elemen T yang belum terisi } */
int countEmpty (Tabel T){
    // kamus lokal

    // algoritma
    return 10-T.size;
}

//PREDIKAT
/*function isEmptyTable( T: Tabel) -> boolean
	{mengembalikan True jika T kosong } */
boolean isEmptyTable (Tabel T){
    // kamus lokal

    // algoritma
    return (T.size == 0);
}

/*function isFullTable( T: Tabel) -> boolean
	{mengembalikan True jika T penuh } */
boolean isFullTable (Tabel T){
    // kamus lokal

    // algoritma
    return (T.size == 10);
}

//OPERATOR LAIN
/*procedure searchX1 ( input T:Tabel, input X: integer, output Pos: integer )
	{I.S.: T terdefinisi, X terdefinisi }
	{F.S.: Pos berisi posisi pertama ketemu X di T.wadah, atau -999 jika tidak ketemu }
	{Proses: mencari elemen bernilai X dalam T.wadah}*/
void searchX1 (Tabel T, int X, int *Pos) {
    // kamus lokal
    int i;

    // algoritma
    i = 1;
    (*Pos) = -999;
    if (T.size != 0) {
        while (i <= T.size && T.wadah[i] != X) {
            i++;
        }
        if (T.wadah[i] == X) {
            *Pos = i;
        }
    }
}
/*procedure countX ( input T:Tabel, input X: integer, output Byk: integer )
	{I.S.: T terdefinisi, X terdefinisi }
	{F.S.: Byk berisi banyaknya X di T.wadah, atau 0 jika tidak ketemu }
	{Proses: menghitung elemen bernilai X dalam T.wadah}*/
void countX (Tabel T, int X, int *Byk){
    // kamus lokal
    int i;

    // algoritma
    (*Byk) = 0;
    for (i=1; i<=T.size; i++) {
        if (T.wadah[i] == X){
            (*Byk)++;
        }
    }
}

/*function getMaxElm ( T: Tabel) -> integer
	{mengembalikan nilai elemen terbesar } */
int getMaxElm (Tabel T){
    // kamus lokal
    int i;
    int biggest;

    // algoritma
    if (!isEmptyTable(T)) {
        biggest = 0; //inisialisasi biggest
        for (i=1; i<=T.size; i++) {
            if (T.wadah[i] > biggest) {
                biggest = T.wadah[i];
            }
        }
        return biggest;
    }
    return -999;
}

/*function getMinElm ( T: Tabel) -> integer
	{mengembalikan nilai elemen terkecil, tapi bukan -999 } */
int getMinElm (Tabel T){
    // kamus lokal
    int i;
    int smallest;

    // algoritma
    if (!isEmptyTable(T)) {
        smallest = T.wadah[1]; //inisialisasi smallest
        for (i=2; i<=T.size; i++) {
            if (T.wadah[i] < smallest) {
                smallest = T.wadah[i];
            }
        }
        return smallest;
    }
    return -999;
}

/*procedure addX ( input/output T:Tabel, input X: integer )
	{I.S.: T terdefinisi, X terdefinisi }
	{F.S.: isi T.wadah bertambah 1 elemen jika belum penuh}
	{Proses: mengisi elemen T.wadah dengan nilai X}*/
void addX (Tabel *T, int X){
    // kamus lokal

    // algoritma
    if (!isFullTable(*T)){
        (*T).size++;
        (*T).wadah[(*T).size] = X;
    }
}

/*procedure delX ( input/output T:Tabel, input X: integer )
	{I.S.: T terdefinisi}
	{F.S.: isi T.wadah berkurang 1 elemen jika belum kosong}
	{Proses: menghapus 1 elemen bernilai X, geser semua elemen sisa}*/
void delX (Tabel *T, int X){
    // kamus lokal
    int pos;

    // algoritma
    searchX1(*T, X, &pos);
    for(pos; pos<=((*T).size); pos++){
        (*T).wadah[pos] = (*T).wadah[pos+1];
    }
    (*T).wadah[(*T).size] = -999;
    (*T).size--;
}

/*procedure delAllX ( input/output T:Tabel, input X: integer )
	{I.S.: T terdefinisi}
	{F.S.: isi T.wadah berkurang semua elemen bernilai X jika belum kosong}
	{Proses: menghapus semua elemen bernilai X, geser elemen sisa}*/
void delAllX (Tabel *T, int X){
    // kamus lokal
    int i;
    int count;

    // algoritma
    countX(*T, X, &count);
    for(i=1; i<=count; i++){
        delX((&(*T)), X);
    }
}

/*procedure updateX ( input/output T:Tabel, input X: integer, input Y: integer )
	{I.S.: T terdefinisi, Y >= 0}
	{F.S.: isi T.wadah bernilai X diganti nilainya dengan Y}
	{Proses: mengganti elemen pertama bernilai X dengan nilai Y }*/
void updateX (Tabel *T, int X, int Y){
    // kamus lokal
    int pos;

    // algoritma
    searchX1(*T, X, &pos);
    (*T).wadah[pos] = Y;
}
