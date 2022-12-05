#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#define phi 3.14159265358979323846

// ========================================================================================================================================
//                                                      TEXT EDIT
void red() {
    printf("\033[1;31m");
}
void green() {
    printf("\033[1;32m");
}
void yellow() {
    printf("\033[1;33m");
}
void blue() {
    printf("\033[1;34m");
}
void purple() {
    printf("\033[1;35m");
}
void cyan() {
    printf("\033[1;36m");
}
void white() {
    printf("\033[1;37m");
}
void orange() {
    printf("\033[38;5;208;48;5;232m");
}
void reset() {
    printf("\033[0m");
}
// ========================================================================================================================================
//                                                    KALKULATOR DASAR

// Modul Kalkulator Dasar
double penjumlahan(double a, double b){
    return a + b;
}
double pengurangan(double a, double b){
    return a - b;
}
double perkalian(double a, double b){
    return a * b;
}
double pembagian(double a, double b){
    return a / b;
}
int modulus(int a, int b){
    return a % b;
}
double pangkat(double a, double b) {
    double temp =  1;
    for (int i = 0; i < b;i++) {
        temp = temp * a;
    }
    return temp;
}
double akar(double a) {
    double akarr, temp;
    akarr = a / 2;
    temp = 0;
    while (akarr != temp) {
        temp = akarr;
        akarr = (a / temp + temp) / 2;
    }
    return akarr;
}
double akarkubik(double a) {
   double i, precision = 0.000001;
   
   for(i = 1; (i*i*i) <= a; ++i) {
   } 

   for(--i; (i*i*i) < a; i += precision) {
   } 
   
   return i;
}
double akar4(double a) {
   double i, precision = 0.000001;
   
   for(i = 1; (i*i*i*i) <= a; ++i) {
   } 

   for(--i; (i*i*i*i) < a; i += precision) {
   } 
   
   return i;
}
long long int pecahan(long long int a, long long int b) {
    if (b == 0) { 
        return a;
    } else {
        return pecahan(b, a % b);
    }
} 
// Banner
void home_operasi(){
    printf("===========================================================================================\n");
    green();
    printf(" ___   _  _______  ___      ___   _  __   __  ___      _______  _______  _______  ______   \n");   
    printf("|   | | ||   _   ||   |    |   | | ||  | |  ||   |    |   _   ||       ||       ||    _ |  \n"); 
    printf("|   |_| ||  |_|  ||   |    |   |_| ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||  \n");
    printf("|      _||       ||   |    |      _||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_ \n");
    printf("|     |_ |       ||   |___ |     |_ |       ||   |___ |       |  |   |  |  |_|  ||    __  |\n");
    printf("|    _  ||   _   ||       ||    _  ||       ||       ||   _   |  |   |  |       ||   |  | |\n");
    printf("|___| |_||__| |__||_______||___| |_||_______||_______||__| |__|  |___|  |_______||___|  |_|\n");
    reset();
    printf("===========================================================================================\n");
    cyan();
    printf("                                      KODE OPERASI                           \n");
    printf("                |  Tambah(+)  |  Kurang(-)  |  Kali(*)  |  Bagi(/)  |          \n");
    printf("                 ===================================================\n");
    reset();
    printf("===========================================================================================\n");
    
}
void home_modulus() {
    printf("===============================================================\n");
    green();
    printf(" __   __  _______  ______   __   __  ___      __   __  _______ \n");
    printf("|  |_|  ||       ||      | |  | |  ||   |    |  | |  ||       |\n");
    printf("|       ||   _   ||  _    ||  | |  ||   |    |  | |  ||  _____|\n");
    printf("|       ||  | |  || | |   ||  |_|  ||   |    |  |_|  || |_____ \n");
    printf("|       ||  |_|  || |_|   ||       ||   |___ |       ||_____  |\n");
    printf("| ||_|| ||       ||       ||       ||       ||       | _____| |\n");
    printf("|_|   |_||_______||______| |_______||_______||_______||_______|\n");
    reset();
    printf("===============================================================\n");
}
void home_pangkat() {  
    printf("===============================================================\n"); 
    green();
    printf(" _______  _______  __    _  _______  ___   _  _______  _______ \n");
    printf("|       ||   _   ||  |  | ||       ||   | | ||   _   ||       |\n");
    printf("|    _  ||  |_|  ||   |_| ||    ___||   |_| ||  |_|  ||_     _|\n");
    printf("|   |_| ||       ||       ||   | __ |      _||       |  |   |  \n");
    printf("|    ___||       ||  _    ||   ||  ||     |_ |       |  |   |  \n");
    printf("|   |    |   _   || | |   ||   |_| ||    _  ||   _   |  |   |  \n");
    printf("|___|    |__| |__||_|  |__||_______||___| |_||__| |__|  |___|  \n");
    reset();
    printf("===============================================================\n");
    
}
void home_akar() {
    printf("=====================================\n");
    green();
    printf(" _______  ___   _  _______  ______   \n");
    printf("|   _   ||   | | ||   _   ||    _ |  \n");
    printf("|  |_|  ||   |_| ||  |_|  ||   | ||  \n");
    printf("|       ||      _||       ||   |_||_ \n");
    printf("|       ||     |_ |       ||    __  |\n");
    printf("|   _   ||    _  ||   _   ||   |  | |\n");
    printf("|__| |__||___| |_||__| |__||___|  |_|\n");
    reset();
    printf("=====================================\n");
   
}
void home_pecahan() {
    printf("===============================================================\n");
    green();
    printf(" _______  _______  _______  _______  __   __  _______  __    _ \n");
    printf("|       ||       ||       ||   _   ||  | |  ||   _   ||  |  | |\n");
    printf("|    _  ||    ___||       ||  |_|  ||  |_|  ||  |_|  ||   |_| |\n");
    printf("|   |_| ||   |___ |       ||       ||       ||       ||       |\n");
    printf("|    ___||    ___||      _||       ||       ||       ||  _    |\n");
    printf("|   |    |   |___ |     |_ |   _   ||   _   ||   _   || | |   |\n");
    printf("|___|    |_______||_______||__| |__||__| |__||__| |__||_|  |__|\n");
    reset();
    printf("===============================================================\n");
    cyan();
    printf("                        KODE OPERASI                           \n");
    printf("   |  Tambah(+)  |  Kurang(?)  |  Kali(*)  |  Bagi(/)  |          \n");
    printf("===============================================================\n");
    reset();
    printf("===============================================================\n");
   
}
void kalkulator_dasar(){
    printf("===========================================================================================\n");
    green();
    printf(" ___   _  _______  ___      ___   _  __   __  ___      _______  _______  _______  ______   \n");  
    printf("|   | | ||   _   ||   |    |   | | ||  | |  ||   |    |   _   ||       ||       ||    _ |  \n"); 
    printf("|   |_| ||  |_|  ||   |    |   |_| ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||  \n");
    printf("|      _||       ||   |    |      _||  |_|  ||   |    |       |  |   |  |  | |  ||   |_||_ \n");
    printf("|     |_ |       ||   |___ |     |_ |       ||   |___ |       |  |   |  |  |_|  ||    __  |\n");
    printf("|    _  ||   _   ||       ||    _  ||       ||       ||   _   |  |   |  |       ||   |  | |\n");
    printf("|___| |_||__| |__||_______||___| |_||_______||_______||__| |__|  |___|  |_______||___|  |_|\n");
    reset();
    printf("===========================================================================================\n");
    cyan();
    printf("Cara Pakai: Masukin angka sesuai daftar untuk mengoperasikan sesuai operasinya!\n");
    reset();
    printf("===========================================================================================\n");
    white();
    printf("1.Operasi\n");
    printf("2.Modulus\n");
    printf("3.Pangkat\n");
    printf("4.Akar\n");
    printf("5.Pecahan\n");
    reset();
    red();
    printf("99.Kembali\n");
    reset();
    printf("===========================================================================================\n");
}

// ========================================================================================================================================
//                                                      STATISTIKA

// Modul Statiska
long long int faktorial_statistika(long long int a){ // Faktorial buat Kombinasi dan Permutasi
    long long int fact = 1;
    long long int i;
    for(i=a;i>=1;i--){
        fact = i * fact;
    }
    return fact;
}
long long int kombinasi(long long int n, long long int r){ // Modul Kombinasi
    long long int akomb, bkomb, ckomb;
    akomb = faktorial_statistika(n);
    bkomb = faktorial_statistika(r);
    ckomb = faktorial_statistika(n-r);
    return akomb / (bkomb * ckomb);
}
long long int permutasi(long long int n, long long int r){ // Modul Permutasi
    long long int aperm, bperm;
    aperm = faktorial_statistika(n);
    bperm = faktorial_statistika(n-r);
    return aperm / (bperm);
}
// Banner
void home_kombinasi() {
    printf("=========================================================================\n");
    green();
    printf(" ___   _  _______  __   __  _______  ___  __    _  _______  _______  ___ \n"); 
    printf("|   | | ||       ||  |_|  ||  _    ||   ||  |  | ||   _   ||       ||   |\n"); 
    printf("|   |_| ||   _   ||       || |_|   ||   ||   |_| ||  |_|  ||  _____||   |\n"); 
    printf("|      _||  | |  ||       ||       ||   ||       ||       || |_____ |   |\n"); 
    printf("|     |_ |  |_|  ||       ||  _   | |   ||  _    ||       ||_____  ||   |\n"); 
    printf("|    _  ||       || ||_|| || |_|   ||   || | |   ||   _   | _____| ||   |\n"); 
    printf("|___| |_||_______||_|   |_||_______||___||_|  |__||__| |__||_______||___|\n");
    reset();
    printf("=========================================================================\n");
    red();
    printf("                                  Baca Saya!\n");
    printf(" Semakin besar nilai semakin tinggi kompleksitas waktu untuk prosesnya\n");
    printf("        Dan mungkin perlu waktu dan mungkin tidak berjalan lancar\n");
    reset();
    printf("=========================================================================\n");
    printf("         n!\n");
    printf("nCr = --------\n");
    printf("      (n-r)!r!\n");
} 
void home_permutasi() {
    printf("==============================================================================\n");
    green();
    printf(" _______  _______  ______    __   __  __   __  _______  _______  _______  ___ \n"); 
    printf("|       ||       ||    _ |  |  |_|  ||  | |  ||       ||   _   ||       ||   |\n"); 
    printf("|    _  ||    ___||   | ||  |       ||  | |  ||_     _||  |_|  ||  _____||   |\n"); 
    printf("|   |_| ||   |___ |   |_||_ |       ||  |_|  |  |   |  |       || |_____ |   |\n"); 
    printf("|    ___||    ___||    __  ||       ||       |  |   |  |       ||_____  ||   |\n"); 
    printf("|   |    |   |___ |   |  | || ||_|| ||       |  |   |  |   _   | _____| ||   |\n"); 
    printf("|___|    |_______||___|  |_||_|   |_||_______|  |___|  |__| |__||_______||___|\n"); 
    reset();
    printf("==============================================================================\n");
    red();
    printf("                                  Baca Saya!\n");
    printf(" Semakin besar nilai semakin tinggi kompleksitas waktu untuk prosesnya\n");
    printf("        Dan mungkin perlu waktu dan mungkin tidak berjalan lancar\n");
    reset();
    printf("==============================================================================\n");
    printf("         n!\n");
    printf("nPr = --------\n");
    printf("       (n-r)!\n");  
}
void home_modus() {
    printf("=============================================\n");
    green();
    printf(" __   __  _______  ______   __   __  _______ \n");
    printf("|  |_|  ||       ||      | |  | |  ||       |\n");
    printf("|       ||   _   ||  _    ||  | |  ||  _____|\n");
    printf("|       ||  | |  || | |   ||  |_|  || |_____ \n");
    printf("|       ||  |_|  || |_|   ||       ||_____  |\n");
    printf("| ||_|| ||       ||       ||       | _____| |\n");
    printf("|_|   |_||_______||______| |_______||_______| \n");
    reset();
    printf("==============================================\n");
}
void home_median() {
     printf("==================================================\n");
    green();
    printf(" __   __  _______  ______   ___   _______  __    _ \n"); 
    printf("|  |_|  ||       ||      | |   | |   _   ||  |  | |\n");
    printf("|       ||    ___||  _    ||   | |  |_|  ||   |_| |\n");
    printf("|       ||   |___ | | |   ||   | |       ||       |\n");
    printf("|       ||    ___|| |_|   ||   | |       ||  _    |\n");
    printf("| ||_|| ||   |___ |       ||   | |   _   || | |   |\n");
    printf("|_|   |_||_______||______| |___| |__| |__||_|  |__|\n");
    reset();
    printf("===================================================\n");
}
void home_mean() {
    printf("====================================\n");
    green();
    printf(" __   __  _______  _______  __    _ \n");
    printf("|  |_|  ||       ||   _   ||  |  | |\n");
    printf("|       ||    ___||  |_|  ||   |_| |\n");
    printf("|       ||   |___ |       ||       |\n");
    printf("|       ||    ___||       ||  _    |\n");
    printf("| ||_|| ||   |___ |   _   || | |   |\n");
    printf("|_|   |_||_______||__| |__||_|  |__|\n");
    reset();
    printf("====================================\n");
} 
void statistika() {
    printf("===================================================================================\n");
    green();
    printf("  _______  _______  _______  _______  ___  _______  _______  ___  ___   _  _______ \n");
    printf(" |       ||       ||   _   ||       ||   ||       ||       ||   ||   | | ||   _   |\n");
    printf(" |  _____||_     _||  |_|  ||_     _||   ||  _____||_     _||   ||   |_| ||  |_|  |\n");
    printf(" | |_____   |   |  |       |  |   |  |   || |_____   |   |  |   ||      _||       |\n");
    printf(" |_____  |  |   |  |       |  |   |  |   ||_____  |  |   |  |   ||     |_ |       |\n");
    printf("  _____| |  |   |  |   _   |  |   |  |   | _____| |  |   |  |   ||    _  ||   _   |\n");
    printf(" |_______|  |___|  |__| |__|  |___|  |___||_______|  |___|  |___||___| |_||__| |__|\n");
    reset();
    printf("===================================================================================\n");
    cyan();
    printf("Cara Pakai: Masukin angka sesuai daftar untuk mengoperasikan sesuai operasinya!\n");
    reset();
    printf("===================================================================================\n");
    white();
    printf("1.Kombinasi\n");
    printf("2.Permutasi\n");
    printf("3.Modus\n");
    printf("4.Median\n");
    printf("5.Mean\n");
    reset();
    red();
    printf("99.Kembali\n");
    reset();
    printf("===================================================================================\n");
}

// ========================================================================================================================================
//                                                    EXTRAS

// Modul Extras
long long int faktorial(long long int a){ // Modul Faktorial
    if (a==0 || a==1) {
        return 1;
    } else {
        return a * faktorial(a-1);
    }
}

long long int fibonacci(long long int a) { // Modul Fibonacci
    if (a==0 || a==1) {
        return a;
    } else {
        return fibonacci(a-1) + fibonacci(a-2);
    }
}

long long int un_deret_aritmatika (long long int a, long long int b, long long int n) { // Modul Deret Aritmatika Un
    return a + ((n-1) * b);
}
long long int sn_deret_aritmatika (long long int a, long long int b, long long int n) { // Modul Deret Aritmatika Sn
    return n / 2 * (2 * a + ((n-1) * b));
}

double rasio_geometri(double b, double a) { // Modul Rasion Geometri
    return b / a;
}
double un_deret_geometri (double a, double r, double n) { // Modul Deret Geometri Un
    return a * pangkat(r, n-1);
}
double sn_deret_geometri_naik (double a, double r, double n) { // Modul Deret Geometri Sn Naik
    return a * (pangkat(r, n) - 1) / (r - 1);
}
double sn_deret_geometri_turun (double a, double r, double n) { // Modul Deret Geometri Sn Turun
    return a * (1 - pangkat(r, n)) / (1 - r);
}


// Banner
void home_fibonacci() {
    printf("=========================================================================\n");
    green();
    printf(" _______  ___  _______  _______  __    _  _______  _______  _______  ___ \n"); 
    printf("|       ||   ||  _    ||       ||  |  | ||   _   ||       ||       ||   |\n"); 
    printf("|    ___||   || |_|   ||   _   ||   |_| ||  |_|  ||       ||       ||   |\n"); 
    printf("|   |___ |   ||       ||  | |  ||       ||       ||     __||     __||   |\n"); 
    printf("|    ___||   ||  _   | |  |_|  ||  _    ||   _   ||    |   |    |   |   |\n"); 
    printf("|   |    |   || |_|   ||       || | |   ||  | |  ||    |__ |    |__ |   |\n"); 
    printf("|___|    |___||_______||_______||_|  |__||__| |__||_______||_______||___|\n");
    reset();
    red();
    printf("(Untuk nilai n besar mungkin perlu waktu dan mungkin tidak berjalan lancar)\n");
    reset();
    printf("=========================================================================\n");
}
void home_faktorial() {
    printf("==============================================================================\n");
    green();
    printf(" _______  _______  ___   _  _______  _______  ______    ___  _______  ___     \n");
    printf("|       ||   _   ||   | | ||       ||       ||    _ |  |   ||   _   ||   |    \n");
    printf("|    ___||  |_|  ||   |_| ||_     _||   _   ||   | ||  |   ||  |_|  ||   |    \n");
    printf("|   |___ |       ||      _|  |   |  |  | |  ||   |_||_ |   ||       ||   |    \n");
    printf("|    ___||       ||     |_   |   |  |  |_|  ||    __  ||   ||       ||   |___ \n");
    printf("|   |    |   _   ||    _  |  |   |  |       ||   |  | ||   ||   _   ||       |\n");
    printf("|___|    |__| |__||___| |_|  |___|  |_______||___|  |_||___||__| |__||_______|\n");
    reset();
    printf("==============================================================================\n");
    red();
    printf("(Hanya angka ke-n (!) tidak dimasukan)\n");
    printf("(Untuk nilai n besar mungkin perlu waktu dan mungkin tidak berjalan lancar)\n");
    reset();
    printf("==============================================================================\n");
}
void home_prima() {
    printf("=========================================================================\n");
    green();
    printf(" _______  _______  ___   _      _______  ______    ___  __   __  _______ \n");
    printf("|       ||       ||   | | |    |       ||    _ |  |   ||  |_|  ||   _   |\n");
    printf("|       ||    ___||   |_| |    |    _  ||   | ||  |   ||       ||  |_|  |\n");
    printf("|       ||   |___ |      _|    |   |_| ||   |_||_ |   ||       ||       |\n");
    printf("|      _||    ___||     |_     |    ___||    __  ||   ||       ||       |\n");
    printf("|     |_ |   |___ |    _  |    |   |    |   |  | ||   || ||_|| ||   _   |\n");
    printf("|_______||_______||___| |_|    |___|    |___|  |_||___||_|   |_||__| |__|\n");
    reset();
    printf("=========================================================================\n");
    green();
    printf("                             Cara Pakai\n");
    reset();
    green();
    printf("                     Masukan suatu bilangan n\n");
    printf(" Nanti akan di cek apakah n itu bilangan prima atau bukan bilang prima!\n");
    reset();
    printf("=========================================================================\n");
}
void home_deret_aritmatika() {
    printf("====================================================================================================================================\n");
    green();
    printf(" ______   _______  ______    _______  _______     _______  ______    ___  _______  __   __  _______  _______  ___  ___   _  _______ \n");
    printf("|      | |       ||    _ |  |       ||       |   |   _   ||    _ |  |   ||       ||  |_|  ||   _   ||       ||   ||   | | ||   _   |\n");
    printf("|  _    ||    ___||   | ||  |    ___||_     _|   |  |_|  ||   | ||  |   ||_     _||       ||  |_|  ||_     _||   ||   |_| ||  |_|  |\n");
    printf("| | |   ||   |___ |   |_||_ |   |___   |   |     |       ||   |_||_ |   |  |   |  |       ||       |  |   |  |   ||      _||       |\n");
    printf("| |_|   ||    ___||    __  ||    ___|  |   |     |       ||    __  ||   |  |   |  |       ||       |  |   |  |   ||     |_ |       |\n");
    printf("|       ||   |___ |   |  | ||   |___   |   |     |   _   ||   |  | ||   |  |   |  | ||_|| ||   _   |  |   |  |   ||    _  ||   _   |\n");
    printf("|______| |_______||___|  |_||_______|  |___|     |__| |__||___|  |_||___|  |___|  |_|   |_||__| |__|  |___|  |___||___| |_||__| |__|\n");
    reset();
    printf("====================================================================================================================================\n");
    red();
    printf("                                                            Baca Saya\n");
    printf("                                (Untuk nilai n besar mungkin perlu waktu dan mungkin tidak berjalan lancar)\n");
    reset();
    printf("====================================================================================================================================\n");
}
void home_deret_geometri() {
    printf("======================================================================================================================\n");
    green();
    printf(" ______   _______  ______    _______  _______     _______  _______  _______  __   __  _______  _______  ______    ___ \n"); 
    printf("|      | |       ||    _ |  |       ||       |   |       ||       ||       ||  |_|  ||       ||       ||    _ |  |   |\n"); 
    printf("|  _    ||    ___||   | ||  |    ___||_     _|   |    ___||    ___||   _   ||       ||    ___||_     _||   | ||  |   |\n"); 
    printf("| | |   ||   |___ |   |_||_ |   |___   |   |     |   | __ |   |___ |  | |  ||       ||   |___   |   |  |   |_||_ |   |\n");
    printf("| |_|   ||    ___||    __  ||    ___|  |   |     |   ||  ||    ___||  |_|  ||       ||    ___|  |   |  |    __  ||   |\n"); 
    printf("|       ||   |___ |   |  | ||   |___   |   |     |   |_| ||   |___ |       || ||_|| ||   |___   |   |  |   |  | ||   |\n");
    printf("|______| |_______||___|  |_||_______|  |___|     |_______||_______||_______||_|   |_||_______|  |___|  |___|  |_||___|\n"); 
    reset();
    printf("======================================================================================================================\n");
    red();
    printf("                                                   Baca Saya\n");
    printf("                       (Untuk nilai n besar mungkin perlu waktu dan mungkin tidak berjalan lancar)\n");
    reset();
    printf("======================================================================================================================\n");

}
void home_faktor_perkua() {
    printf("========================================================================================================================================================\n");
    green();
    printf(" _______  _______  ______    _______  _______  __   __  _______  _______  __    _        ___   _  __   __  _______  ______   ______    _______  _______ \n");
    printf("|       ||       ||    _ |  |       ||   _   ||  |_|  ||   _   ||   _   ||  |  | |      |   | | ||  | |  ||   _   ||      | |    _ |  |   _   ||       |\n");
    printf("|    _  ||    ___||   | ||  |  _____||  |_|  ||       ||  |_|  ||  |_|  ||   |_| |      |   |_| ||  | |  ||  |_|  ||  _    ||   | ||  |  |_|  ||_     _|\n");
    printf("|   |_| ||   |___ |   |_||_ | |_____ |       ||       ||       ||       ||       |      |      _||  |_|  ||       || | |   ||   |_||_ |       |  |   |  \n");
    printf("|    ___||    ___||    __  ||_____  ||       ||       ||       ||       ||  _    |      |     |_ |       ||       || |_|   ||    __  ||       |  |   |  \n");
    printf("|   |    |   |___ |   |  | | _____| ||   _   || ||_|| ||   _   ||   _   || | |   |      |    _  ||       ||   _   ||       ||   |  | ||   _   |  |   |  \n");
    printf("|___|    |_______||___|  |_||_______||__| |__||_|   |_||__| |__||__| |__||_|  |__|      |___| |_||_______||__| |__||______| |___|  |_||__| |__|  |___|  \n");
    reset();
    printf("========================================================================================================================================================\n");

}
void extras() {
    printf("====================================================================================\n");
    green();
    printf("             _______  __   __  _______  ______    _______  _______ \n");
    printf("            |       ||  |_|  ||       ||    _ |  |   _   ||       |\n");
    printf("            |    ___||       ||_     _||   | ||  |  |_|  ||  _____|\n");
    printf("            |   |___ |       |  |   |  |   |_||_ |       || |_____ \n");
    printf("            |    ___| |     |   |   |  |    __  ||   _   ||_____  |\n");
    printf("            |   |___ |   _   |  |   |  |   |  | ||  | |  | _____| |\n");
    printf("            |_______||__| |__|  |___|  |___|  |_||__| |__||_______|\n");
    reset();
    printf("===================================================================================\n");
    cyan();
    printf("   Cara Pakai: Masukin angka sesuai daftar untuk mengoperasikan sesuai operasinya! \n");
    reset();
    red();
    printf("                                  Baca Saya!\n");
    printf(" Semakin besar nilai dari N maka semakin tinggi kompleksitas waktu untuk prosesnya \n");
    reset();
    printf("===================================================================================\n");
    white();
    printf("1.Fibonacci\n");
    printf("2.Faktorial\n");
    printf("3.Cek Bilangan Prima\n");
    printf("4.Deret Aritmatika\n");
    printf("5.Deret Geometri\n");
    reset();
    red();
    printf("99.Kembali\n");
    reset();
    printf("===================================================================================\n");
}

// ========================================================================================================================================
//                                                      CONVERTER

// Modul Converter Suhu 
double celciuskereamur(double a) {
    return 4 * a / 5;
}
double celciuskefahrenheit(double a) {
    return (9 * a / 5) + 32;
}
double celciuskekelvin(double a) {
    return a + 273;
}
double reamurkecelcius(double a) {
    return 5 * a / 4;
}
double reamurkefahrenheit(double a) {
    return (9 * a / 4) + 32;
}
double reamurkekelvin(double a) {
    return (5 * a / 4) + 273;
}
double fahrenheitkecelcius(double a) {
    return 5 * (a - 32) / 9;
}
double fahrenheitkereamur(double a) {
    return 4 * (a - 32) / 9;
}
double fahrenheitkekelvin(double a) {
    return (5 * (a - 32) / 9) + 273;
}
double kelvinkecelcius(double a) {
    return a - 273;
}
double kelvinkereamur(double a) {
    return 4 * (a - 273) / 5;
}
double kelvinkefahrenheit(double a) {
    return (9 * (a - 273) / 5) + 32;
}

// Modul Converter Berat dan Jarak 
double skalatanggaturun1(double a) {
    return a * 10;
} 
double skalatanggaturun2(double a) {
    return a * 100;
} 
double skalatanggaturun3(double a) {
    return a * 1000;
} 
double skalatanggaturun4(double a) {
    return a * 10000;
} 
double skalatanggaturun5(double a) {
    return a * 100000;
} 
double skalatanggaturun6(double a) {
    return a * 1000000;
} 
double skalatanggaturun7(double a) {
    return a * 10000000;
}
double skalatanggaturun8(double a) {
    return a * 100000000;
}
double skalatanggaturun9(double a) {
    return a * 1000000000;
} 
double skalatangganaik1(double a) {
    return a / 10;
} 
double skalatangganaik2(double a) {
    return a / 100;
} 
double skalatangganaik3(double a) {
    return a / 1000;
} 
double skalatangganaik4(double a) {
    return a / 10000;
} 
double skalatangganaik5(double a) {
    return a / 100000;
} 
double skalatangganaik6(double a) {
    return a / 1000000;
} 
double skalatangganaik7(double a) {
    return a / 10000000;
} 
double skalatangganaik8(double a) {
    return a / 100000000;
}
double skalatangganaik9(double a) {
    return a / 1000000000;
} 

// Modul Converter Waktu Abad
double abadkedekade(double a) { 
    return a * 10;
}
double abadkewindu(double a) {
    return a * 12.5;
}
double abadkelustrum(double a) {
    return a * 20;
}
double abadketahun(double a) {
    return a * 100;
}
double abadkebulan(double a) {
    return a * 100 * 12;
}
double abadkeminggu(double a) {
    return a * 100 * 52.1428571;
}
double abadkehari(double a) {
    return a * 100 * 52.1428571 * 7;
}
double abadkejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24;
}
double abadkemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60;
}
double abadkedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60;
}
double abadkemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000;
}
// Modul Converter Waktu Dekade
double dekadekeabad(double a) { 
    return a / 10;
}
double dekadekewindu(double a) {
    return a * 12.5 / 10;
}
double dekadekelustrum(double a) {
    return a * 20 / 10;
}
double dekadeketahun(double a) {
    return a * 100 / 10;
}
double dekadekebulan(double a) {
    return a * 100 * 12 / 10;
}
double dekadekeminggu(double a) {
    return a * 100 * 52.1428571 / 10;
}
double dekadekehari(double a) {
    return a * 100 * 52.1428571 * 7 / 10;
}
double dekadekejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 10;
}
double dekadekemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 10;
}
double dekadekedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 10;
}
double dekadekemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 10;
}
// Modul Converter Waktu Wisnu
double windukeabad(double a) { 
    return a / 12.5;
}
double windukedekade(double a) {
    return a / 1.25;
}
double windukelustrum(double a) {
    return a * 20 / 12.5;
}
double winduketahun(double a) {
    return a * 100 / 12.5;
}
double windukebulan(double a) {
    return a * 100 * 12 / 12.5;
}
double windukeminggu(double a) {
    return a * 100 * 52.1428571 / 12.5;
}
double windukehari(double a) {
    return a * 100 * 52.1428571 * 7 / 12.5;
}
double windukejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 12.5;
}
double windukemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 12.5;
}
double windukedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 12.5;
}
double windukemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 12.5;
}
// Modul Converter Waktu Lustrum
double lustrumkeabad(double a) { 
    return a / 20;
}
double lustrumkedekade(double a) {
    return a / 2;
}
double lustrumkewindu(double a) {
    return a / 1.6;
}
double lustrumketahun(double a) {
    return a * 5;
}
double lustrumkebulan(double a) {
    return a * 100 * 12 / 20;
}
double lustrumkeminggu(double a) {
    return a * 100 * 52.1428571 / 20;
}
double lustrumkehari(double a) {
    return a * 100 * 52.1428571 * 7 / 20;
}
double lustrumkejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 20;
}
double lustrumkemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 20;
}
double lustrumkedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 20;
}
double lustrumkemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 20;
}
// Modul Converter Waktu Tahun
double tahunkeabad(double a) { 
    return a / 100;
}
double tahunkedekade(double a) {
    return a / 10;
}
double tahunkewindu(double a) {
    return a / 8;
}
double tahunkelustrum(double a) {
    return a / 5;
}
double tahunkebulan(double a) {
    return a * 100 * 12 / 100;
}
double tahunkeminggu(double a) {
    return a * 100 * 52.1428571 / 100;
}
double tahunkehari(double a) {
    return a * 100 * 52.1428571 * 7 / 100;
}
double tahunkejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 100;
}
double tahunkemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 100;
}
double tahunkedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 100;
}
double tahunkemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 100;
}
// Modul Converter Waktu Bulan
double bulankeabad(double a) { 
    return a / 1200;
}
double bulankedekade(double a) {
    return a / 120;
}
double bulankewindu(double a) {
    return a / 96;
}
double bulankelustrum(double a) {
    return a / 60;
}
double bulanketahun(double a) {
    return a / 12;
}
double bulankeminggu(double a) {
    return a * 100 * 52.1428571 / 1200;
}
double bulankehari(double a) {
    return a * 100 * 52.1428571 * 7 / 1200;
}
double bulankejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 1200;
}
double bulankemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 1200;
}
double bulankedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 1200;
}
double bulankemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 1200;
}
// Modul Converter Waktu Minggu
double minggukeabad(double a) { 
    return a / 5214.285714;
}
double minggukedekade(double a) {
    return a / 521.428571;
}
double minggukewindu(double a) {
    return a / 417.142857;
}
double minggukelustrum(double a) {
    return a / 260.714286;
}
double mingguketahun(double a) {
    return a / 52.142857;
}
double minggukebulan(double a) {
    return a / 4.34523783;
}
double minggukehari(double a) {
    return a * 100 * 52.1428571 * 7 / 5214.285714;
}
double minggukejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 5214.285714;
}
double minggukemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 5214.285714;
}
double minggukedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 5214.285714;
}
double minggukemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 5214.285714;
}
// Modul Converter Waktu Hari
double harikeabad(double a) { 
    return a / 365000;
}
double harikedekade(double a) {
    return a / 36500;
}
double harikewindu(double a) {
    return a / 2920;
}
double harikelustrum(double a) {
    return a / 1825;
}
double hariketahun(double a) {
    return a / 365;
}
double harikebulan(double a) {
    return a / 30.416667;
}
double harikeminggu(double a) {
    return a / 7;
}
double harikejam(double a) {
    return a * 100 * 52.1428571 * 7 * 24 / 36500;
}
double harikemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 36500;
}
double harikedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 36500;
}
double harikemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 36500;
}
// Modul Converter Waktu Jam
double jamkeabad(double a) { 
    return a / 876000;
}
double jamkedekade(double a) {
    return a / 87600;
}
double jamkewindu(double a) {
    return a / 70080;
}
double jamkelustrum(double a) {
    return a / 43800;
}
double jamketahun(double a) {
    return a / 8760;
}
double jamkebulan(double a) {
    return a / 730;
}
double jamkeminggu(double a) {
    return a / 168;
}
double jamkehari(double a) {
    return a / 24;
}
double jamkemenit(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 / 876000;
}
double jamkedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 876000;
}
double jamkemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 876000;
}
// Modul Converter Waktu Menit
double menitkeabad(double a) { 
    return a / 52560000;
}
double menitkedekade(double a) {
    return a / 5256000;
}
double menitkewindu(double a) {
    return a / 4204800;
}
double menitkelustrum(double a) {
    return a / 2628000;
}
double menitketahun(double a) {
    return a / 525600;
}
double menitkebulan(double a) {
    return a / 43800;
}
double menitkeminggu(double a) {
    return a / 10080;
}
double menitkehari(double a) {
    return a / 1440;
}
double menitkejam(double a) {
    return a / 60;
}
double menitkedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 52560000;
}
double menitkemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 52560000;
}
// Modul Converter Waktu Detik
double detikkeabad(double a) { 
    return a / 3153600000;
}
double detikkedekade(double a) {
    return a / 3153600000;
}
double detikkewindu(double a) {
    return a / 252288000;
}
double detikkelustrum(double a) {
    return a / 157680000;
}
double detikketahun(double a) {
    return a / 31536000;
}
double detikkebulan(double a) {
    return a / 2628000;
}
double detikkeminggu(double a) {
    return a / 604800;
}
double detikkehari(double a) {
    return a / 86400;
}
double detikkejam(double a) {
    return a / 3600;
}
double detikkemenit(double a) {
    return a / 60;
}
double detikkemilidetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 * 1000 / 3153600000;
}
// Modul Converter Waktu Milidetik
double mildetikkeabad(double a) { 
    return a / 3153600000000;
}
double mildetikkedekade(double a) {
    return a / 315360000000;
}
double mildetikkewindu(double a) {
    return a / 252288000000;
}
double mildetikkelustrum(double a) {
    return a / 157680000000;
}
double mildetikketahun(double a) {
    return a / 31536000000;
}
double mildetikkebulan(double a) {
    return a / 2628000000;
}
double mildetikkeminggu(double a) {
    return a / 604800000;
}
double mildetikkehari(double a) {
    return a / 86400000;
}
double mildetikkejam(double a) {
    return a / 3600000;
}
double mildetikkemenit(double a) {
    return a / 60000;
}
double mildetikkedetik(double a) {
    return a * 100 * 52.1428571 * 7 * 24 * 60 * 60 / 3153600000000;
}


// Modul Converter Progammer
 long long int binerkedecimal(long long int a) {
    long long int digit, i=1, b=0;
    while(a != 0)
    {
    digit = a % 10;
    b = b + (digit * i);
    i = i * 2;
    a = a / 10;
    }
    return b;
}
long long int binerkeoctal (long long int nomorbin){
    int nomoroct = 0, nomordes = 0, i = 0;
    while(nomorbin != 0)
    {
        nomordes = nomordes + (nomorbin%10) * pangkat(2,i);
        i++;
        nomorbin = nomorbin / 10;
    }
    i = 1;
    while (nomordes != 0)
    {
        nomoroct = nomoroct + (nomordes % 8) * i;
        nomordes = nomordes / 8;
        i = i * 10;
    }
    return nomoroct;
}

long long int decimalkebiner(long long int n) {
    int a[10],i; 
    for(i=0;n>0;i++) {    
        a[i]=n%2;    
        n=n/2;    
    }
    printf("|         Biner          |            ");    
    for(i=i-1;i>=0;i--) {    
        printf("%d",a[i]);     
    }   
    return 0;
}
long long int decimalkeoctal(long long int n) {
    int a[10],i; 
    for(i=0;n>0;i++) {    
        a[i]=n%8;    
        n=n/8;    
    }
    printf("|         Octal          |            ");    
    for(i=i-1;i>=0;i--) {    
        printf("%d",a[i]);     
    }
    return 0;
}
long long int decimalkehexa(long long int n) {
    char reversedDigits[100];
	int i = 0;
	
	while(n > 0) {
		
		int remain = n % 16;
		
		if(remain < 10)
			reversedDigits[i] = '0' + remain;
		else
			reversedDigits[i] = 'A' + (remain - 10);
		
		n = n / 16;
		i++;
	}
    printf("|      Hexadecimal       |            ");
	while(i--) {
		printf("%c", reversedDigits[i]);
	}
    return 0;
}


long long int octalkebiner(long long int num) {
    int dec = 0, rem = 0, place = 0;  
    long bin = 0;  
  
    while(num)  
    {  
        rem = num % 10;  
        dec = dec + rem * pangkat(8, place);  
        num = num / 10;  
        place++;  
    }  
  
    place = 1;  
    rem   = 0;  
    while(dec)  
    {  
        rem   = dec % 2;  
        bin   = bin + (rem * place);  
        dec   = dec / 2;  
        place = place * 10;  
    }  
  
    return bin;  
}
long long int octalkedecimal(long long int octal) {
    int decimal = 0;
	int i = 0;
	
	while(octal > 0) {
		
		int digit = octal % 10;
		decimal += digit * pangkat(8, i);
		octal = octal / 10;
		i++;
	}
    return decimal;
}
long long int octalkehexa(long long int octal) {
    int octaltobinary[]={0,1,10,11,100,101,110,111};  
    char hexadecimal[10];  
    char hex[10];  
    long int binary=0;  
    int rem=0;  
    int position=1;  
    int len=0;  
    int k=0;
    while(octal!=0) {  
        rem=octal%10;  
        binary=octaltobinary[rem]*position+binary;  
        octal=octal/10;  
        position=position*1000;  
    }   
  // Converting binary number into a hexadecimal number.  
     
    while(binary > 0) {  
        rem = binary % 10000;  
        switch(rem)  
        {  
            case 0:  
                strcat(hexadecimal, "0");  
                break;  
            case 1:  
                strcat(hexadecimal, "1");  
                break;  
            case 10:  
                strcat(hexadecimal, "2");  
                break;  
            case 11:  
                strcat(hexadecimal, "3");  
                break;  
            case 100:  
                strcat(hexadecimal, "4");  
                break;  
            case 101:  
                strcat(hexadecimal, "5");  
                break;  
            case 110:  
                strcat(hexadecimal, "6");  
                break;  
            case 111:  
                strcat(hexadecimal, "7");  
                break;  
            case 1000:  
                strcat(hexadecimal, "8");  
                break;  
            case 1001:  
                strcat(hexadecimal, "9");  
                break;  
            case 1010:  
                strcat(hexadecimal, "A");  
                break;  
            case 1011:  
                strcat(hexadecimal, "B");  
                break;  
            case 1100:  
                strcat(hexadecimal, "C");  
                break;  
            case 1101:  
                strcat(hexadecimal, "D");  
                break;  
            case 1110:  
                strcat(hexadecimal, "E");  
                break;  
            case 1111:  
                strcat(hexadecimal, "F");  
            break;  
        }  
        len=len+1;  
        binary /= 10000;  
    }  
    for(int i=len-1;i>=0;i--) {  
        hex[k]=hexadecimal[i];  
        k++;  
    }  
    hex[len]='\0'; 
    printf("|       Hexadecimal      |            "); 
    for(int i=0; hex[i]!='\0';i++) {  
        printf("%c",hex[i]);  
    } 
    return 0;
}

long long int hexakebiner(char* hex) {
    long long int bin, place;
    int i = 0, rem, val;
 
    bin = 0ll;
    place = 0ll;
 
    // Hexadecimal to binary conversion
    for (i = 0; hex[i] != '\0'; i++) {
        bin = bin * place;
 
        switch (hex[i]) {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
 
        place = 10000;
    }
 
    return bin;
}
long long int hexakedecimal(char* hexa) {
    int decimalNumber = 0;
    
    // Storing hexa number digits in one array
    char hexDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int i, j, power = 0, digit;
  
    // Converting hexadecimal number to equivalent decimal
    // number
    for (i = strlen(hexa) - 1; i >= 0; i--) {
  
        // search if given input character is present in the
        // array or not. if it present in the array then
        // find the equivalent decimal number for each hexa
        // digit
        for (j = 0; j < 16; j++) {
            if (hexa[i] == hexDigits[j]) {
                decimalNumber += j * pangkat(16, power);
            }
        }
        power++;
    }
    // printing the result
    return decimalNumber;
}
long long int hexakeoctal(char* hexa) {
    long long int octal, bin;
    bin = hexakebiner(hexa);
    octal = binerkeoctal(bin);
    return octal;
}


// Banner
void home_suhu() {
    printf("=====================================================\n");
    green();
    printf("         _______  __   __  __   __  __   __ \n");
    printf("        |       ||  | |  ||  | |  ||  | |  |\n");
    printf("        |  _____||  | |  ||  |_|  ||  | |  |\n");
    printf("        | |_____ |  |_|  ||       ||  |_|  |\n");
    printf("        |_____  ||       ||   _   ||       |\n");
    printf("         _____| ||       ||  | |  ||       |\n");
    printf("        |_______||_______||__| |__||_______|\n");
    reset();
    printf("=====================================================\n");
    cyan();
    printf("                     KODE SUHU                       \n");
    printf("| Celcius(C)| Reamur(R) | Fahrenheit(F) | Kelvin(K) |\n");
    reset();
    printf("=====================================================\n");
    red();
    printf("                    Baca saya\n");
    reset(); 
    printf("Untuk input bisa gunakan format sebagai berikut!\n");
    printf("           Nilai Suhu(KODE SUHU), contohnya\n");
    printf("           | 60C | 45R | 100F | 78K |\n");
    printf("Masukan tanpa spasi dan dengan kapital dalam kode suhu\n");
    printf("=====================================================\n");
}
void home_berat() {
    printf("================================================================\n");
    green();
    printf("          _______  _______  ______    _______  _______ \n");
    printf("         |  _    ||       ||    _ |  |   _   ||       |\n");
    printf("         | |_|   ||    ___||   | ||  |  |_|  ||_     _|\n");
    printf("         |       ||   |___ |   |_||_ |       |  |   |  \n");
    printf("         |  _   | |    ___||    __  ||       |  |   |  \n");
    printf("         | |_|   ||   |___ |   |  | ||   _   |  |   |  \n");
    printf("         |_______||_______||___|  |_||__| |__|  |___|  \n");
    reset();
    printf("================================================================\n");
    cyan();
    printf("                           KODE BERAT                           \n");
    printf("     |  Kilograms(K)   |     Grams(G)    |  Miligrams(M)  |     \n");
    printf("     |  Hektograms(H)  |   Desigrams(D)  |     Tons(T)    |     \n");
    printf("     |  Dekagrams(A)   |   Centigrams(C) |   Kwintal(W)   |     \n");
    reset();
    printf("================================================================\n");
    red();
    printf("                            Baca saya\n");
    reset(); 
    printf("        Untuk input bisa gunakan format sebagai berikut!\n");
    printf("                   Nilai Berat(KODE BERAT), contohnya\n");
    printf("                     | 60K | 45W | 100T | 78G |\n");
    printf("        Masukan tanpa spasi dan dengan kapital dalam kode berat\n");
    printf("================================================================\n");
}
void home_jarak() {
    printf("================================================================\n");
    green();
    printf("             ___  _______  ______    _______  ___   _ \n");
    printf("            |   ||   _   ||    _ |  |   _   ||   | | |\n");
    printf("            |   ||  |_|  ||   | ||  |  |_|  ||   |_| |\n");
    printf("            |   ||       ||   |_||_ |       ||      _|\n");
    printf("         ___|   ||       ||    __  ||       ||     |_ \n");
    printf("        |       ||   _   ||   |  | ||   _   ||    _  |\n");
    printf("        |_______||__| |__||___|  |_||__| |__||___| |_|\n");
    reset();
    printf("================================================================\n");
    cyan();
    printf("                           KODE JARAK                            \n");
    printf("     |  Kilometers(K)   |     Meters(M)    |   Milimeters(L)  |  \n");
    printf("     |  Hektometers(H)  |   Desimeters(D)  | ---------------- |   \n");
    printf("     |  Dekameters(A)   |   Centimeters(C) |                     \n");
    reset();
    printf("================================================================\n");
    red();
    printf("                            Baca saya\n");
    reset(); 
    printf("        Untuk input bisa gunakan format sebagai berikut!\n");
    printf("                   Nilai Berat(KODE JARAK), contohnya\n");
    printf("                     | 60K | 45H | 100L | 2C |\n");
    printf("        Masukan tanpa spasi dan dengan kapital dalam kode jarak\n");
    printf("================================================================\n");
}
void home_waktu() {
    printf("=============================================\n");
    green();
    printf(" _     _  _______  ___   _  _______  __   __ \n");
    printf("| | _ | ||   _   ||   | | ||       ||  | |  |\n");
    printf("| || || ||  |_|  ||   |_| ||_     _||  | |  |\n");
    printf("|       ||       ||      _|  |   |  |  |_|  |\n");
    printf("|       ||       ||     |_   |   |  |       |\n");
    printf("|   _   ||   _   ||    _  |  |   |  |       |\n");
    printf("|__| |__||__| |__||___| |_|  |___|  |_______|\n");
    reset();
    printf("=============================================\n");
    cyan();
    printf("                 KODE WAKTU                  \n");
    printf("| Milidetik(I) |   Hari(H)  |   Lustrum(L)  |\n");
    printf("|   Detik(D)   |  Minggu(G) |    Windu(W)   |\n");
    printf("|   Menit(M)   |  Bulan(B)  |   Dekade(K)   |\n");
    printf("|    Jam(J)    |  Tahun(T)  |    Abad(A)    |\n");
    reset();
    printf("=============================================\n");
    red();
    printf("                    Baca saya\n");
    reset(); 
    printf("Untuk input bisa gunakan format sebagai berikut!\n");
    printf("           Nilai Waktu(KODE WAKTU), contohnya\n");
    printf("           | 60A | 45D | 100M | 78H |\n");
    printf("Masukan tanpa spasi dan dengan kapital dalam kode waktu\n");
    printf("      Converter ini mengabaikan sistem kabisat!\n");
    printf("=============================================\n");
}
void home_programmer() {
    printf("=============================================================================================\n");
    green();
    printf(" _______  ______    _______  _______  ______    _______  __   __  __   __  _______  ______   \n");
    printf("|       ||    _ |  |       ||       ||    _ |  |   _   ||  |_|  ||  |_|  ||       ||    _ |  \n");
    printf("|    _  ||   | ||  |   _   ||    ___||   | ||  |  |_|  ||       ||       ||    ___||   | ||  \n");
    printf("|   |_| ||   |_||_ |  | |  ||   | __ |   |_||_ |       ||       ||       ||   |___ |   |_||_ \n");
    printf("|    ___||    __  ||  |_|  ||   ||  ||    __  ||       ||       ||       ||    ___||    __  |\n");
    printf("|   |    |   |  | ||       ||   |_| ||   |  | ||   _   || ||_|| || ||_|| ||   |___ |   |  | |\n");
    printf("|___|    |___|  |_||_______||_______||___|  |_||__| |__||_|   |_||_|   |_||_______||___|  |_|\n");
    reset();
    printf("=============================================================================================\n");
    cyan();
    printf("                | Binery(B)| Decimal(D) | Octal(O) | Hexadecimal(H) |\n");
    reset();
    printf("=============================================================================================\n");
    red();
    printf("                                    Baca saya\n");
    reset();
    white(); 
    printf("                Untuk input bisa gunakan format sebagai berikut!\n");
    printf("                     Nilai Bilangan(KODE BILANGAN), contohnya\n");
    printf("                        | 1010011B | 45D | 99O | 1H |\n");
    reset();
    red();
    printf("Untuk hexadecimal silahkan masukan dulu seperti contoh kode bilangan, jangan yang lain ya\n");
    printf("             Masukan tanpa spasi dan dengan kapital dalam kode bilangan\n");
    reset();
    printf("=============================================================================================\n");
}
void converter() {
    printf("==================================================================================\n");
    green();
    printf(" _______  _______  __    _  __   __  _______  ______  _______  _______  ______   \n");   
    printf("|       ||       ||  |  | ||  | |  ||       ||    _ ||       ||       ||    _ |  \n");   
    printf("|       ||   _   ||   |_| ||  |_|  ||    ___||   | |||_     _||    ___||   | ||  \n");   
    printf("|     __||  | |  ||       ||       ||   |___ |   |_||_ |   |  |   |___ |   |_||_ \n");    
    printf("|    |   |  |_|  ||  _    ||       ||    ___||    __  ||   |  |    ___||    __  |\n");   
    printf("|    |__ |       || | |   | |     | |   |___ |   |  | ||   |  |   |___ |   |  | |\n");   
    printf("|_______||_______||_|  |__|  |___|  |_______||___|  |_||___|  |_______||___|  |_|\n"); 
    reset();
    printf("===================================================================================\n");
    cyan();
    printf("Cara Pakai: Masukin angka sesuai daftar untuk mengoperasikan sesuai operasinya!\n");
    reset();
    printf("===================================================================================\n");
    white();
    printf("1.Suhu\n");
    printf("2.Berat\n");
    printf("3.Jarak\n");
    printf("4.Waktu\n");
    printf("5.Programmer\n");
    reset();
    red();
    printf("99.Kembali\n");
    reset();
    printf("====================================================================================\n");
}
// ========================================================================================================================================
//                                                      BANGUN DATAR

// Modul Rumus Bangun Datar
double keliling_persegi (double a) { // Perhitungan Keliling Persegi
    a *= 4;
    return a;
}
double luas_persegi (double a) { // Perhitungan Luas Persegi
    a *= a;
    return a;
}

double keliling_persegi_panjang (double a, double b) { // Perhitungan Keliling Persegi Panjang
    return (a + b) * 2;
}
double luas_persegi_panjang (double a, double b) { // Perhitungan Luas Persegi Panjang
    return a * b;
}

double  keliling_segitiga (double a, double b, double c) { // Perhitungan Keliling Segitiga
    return a + b + c;
}
double luas_segitiga (double a, double b) { // Perhitungan Luas Segitiga
    return a * b * 0.5;
}

double keliling_jajar_genjang (double a, double b) { // Perhitungan Keliling Jajar Genjang
    return (a + b) * 2;
}
double luas_jajar_genjang (double a, double b) { // Perhitungan Luas Jajar Genjang
    return a * b;
}

double keliling_trapesium (double a, double b, double c,double d) { // Perhitungan Keliling Trapesium
    return a + b + c + d;
}
double luas_trapesium (double a, double b, double c) { // Perhitungan Luas Trapesium 
    return (a + b) * c * 0.5;
}

double keliling_layang (double a, double b) { // Perhitungan Keliling Layang-layang
    return (a + b) * 2;
}
double luas_layang (double a, double b) { // Perhitungan Luas Layang-layang
    return a * b * 0.5;
}

double keliling_belah_ketupat (double a) { // Perhitungan Keliling Belah Ketupat
    a *= 4;
    return a;
}
double luas_belah_ketupat (double a, double b) { // Perhitungan Luas Belah Ketupat
    return a * b * 0.5;
}

double keliling_lingkaran (double a) { // Perhitungan Keliling Lingkaran
    return 2 * phi * a;
}
double luas_lingkaran (double a) { // Perhitungan Luas Lingkaran
    return phi * a * a;
}

// Banner
void home_persegi() {
    printf("============================================================\n");
    green();
    printf(" _______  _______  ______    _______  _______  _______  ___ \n"); 
    printf("|       ||       ||    _ |  |       ||       ||       ||   |\n"); 
    printf("|    _  ||    ___||   | ||  |  _____||    ___||    ___||   |\n"); 
    printf("|   |_| ||   |___ |   |_||_ | |_____ |   |___ |   | __ |   |\n"); 
    printf("|    ___||    ___||    __  ||_____  ||    ___||   ||  ||   |\n"); 
    printf("|   |    |   |___ |   |  | | _____| ||   |___ |   |_| ||   |\n"); 
    printf("|___|    |_______||___|  |_||_______||_______||_______||___|\n");
    reset();
    printf("============================================================\n");
    red();
    printf("                       Baca Saya!\n");
    printf("     Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf(" Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("============================================================\n");
} 
void home_persegi_panjang() {
    printf("===============================================================================================================================\n");
    green();
    printf(" _______  _______  ______    _______  _______  _______  ___      _______  _______  __    _      ___  _______  __    _  _______ \n");
    printf("|       ||       ||    _ |  |       ||       ||       ||   |    |       ||   _   ||  |  | |    |   ||   _   ||  |  | ||       |\n");
    printf("|    _  ||    ___||   | ||  |  _____||    ___||    ___||   |    |    _  ||  |_|  ||   |_| |    |   ||  |_|  ||   |_| ||    ___|\n");
    printf("|   |_| ||   |___ |   |_||_ | |_____ |   |___ |   | __ |   |    |   |_| ||       ||       |    |   ||       ||       ||   | __ \n");
    printf("|    ___||    ___||    __  ||_____  ||    ___||   ||  ||   |    |    ___||       ||  _    | ___|   ||       ||  _    ||   ||  |\n");
    printf("|   |    |   |___ |   |  | | _____| ||   |___ |   |_| ||   |    |   |    |   _   || | |   ||       ||   _   || | |   ||   |_| |\n");
    printf("|___|    |_______||___|  |_||_______||_______||_______||___|    |___|    |__| |__||_|  |__||_______||__| |__||_|  |__||_______|\n");
    reset();
    printf("===============================================================================================================================\n");
    red();
    printf("                                                         Baca Saya!\n");
    printf("                                    Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf("                                  Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("===============================================================================================================================\n");
}
void home_segitiga() {
    printf("================================================================\n");
    green();
    printf(" _______  _______  _______  ___  _______  ___  _______  _______ \n");
    printf("|       ||       ||       ||   ||       ||   ||       ||   _   |\n");
    printf("|  _____||    ___||    ___||   ||_     _||   ||    ___||  |_|  |\n");
    printf("| |_____ |   |___ |   | __ |   |  |   |  |   ||   | __ |       |\n");
    printf("|_____  ||    ___||   ||  ||   |  |   |  |   ||   ||  ||       |\n");
    printf(" _____| ||   |___ |   |_| ||   |  |   |  |   ||   |_| ||   _   |\n");
    printf("|_______||_______||_______||___|  |___|  |___||_______||__| |__|\n");
    reset();
    printf("================================================================\n");
    red();
    printf("                         Baca Saya!\n");
    printf("     Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf(" Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("================================================================\n");
}
void home_jajar_genjang() {
    printf("=================================================================================================================\n");
    green();
    printf("     ___  _______      ___  _______  ______        _______  _______  __    _      ___  _______  __    _  _______ \n");
    printf("    |   ||   _   |    |   ||   _   ||    _ |      |       ||       ||  |  | |    |   ||   _   ||  |  | ||       |\n");
    printf("    |   ||  |_|  |    |   ||  |_|  ||   | ||      |    ___||    ___||   |_| |    |   ||  |_|  ||   |_| ||    ___|\n");
    printf("    |   ||       |    |   ||       ||   |_||_     |   | __ |   |___ |       |    |   ||       ||       ||   | __ \n");
    printf(" ___|   ||       | ___|   ||       ||    __  |    |   ||  ||    ___||  _    | ___|   ||       ||  _    ||   ||  |\n");
    printf("|       ||   _   ||       ||   _   ||   |  | |    |   |_| ||   |___ | | |   ||       ||   _   || | |   ||   |_| |\n");
    printf("|_______||__| |__||_______||__| |__||___|  |_|    |_______||_______||_|  |__||_______||__| |__||_|  |__||_______|\n");
    reset();
    printf("=================================================================================================================\n");
    red();
    printf("                                                  Baca Saya!\n");
    printf("                            Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf("                        Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("=================================================================================================================\n");
} 
 void home_trapesium() {
    printf("==================================================================================\n");
    green();
    printf(" _______  ______    _______  _______  _______  _______  ___  __   __  __   __ \n");
    printf("|       ||    _ |  |   _   ||       ||       ||       ||   ||  | |  ||  |_|  |\n");
    printf("|_     _||   | ||  |  |_|  ||    _  ||    ___||  _____||   ||  | |  ||       |\n");
    printf("  |   |  |   |_||_ |       ||   |_| ||   |___ | |_____ |   ||  |_|  ||       |\n");
    printf("  |   |  |    __  ||       ||    ___||    ___||_____  ||   ||       ||       |\n");
    printf("  |   |  |   |  | ||   _   ||   |    |   |___  _____| ||   ||       || ||_|| |\n");
    printf("  |___|  |___|  |_||__| |__||___|    |_______||_______||___||_______||_|   |_|\n");
    reset();
    printf("==============================================================================\n");
    red();
    printf("                                Baca Saya!\n");
    printf("            Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf("          Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("==============================================================================\n");
 }
void home_layang() {
    printf("==================================================================================================================\n");
    green();
    printf(" ___      _______  __   __  _______  __    _  _______         ___      _______  __   __  _______  __    _  _______ \n");
    printf("|   |    |   _   ||  | |  ||   _   ||  |  | ||       |       |   |    |   _   ||  | |  ||   _   ||  |  | ||       |\n");
    printf("|   |    |  |_|  ||  |_|  ||  |_|  ||   |_| ||    ___| ____  |   |    |  |_|  ||  |_|  ||  |_|  ||   |_| ||    ___|\n");
    printf("|   |    |       ||       ||       ||       ||   | __ |____| |   |    |       ||       ||       ||       ||   | __ \n");
    printf("|   |___ |       ||_     _||       ||  _    ||   ||  |       |   |___ |       ||_     _||       ||  _    ||   ||  |\n");
    printf("|       ||   _   |  |   |  |   _   || | |   ||   |_| |       |       ||   _   |  |   |  |   _   || | |   ||   |_| |\n");
    printf("|_______||__| |__|  |___|  |__| |__||_|  |__||_______|       |_______||__| |__|  |___|  |__| |__||_|  |__||_______|\n");
    reset();
    printf("==================================================================================================================\n");
    red();
    printf("                                                   Baca Saya!\n");
    printf("                              Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf("                            Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("==================================================================================================================\n");
}
void home_belah_ketupat() {
    printf("===============================================================================================================\n");
    green();
    printf(" _______  _______  ___      _______  __   __     ___   _  _______  _______  __   __  _______  _______  _______ \n");
    printf("|  _    ||       ||   |    |   _   ||  | |  |   |   | | ||       ||       ||  | |  ||       ||   _   ||       |\n");
    printf("| |_|   ||    ___||   |    |  |_|  ||  |_|  |   |   |_| ||    ___||_     _||  | |  ||    _  ||  |_|  ||_     _|\n");
    printf("|       ||   |___ |   |    |       ||       |   |      _||   |___   |   |  |  |_|  ||   |_| ||       |  |   |  \n");
    printf("|  _   | |    ___||   |___ |       ||       |   |     |_ |    ___|  |   |  |       ||    ___||       |  |   |  \n");
    printf("| |_|   ||   |___ |       ||   _   ||   _   |   |    _  ||   |___   |   |  |       ||   |    |   _   |  |   |  \n");
    printf("|_______||_______||_______||__| |__||__| |__|   |___| |_||_______|  |___|  |_______||___|    |__| |__|  |___|  \n");
    reset();
    printf("===============================================================================================================\n");
    red();
    printf("                                                  Baca Saya!\n");
    printf("                            Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf("                          Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("===============================================================================================================\n");
}
void home_lingkaran() {
    printf("==============================================================================\n");
    green();
    printf(" ___      ___  __    _  _______  ___   _  _______  ______    _______  __    _ \n");
    printf("|   |    |   ||  |  | ||       ||   | | ||   _   ||    _ |  |   _   ||  |  | |\n");
    printf("|   |    |   ||   |_| ||    ___||   |_| ||  |_|  ||   | ||  |  |_|  ||   |_| |\n");
    printf("|   |    |   ||       ||   | __ |      _||       ||   |_||_ |       ||       |\n");
    printf("|   |___ |   ||  _    ||   ||  ||     |_ |       ||    __  ||       ||  _    |\n");
    printf("|       ||   || | |   ||   |_| ||    _  ||   _   ||   |  | ||   _   || | |   |\n");
    printf("|_______||___||_|  |__||_______||___| |_||__| |__||___|  |_||__| |__||_|  |__|\n");
    reset();
    printf("==============================================================================\n");
    red();
    printf("                                Baca Saya!\n");
    printf("            Karena hasil yang ditampilkan dalam satuan centimeter\n");
    printf("          Jadi usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("==============================================================================\n"); 
} 
void bangun_datar() {
    printf("========================================================================================================\n");
    green();
    printf(" _______  _______  __    _  _______  __   __  __    _      ______   _______  _______  _______  ______   \n");
    printf("|  _    ||   _   ||  |  | ||       ||  | |  ||  |  | |    |      | |   _   ||       ||   _   ||    _ |  \n");
    printf("| |_|   ||  |_|  ||   |_| ||    ___||  | |  ||   |_| |    |  _    ||  |_|  ||_     _||  |_|  ||   | ||  \n");
    printf("|       ||       ||       ||   | __ |  | |  ||       |    | | |   ||       |  |   |  |       ||   |_||_ \n");
    printf("|  _   | |   _   ||  _    ||   ||  ||  |_|  ||  _    |    | |_|   ||   _   |  |   |  |   _   ||    __  |\n");
    printf("| |_|   ||  | |  || | |   ||   |_| ||       || | |   |    |       ||  | |  |  |   |  |  | |  ||   |  | |\n");
    printf("|_______||__| |__||_|  |__||_______||_______||_|  |__|    |______| |__| |__|  |___|  |__| |__||___|  |_|\n");
    reset();
    printf("========================================================================================================\n");
    cyan();
    printf("            Cara Pakai: Masukin angka sesuai daftar untuk mengoperasikan sesuai operasinya!\n");
    reset();
    printf("========================================================================================================\n");
    white();
    printf("1.Persegi\n");
    printf("2.Persegi Panjang\n");
    printf("3.Segitiga\n");
    printf("4.Jajar Genjang\n");
    printf("5.Trapesium\n");
    printf("6.Layang-layang\n");
    printf("7.Belah Ketupat\n");
    printf("8.Lingkaran\n");
    reset();
    red();
    printf("99.Kembali\n");
    reset();
    printf("========================================================================================================\n");

}
// ========================================================================================================================================
//                                                      BANGUN RUANG

// Modul Rumus Bangun Ruang 
double volume_kubus (double a) { // Perhitungan Volume Kubus
    return a * a * a;
}
double keliling_kubus (double a) { // Perhitungan Keliling Kubus
    return 12 * a;
}
double luas_permukaan_kubus (double a) { // Perhitungan Luas Permukaan Kubus
    return 6 * a * a;
}

double volume_balok (double a, double b, double c) { // Perhitungan Volume Balok
    return a * b * c;
}
double keliling_balok (double a, double b, double c) { // Perhitungan Keliling Balok
    return 4 * (a + b + c);
}
double luas_permukaan_balok (double a, double b, double c) { // Perhitungan Luas Permukaan Balok
    return 2 * ((a * b) + (b * c) + (a * c)) ;
}

double volume_tabung (double a, double b) { // Perhitungan Volume Tabung
    return phi * a * a * b;
}
double keliling_alas_tabung (double a) { // Perhitungan Keliling Alas Tabung
    return 2 * phi * a;
}
double luas_alas_tabung (double a) { // Perhitungan Luas Alas Tabung
    return phi * a * a;
}
double luas_selimut_tabung (double a, double b) { // Perhitungan Luas Permukaan Tabung
    return 2 * phi * a * b;
}
double luas_permukaan_tabung (double a, double b) { // Perhitungan Luas Selimut Tabung
    return (2 * a) + b;
}

double volume_kerucut (double a, double b) { // Perhitungan Volume Kerucut
    return phi * a * a * b / 3;
}
double keliling_alas_kerucut (double a) { // Perhitungan Keliling Alas Kerucut
    return 2 * phi * a;
}
double luas_alas_kerucut (double a) { // Perhitungan Luas Alas Kerucut
    return phi * a * a;
}
double luas_selimut_kerucut (double a, double b) { // Perhitungan Luas Permukaan Kerucut
    return phi * a * b;
}
double luas_permukaan_kerucut (double a, double b) { // Perhitungan Luas Selimut Kerucut
    return phi * a * (a + b);
}

double volume_limas_empat (double a, double b) { // Perhitungan Volume Limas Segiempat
    return  (a * a) * b / 3;
}
double keliling_alas_limas_empat (double a) { // Perhitungan Keliling Alas Limas Segiempat
    return 4 * a;
}
double luas_alas_limas_empat (double a) { // Perhitungan Luas Alas Limas Segiempat
    return a * a;
}
double luas_sisitegak_limas_empat (double a, double b) { // Perhitungan Luas Sisi Tegak Limas Segiempat
    return a * b / 2;
}
double luas_permukaan_limas_empat (double a, double b) { // Perhitungan Luas Permukaan Limas Segiempat
    return a + (4 * b);
}

double volume_bola (double a) { // Perhitungan Volume Bola
    return 4 * phi * a * a * a / 3;
}
double luas_permukaan_bola (double a) { // Perhitungan Luas Selimut Bola
    return 4 * phi * a * a;
}

double  keliling_prisma (double a, double b, double c) { // Perhitungan Keliling Prisma Segitiga
    return a + b + c;
}
double luas_prisma (double a, double b) { // Perhitungan Luas Alas Prisma Segitiga
    return a * b * 0.5;
}
double volume_prisma (double a, double b) { // Perhitungan Volume Prisma Segitiga
    return a * b;
}
double luas_selimut_prisma (double a, double b) { // Perhitungan Luas Selimut Prisma Segitiga
    return a * b;
}
double luas_permukaan_prisma (double a, double b, double c) { // Perhitungan Luas Selimut Prisma Segitiga
    return (2 * a) + (b * c);
}

// Banner
void home_kubus() {
    printf("=============================================\n");
    green();
    printf(" ___   _  __   __  _______  __   __  _______ \n");
    printf("|   | | ||  | |  ||  _    ||  | |  ||       |\n");
    printf("|   |_| ||  | |  || |_|   ||  | |  ||  _____|\n");
    printf("|      _||  |_|  ||       ||  |_|  || |_____ \n");
    printf("|     |_ |       ||  _   | |       ||_____  |\n");
    printf("|    _  ||       || |_|   ||       | _____| |\n");
    printf("|___| |_||_______||_______||_______||_______|\n");
    reset();
    printf("=============================================\n");
    red();
    printf("                Baca Saya!\n");
    printf("Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("=============================================\n");
}
void home_balok() {
    printf("=============================================\n");
    green();
    printf(" _______  _______  ___      _______  ___   _ \n");
    printf("|  _    ||   _   ||   |    |       ||   | | |\n");
    printf("| |_|   ||  |_|  ||   |    |   _   ||   |_| |\n");
    printf("|       ||       ||   |    |  | |  ||      _|\n");
    printf("|  _   | |       ||   |___ |  |_|  ||     |_ \n");
    printf("| |_|   ||   _   ||       ||       ||    _  |\n");
    printf("|_______||__| |__||_______||_______||___| |_|\n");
    reset();
    printf("=============================================\n");
    red();
    printf("                Baca Saya!\n");
    printf("Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("=============================================\n");
}
void home_tabung() {
    printf("======================================================\n");
    green();
    printf(" _______  _______  _______  __   __  __    _  _______ \n");
    printf("|       ||   _   ||  _    ||  | |  ||  |  | ||       |\n");
    printf("|_     _||  |_|  || |_|   ||  | |  ||   |_| ||    ___|\n");
    printf("  |   |  |       ||       ||  |_|  ||       ||   | __ \n");
    printf("  |   |  |       ||  _   | |       ||  _    ||   ||  |\n");
    printf("  |   |  |   _   || |_|   ||       || | |   ||   |_| |\n");
    printf("  |___|  |__| |__||_______||_______||_|  |__||_______|\n");
    reset();
    printf("======================================================\n");
    red();
    printf("                  Baca Saya!\n");
    printf("  Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("======================================================\n");
}
void home_kerucut() {
    printf("================================================================\n");
    green();
    printf(" ___   _  _______  ______    __   __  _______  __   __  _______ \n");
    printf("|   | | ||       ||    _ |  |  | |  ||       ||  | |  ||       |\n");
    printf("|   |_| ||    ___||   | ||  |  | |  ||       ||  | |  ||_     _|\n");
    printf("|      _||   |___ |   |_||_ |  |_|  ||       ||  |_|  |  |   |  \n");
    printf("|     |_ |    ___||    __  ||       ||      _||       |  |   |  \n");
    printf("|    _  ||   |___ |   |  | ||       ||     |_ |       |  |   |  \n");
    printf("|___| |_||_______||___|  |_||_______||_______||_______|  |___|  \n");
    reset();
    printf("================================================================\n");
    red();
    printf("                            Baca Saya!\n");
    printf("      Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("================================================================\n");
}
void home_limas_segiempat() {
    printf("==========================================================================================================================\n");
    green();
    printf(" ___      ___  __   __  _______  _______      _______  _______  _______  ___  _______  __   __  _______  _______  _______ \n");
    printf("|   |    |   ||  |_|  ||   _   ||       |    |       ||       ||       ||   ||       ||  |_|  ||       ||   _   ||       |\n");
    printf("|   |    |   ||       ||  |_|  ||  _____|    |  _____||    ___||    ___||   ||    ___||       ||    _  ||  |_|  ||_     _|\n");
    printf("|   |    |   ||       ||       || |_____     | |_____ |   |___ |   | __ |   ||   |___ |       ||   |_| ||       |  |   |  \n");
    printf("|   |___ |   ||       ||       ||_____  |    |_____  ||    ___||   ||  ||   ||    ___||       ||    ___||       |  |   |  \n");
    printf("|       ||   || ||_|| ||   _   | _____| |     _____| ||   |___ |   |_| ||   ||   |___ | ||_|| ||   |    |   _   |  |   |  \n");
    printf("|_______||___||_|   |_||__| |__||_______|    |_______||_______||_______||___||_______||_|   |_||___|    |__| |__|  |___|  \n");
    reset();
    printf("==========================================================================================================================\n");
    red();
    printf("                                                        Baca Saya!\n");
    printf("                                  Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("==========================================================================================================================\n");
}
void home_bola() {
    printf("====================================\n");
    green();
    printf(" _______  _______  ___      _______ \n");
    printf("|  _    ||       ||   |    |   _   |\n");
    printf("| |_|   ||   _   ||   |    |  |_|  |\n");
    printf("|       ||  | |  ||   |    |       |\n");
    printf("|  _   | |  |_|  ||   |___ |       |\n");
    printf("| |_|   ||       ||       ||   _   |\n");
    printf("|_______||_______||_______||__| |__|\n");
    reset();
    printf("====================================\n");
    red();
    printf("                Baca Saya!\n");
    printf("Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("====================================\n");
}
void home_prisma() { 
    printf("===================================================\n");
    green();
    printf(" _______  ______    ___  _______  __   __  _______ \n");
    printf("|       ||    _ |  |   ||       ||  |_|  ||   _   |\n");
    printf("|    _  ||   | ||  |   ||  _____||       ||  |_|  |\n");
    printf("|   |_| ||   |_||_ |   || |_____ |       ||       |\n");
    printf("|    ___||    __  ||   ||_____  ||       ||       |\n");
    printf("|   |    |   |  | ||   | _____| || ||_|| ||   _   |\n");
    printf("|___|    |___|  |_||___||_______||_|   |_||__| |__|\n");
    reset();
    printf("===================================================\n");
    red();
    printf("                  Baca Saya!\n");
    printf("Usahakan masukan nilai yang sudah dalam centimeter yah!\n");
    reset();
    printf("===================================================\n");
}
void bangun_ruang() {
    printf("========================================================================================================\n");
    green();
    printf(" _______  _______  __    _  _______  __   __  __    _      ______    __   __  _______  __    _  _______ \n");
    printf("|  _    ||   _   ||  |  | ||       ||  | |  ||  |  | |    |    _ |  |  | |  ||   _   ||  |  | ||       |\n");
    printf("| |_|   ||  |_|  ||   |_| ||    ___||  | |  ||   |_| |    |   | ||  |  | |  ||  |_|  ||   |_| ||    ___|\n");
    printf("|       ||       ||       ||   | __ |  | |  ||       |    |   |_||_ |  | |  ||       ||       ||   | __ \n");
    printf("|  _   | |   _   ||  _    ||   ||  ||  |_|  ||  _    |    |    __  ||  |_|  ||   _   ||  _    ||   ||  |\n");
    printf("| |_|   ||  | |  || | |   ||   |_| ||       || | |   |    |   |  | ||       ||  | |  || | |   ||   |_| |\n");
    printf("|_______||__| |__||_|  |__||_______||_______||_|  |__|    |___|  |_||_______||__| |__||_|  |__||_______|\n");
    reset();
    printf("========================================================================================================\n");
    cyan();
    printf("		Cara Pakai: Masukin angka sesuai daftar untuk mengoperasikan sesuai operasinya!\n");
    reset();
    printf("========================================================================================================\n");
    white();
    printf("1.Kubus\n");
    printf("2.Balok\n");
    printf("3.Tabung\n");
    printf("4.Kerucut\n");
    printf("5.Limas Segiempat\n");
    printf("6.Bola\n");
    printf("7.Prisma\n");
    reset();
    red();
    printf("99.Kembali\n");
    reset();
    printf("========================================================================================================\n");
}
// ========================================================================================================================================
//                                                      GERBANG
void selamat_datang() {
    printf("==========================================================================================================================\n");
    green();
    printf(" _______  _______  ___      _______  __   __  _______  _______       ______   _______  _______  _______  __    _  _______ \n");
    printf("|       ||       ||   |    |   _   ||  |_|  ||   _   ||       |     |      | |   _   ||       ||   _   ||  |  | ||       |\n");
    printf("|  _____||    ___||   |    |  |_|  ||       ||  |_|  ||_     _|     |  _    ||  |_|  ||_     _||  |_|  ||   |_| ||    ___|\n");
    printf("| |_____ |   |___ |   |    |       ||       ||       |  |   |       | | |   ||       |  |   |  |       ||       ||   | __ \n");
    printf("|_____  ||    ___||   |___ |   _   || ||_|| ||   _   |  |   |       | |_|   ||   _   |  |   |  |   _   ||  _    ||   ||  |\n");
    printf(" _____| ||   |___ |       ||  | |  || |   | ||  | |  |  |   |       |       ||  | |  |  |   |  |  | |  || | |   ||   |_| |\n");
    printf("|_______||_______||_______||__| |__||_|   |_||__| |__|  |___|       |______| |__| |__|  |___|  |__| |__||_|  |__||_______|\n");                                                                                 
    printf("                                                         ______   ___                                                     \n");
    printf("                                                        |      | |___|                                                    \n");
    printf("                                                        |  _    | ___                                                     \n");
    printf("                                                        | | |   ||   |                                                    \n");
    printf("                                                        | |_|   ||   |                                                    \n");
    printf("                                                        |       ||   |                                                    \n");
    printf("                                                        |______| |___|                                                    \n");
    printf("                     ___   _  _______  ___      ___   _  __   __  ___      _______  _______  _______  ______              \n");
    printf("                    |   | | ||   _   ||   |    |   | | ||  | |  ||   |    |   _   ||       ||       ||    _ |             \n");
    printf("                    |   |_| ||  |_|  ||   |    |   |_| ||  | |  ||   |    |  |_|  ||_     _||   _   ||   | ||             \n");
    printf("                    |      _||       ||   |    |      _||  | |  ||   |    |       |  |   |  |  | |  ||   |_||_            \n");
    printf("                    |     |_ |   _   ||   |___ |     |_ |  |_|  ||   |___ |   _   |  |   |  |  |_|  ||    __  |           \n");
    printf("                    |    _  ||  | |  ||       ||    _  ||       ||       ||  | |  |  |   |  |       ||   |  | |           \n");
    printf("                    |___| |_||__| |__||_______||___| |_||_______||_______||__| |__|  |___|  |_______||___|  |_|           \n");
    reset();
    printf("\t\t\t\t\t\tBERIKUT KEMAMPUAN YANG SAYA PUNYA                                                                              \n");
    printf("===========================================================================================================================\n");
    white();
    printf("1.Kalkulator Dasar                                                                                                         \n");
    printf("2.Statistika                                                                                                               \n");
    printf("3.Converter                                                                                                                \n");
    printf("4.Bangun Datar                                                                                                             \n");
    printf("5.Bangun Ruang                                                                                                             \n");
    printf("6.Extras                                                                                                                   \n");
    reset();
    red();
    printf("0.Tutup\n");
    reset();
    printf("===========================================================================================================================\n");
}
void tutup() {
    printf("=======================================================================================================\n");
    green();
    printf(" _______  _______  _______   ___  __   __  _______     ___   _  _______  _______  ___  __   __     __  \n");
    printf("|       ||       ||    _  | |___||  |_|  ||   _   |   |   | | ||   _   ||       ||___||  | |  |   |  | \n");
    printf("|_     _||    ___||   | | |  ___ |       ||  |_|  |   |   |_| ||  |_|  ||  _____| ___ |  |_|  |   |  | \n");
    printf("  |   |  |   |___ |   |_| |_|   ||       ||   _   |   |      _||   _   || |_____ |   ||       |   |  | \n");
    printf("  |   |  |    ___||    __  ||   || ||_|| ||  | |  |   |     |_ |  | |  ||_____  ||   ||   _   |   |__| \n");
    printf("  |   |  |   |___ |   |  | ||   || |   | ||  | |  |   |    _  ||  | |  | _____| ||   ||  | |  |    __  \n");
    printf("  |___|  |_______||___|  |_||___||_|   |_||__| |__|   |___| |_||__| |__||_______||___||__| |__|   |__| \n");
    reset();
    printf("=======================================================================================================\n"); 
    white();
    printf("                                                 CREDITS\n");
    printf("                       Jovan FIdello(00000067827) & Gerard Stefan Gani(00000068198)\n");
    reset();
    blue();
    printf("                                      UNIVERSITAS MULTIMEDIA NUSANTARA\n");
    reset();
    printf("=======================================================================================================\n");  
}
// ========================================================================================================================================

int main()
{   
    int operator;
    do {                                                                                                          
        selamat_datang();
        printf("Masukan angka sesuai daftar: ");scanf("%d", &operator);
        system("cls");
        switch(operator) {
                case 1: // KALKULATOR DASAR (DONE) 
                        {
                            int pemilihkd;
                            do {
                                kalkulator_dasar();
                                printf("Masukin disini ya: ");scanf("%d", &pemilihkd);
                                system("cls");
                                if (pemilihkd == 1) { // OPERASI KALKU
                                    int ulangkd;
                                    double bilangan1, bilangan2, hasilkd = 0;
                                    char operasi;
                                    do {
                                        home_operasi();
                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangan1);                                                                             
                                        printf("Masukan kode operasi: ");scanf(" %c", &operasi);
                                        switch(operasi) {
                                            case '+': // TAMBAH
                                                        {
                                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangan2);
                                                        hasilkd = penjumlahan(bilangan1, bilangan2);
                                                        break;
                                                        }
                                            case '-': // KURANG
                                                        {
                                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangan2);
                                                        hasilkd = pengurangan(bilangan1, bilangan2);
                                                        break;
                                                        }
                                            case '*': // KALI
                                                        {
                                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangan2);
                                                        hasilkd = perkalian(bilangan1, bilangan2);
                                                        break;
                                                        }
                                            case '/': // BAGI
                                                        {
                                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangan2);
                                                        hasilkd = pembagian(bilangan1, bilangan2);
                                                        break;
                                                        }

                                        }
                                        printf("===========================================================================================\n");
                                        printf("Hasil: ");
                                        cyan(); 
                                        printf("%g\n", hasilkd);
                                        reset();
                                        hasilkd = 0;
                                        printf("===========================================================================================\n");
                                        printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                        printf("Masukin disini: ");scanf("%d", &ulangkd);
                                        system("cls");
                                    } while (ulangkd != 0);
                                } else if (pemilihkd == 2) { // MODULUS
                                    int ulangkdmod;
                                    long long int bilangan1mod, bilangan2mod;
                                    do {
                                        home_modulus();
                                        printf("Masukan angka bilangan: ");scanf("%lld", &bilangan1mod);  
                                        printf("Masukan angka pembagi: ");scanf("%lld", &bilangan2mod);                                   
                                        printf("===============================================================\n");
                                        printf("Sisa Bagi: ");
                                        cyan(); 
                                        printf("%lld\n", modulus(bilangan1mod, bilangan2mod));
                                        reset();
                                        printf("===============================================================\n");
                                        printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                        printf("Masukin disini: ");scanf("%d", &ulangkdmod);
                                        system("cls");
                                    } while (ulangkdmod != 0);
                                } else if (pemilihkd == 3) { // PANGKAT
                                    int ulangkdpow;
                                    double bilangan1pow, bilangan2pow;
                                    do {
                                        home_pangkat();
                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangan1pow);  
                                        printf("Masukan bilangan pangkat: ");scanf("%lf", &bilangan2pow);                                   
                                        printf("===============================================================\n");
                                        printf("Hasil: ");
                                        cyan(); 
                                        printf("%g\n", pangkat(bilangan1pow, bilangan2pow));
                                        reset();
                                        printf("===============================================================\n");
                                        printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                        printf("Masukin disini: ");scanf("%d", &ulangkdpow);
                                        system("cls");
                                    } while (ulangkdpow != 0);
                                } else if (pemilihkd == 4) { // AKAR
                                    int ulangkdsqrt, akarsqrt;
                                    double bilangansqrt;
                                    do {
                                        home_akar();
                                        printf("Masukan angka bilangan: ");scanf("%lf", &bilangansqrt);    
                                        printf("Masukan bilangan akar ");
                                        purple();
                                        printf("2-4: ");
                                        reset();
                                        scanf("%d", &akarsqrt);                                
                                        printf("=====================================\n");
                                        switch(akarsqrt) {
                                            case 2: 
                                                    {
                                                        printf("Hasil: ");
                                                        cyan(); 
                                                        printf("%g\n", akar(bilangansqrt));
                                                        reset();
                                                        break;
                                                    }
                                            case 3: 
                                                    {
                                                        printf("Hasil: ");
                                                        cyan(); 
                                                        printf("%g\n", akarkubik(bilangansqrt));
                                                        reset();
                                                        break;
                                                    } 
                                            case 4: 
                                                    {
                                                        printf("Hasil: ");
                                                        cyan(); 
                                                        printf("%g\n", akar4(bilangansqrt));
                                                        reset();
                                                        break;
                                                    }        
                                        }
                                        printf("=====================================\n");
                                        printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                        printf("Masukin disini: ");scanf("%d", &ulangkdsqrt);
                                        system("cls");
                                    } while (ulangkdsqrt != 0);
                                } else if (pemilihkd == 5) { // PECAHAN
                                    int ulangkdpec;
                                    long long int bila, bilb, bilc, bild, frac, penyebut, pembilang;
                                    char oppec;
                                    do {
                                        home_pecahan();
                                        purple();
                                        printf("  A        C  \n");
                                        printf(" --- (op) --- \n");
                                        printf("  B        D  \n");
                                        reset();
                                        printf("Masukan angka bilangan A: ");scanf("%lld", &bila); 
                                        printf("Masukan angka bilangan B: ");scanf("%lld", &bilb);
                                        printf("Masukan kode operasi: ");scanf(" %c", &oppec);
                                        printf("Masukan angka bilangan C: ");scanf("%lld", &bilc);
                                        printf("Masukan angka bilangan D: ");scanf("%lld", &bild); 
                                        switch(oppec) {
                                            case '+': // TAMBAH
                                                        {
                                                        pembilang = (bila * bild) + (bilc * bilb);
                                                        penyebut = bilb * bild;
                                                        frac = pecahan(penyebut, pembilang);
                                                        break;
                                                        }
                                            case '-': // KURANG
                                                        {
                                                        pembilang = (bila * bild) - (bilc * bilb);
                                                        penyebut = bilb * bild;
                                                        frac = pecahan(penyebut, pembilang);
                                                        break;
                                                        }
                                            case '*': // KALI
                                                        {
                                                        pembilang = bila * bilc;
                                                        penyebut = bilb * bild;
                                                        frac = pecahan(penyebut, pembilang);
                                                        break;
                                                        }
                                            case '/': // BAGI
                                                        {
                                                        pembilang = bila * bild;
                                                        penyebut = bilb * bilc;
                                                        frac = pecahan(penyebut, pembilang);
                                                        break;
                                                        }

                                        }                    
                                        printf("===============================================================\n");
                                        printf("Hasil: \n");
                                        cyan(); 
                                        printf("%lld\n", pembilang/frac);
                                        printf("-------\n");
                                        printf("%lld\n", penyebut/frac);
                                        reset();
                                        printf("===============================================================\n");
                                        printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                        printf("Masukin disini: ");scanf("%d", &ulangkdpec);
                                        system("cls");
                                    } while (ulangkdpec != 0);
                                }
                            } while (pemilihkd != 99);
                            continue;
                            break; 
                        } 
                case 2: // STATISTIKA (DONE)
                        {
                            int pemilihst, pemilihstb;
                            do {
                            statistika();
                            printf("Masukin disini ya: ");scanf("%d", &pemilihst);
                            system("cls");
                            if (pemilihst == 1) { //KOMBINASI
                                int ulangkomb;
                                long long int nkomb, rkomb;
                                do {
                                home_kombinasi();
                                printf("Masukan nilai dari n: ");scanf("%lld", &nkomb);
                                printf("Masukan nilai dari r: ");scanf("%lld", &rkomb);
                                printf("=========================================================================\n");
                                printf("Jadi nCr (%lld,%lld)",  nkomb, rkomb);
                                printf(" total kombinasinya berjumlah ");
                                green();
                                printf("%lld\n",kombinasi(nkomb, rkomb));
                                reset();
                                printf("=========================================================================\n");
                                printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                printf("Masukin disini: ");scanf("%d", &ulangkomb);
                                system("cls");
                                } while (ulangkomb != 0);
                            } else if (pemilihst == 2) { // PERMUTASI
                                int ulangperm;
                                long long int nperm, rperm;
                                do {
                                home_permutasi();
                                printf("Masukan nilai dari n: ");scanf("%lld", &nperm);
                                printf("Masukan nilai dari r: ");scanf("%lld", &rperm);
                                printf("=========================================================================\n");
                                printf("Jadi nPr (%lld,%lld)",  nperm, rperm);
                                printf(" total permutasinya berjumlah ");
                                green();
                                printf("%lld\n",permutasi(nperm, rperm));
                                reset();
                                printf("================================================================================\n");
                                printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                printf("Masukin disini: ");scanf("%d", &ulangperm);
                                system("cls");
                                } while (ulangperm != 0);
                            } else if (pemilihst == 3) { // MODUS
                                int ulangmodus;
                                int imod, jmod;
                                long long int nmodus, nilaimodus, amod, bmod=0;
                                do {
                                home_modus();
                                printf("Masukan nilai dari panjang data: ");scanf("%lld", &nmodus);
                                long long int xmodus[nmodus];
                                printf("Masukan bilangannya disini: ");
                                for (imod=0;imod<nmodus;imod++) {
                                    scanf("%lld", &xmodus[imod]);
                                }
                                nilaimodus = xmodus[0];
                                for(imod=0;imod<nmodus;imod++){
                                    amod=0;
                                    for(jmod=0;jmod<nmodus;jmod++){
                                        if(xmodus[imod] == xmodus[jmod])
                                        amod++;
                                    }
                                    if(amod > bmod){
                                        nilaimodus = xmodus[imod];
                                        bmod=amod;
                                    } else if(amod == bmod){
                                        if(xmodus[imod]>nilaimodus){
                                        bmod=amod;
                                        nilaimodus=xmodus[imod];
                                        }
                                    }
                                }
                                printf("=========================================================================\n");
                                printf("Jadi modus dari data yang anda telah masukan adalah ");
                                green();
                                printf("%lld\n",nilaimodus);
                                reset();
                                printf("=========================================================================\n");
                                printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                printf("Masukin disini: ");scanf("%d", &ulangmodus);
                                system("cls");
                                } while (ulangmodus != 0);
                            } else if (pemilihst == 4) { // MEDIAN
                                int ulangmedian;
                                long long int nmedian, imedian, jmedian, tempmed;
                                double hasilmedian, nilaimedian;
                                do {
                                home_median();
                                printf("Masukan nilai dari panjang data: ");scanf("%lld", &nmedian);
                                long long int xmedian[nmedian];
                                printf("Masukan bilangannya disini: ");
                                for (imedian=0;imedian<nmedian;imedian++) {
                                    scanf("%lld", &xmedian[imedian]);
                                }
                                for (imedian=0;imedian<nmedian-1;imedian++){
                                    for (jmedian=imedian+1;jmedian<nmedian;jmedian++) {
                                        if (xmedian[imedian] > xmedian[jmedian]){
                                            tempmed = xmedian[imedian];
                                            xmedian[imedian] = xmedian[jmedian];
                                            xmedian[jmedian] = tempmed;
                                        }
                                    }
                                }
                                printf("=========================================================================\n");
                                printf("Data yang sudah diurutkan secara ascending: \n");
                                for (imedian=0;imedian<nmedian;imedian++) {
                                    printf("%lld ", xmedian[imedian]);
                                }
				printf("\n=========================================================================\n");
                                if (nmedian % 2 == 0) {
                                    nilaimedian = xmedian[(nmedian / 2) - 1] + xmedian[nmedian / 2];
                                    hasilmedian = nilaimedian / 2;
                                    printf("Data tengah yang didapat setelah diurutkan yaitu ");
                                    cyan();
                                    printf("%lld", xmedian[(nmedian / 2) - 1]);
                                    reset();
                                    printf(" dan ");
                                    cyan();
                                    printf("%lld", xmedian[nmedian / 2]);
                                    reset();
                                    printf("\nSehingga nilai mediannya  ");
                                    cyan();
                                    printf("(%lld + %lld) / 2", xmedian[(nmedian / 2) - 1] , xmedian[nmedian / 2]);
                                    reset();
                                } else {
                                    hasilmedian = xmedian[nmedian / 2];
                                    printf("\nData tengah yang didapat setelah diurutkan yaitu ");
                                    cyan();
                                    printf("%lld", xmedian[nmedian / 2]);
                                    reset();
                                }
                                printf("\n=========================================================================\n");
                                printf("Jadi median dari data yang anda telah masukan adalah ");
                                green();
                                printf("%g\n", hasilmedian);
                                reset();
                                printf("=========================================================================\n");
                                printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                printf("Masukin disini: ");scanf("%d", &ulangmedian);
                                system("cls");
                                } while (ulangmedian != 0);
                            } else if (pemilihst == 5) { // MEAN
                                int ulangmean;
                                int imean;
                                long long int nmean;
                                double totalmean = 0;
                                do {
                                home_modus();
                                printf("Masukan nilai dari panjang data: ");scanf("%lld", &nmean);
                                long long int xmean[nmean];
                                printf("Masukan bilangannya disini: ");
                                for (imean=0;imean<nmean;imean++) {
                                    scanf("%lld", &xmean[imean]);
                                    totalmean +=  xmean[imean];
                                }
                                printf("=========================================================================\n");
                                printf("Jadi mean dari data yang anda telah masukan adalah ");
                                green();
                                printf("%g\n", totalmean / nmean);
                                reset();
                                printf("=========================================================================\n");
                                printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                printf("Masukin disini: ");scanf("%d", &ulangmean);
                                system("cls");
                                } while (ulangmean != 0);
                            } 
                            } while (pemilihst != 99);
                            continue;
                            break;
                        }
                case 3: // CONVERTER (DONE)
                        {
                            int pemilihcv;
                            do {
                            converter();
                            printf("Masukin disini ya: ");scanf("%d", &pemilihcv);
                            system("cls");
                            if (pemilihcv == 1) { // SUHU
                                int ulangsuhu;
                                double nilaisuhu;
                                char kodesuhu;
                                do {
                                    home_suhu();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("suhu dan kode suhunya\n");
                                    reset();
                                    printf("Masukan disini: ");scanf("%lf%c", &nilaisuhu, &kodesuhu);
                                    printf("=====================================================\n");
                                    system("cls");
                                    switch(kodesuhu) {
                                        case 'C': // CELCIUS KE SUHU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI CELCIUS KE NILAI SUHU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    green();
                                                    printf("|       Celcius           |            %g C          \n", nilaisuhu);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Reamur            |            %g R          \n", celciuskereamur(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|     Fahrenheit          |            %g F          \n", celciuskefahrenheit(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kelvin            |            %g K          \n", celciuskekelvin(nilaisuhu));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                  }
                                        case 'R': // REAMUR KE SUHU LAIN
                                                  { 
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI REAMUR KE NILAI SUHU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|       Celcius           |            %g C          \n", reamurkecelcius(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|       Reamur            |            %g R          \n", nilaisuhu);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|     Fahrenheit          |            %g F          \n", reamurkefahrenheit(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kelvin            |            %g K          \n", reamurkekelvin(nilaisuhu));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                  }   
                                        case 'F': // FAHRENHEIT KE SUHU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI FAHRENHEIT KE NILAI SUHU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|       Celcius           |            %g C          \n", fahrenheitkecelcius(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Reamur            |            %g R          \n", fahrenheitkereamur(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|     Fahrenheit          |            %g F          \n", nilaisuhu);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kelvin            |            %g K          \n", fahrenheitkekelvin(nilaisuhu));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                  }   
                                        case 'K': // KELVIN KE SUHU LAIN
                                                 {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KELVIN KE NILAI SUHU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|       Celcius           |            %g C          \n", kelvinkecelcius(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Reamur            |            %g R          \n", kelvinkereamur(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|     Fahrenheit          |            %g F          \n", kelvinkefahrenheit(nilaisuhu));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|       Kelvin            |            %g K          \n", nilaisuhu);
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                 } 
                                        default : red();printf("Kode yang anda masukan invalid! Silahkan untuk mengulang\n");reset();break;                                                           
                                    }
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangsuhu);
                                    system("cls");
                                } while (ulangsuhu != 0);
                            } else if (pemilihcv == 2) { // BERAT
                                int ulangberat;
                                double nilaiberat;
                                char kodeberat;
                                do {
                                    home_berat();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("berat dan kode beratya\n");
                                    reset();
                                    printf("Masukan disini: ");scanf("%lf%c", &nilaiberat, &kodeberat);
                                    printf("=====================================================\n");
                                    system("cls");
                                    switch(kodeberat) {
                                        case 'T': // TON KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI TON KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    green();
                                                    printf("|        Ton           |            %g Ton           \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatanggaturun1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatanggaturun3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatanggaturun4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatanggaturun5(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatanggaturun6(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatanggaturun7(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun8(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun9(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  } 
                                        case 'W': // KWINTAL KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KWINTAL KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|       Kwintal        |            %g Kwintal       \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatanggaturun2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatanggaturun3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatanggaturun4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatanggaturun5(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatanggaturun6(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun7(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun8(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'K': // KILOGRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KILOGRAM  KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Kilogram        |            %g Kg            \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatanggaturun1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatanggaturun2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatanggaturun3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatanggaturun4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun5(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun6(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }  
                                        case 'H': // HEKTOGRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI HEKTOGRAM KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatangganaik1(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Hektogram       |            %g Hg            \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatanggaturun1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatanggaturun2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatanggaturun3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun5(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'A': // DEKAGRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI DEKAGRAM KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatangganaik2(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Dekagram        |            %g Dag           \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatanggaturun1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatanggaturun2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun4(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'G': // GRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI GRAM KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik5(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatangganaik3(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatangganaik2(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Gram          |            %g g             \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatanggaturun1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun3(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'D': // DESIGRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI DESIGRAM KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik6(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik5(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatangganaik4(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatangganaik3(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatangganaik2(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Desigram        |            %g Dg            \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatanggaturun1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n"); 
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun2(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'C': // CENTIGRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI CENTIGRAM KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik7(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik6(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatangganaik5(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatangganaik4(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatangganaik3(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatangganaik2(nilaiberat));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Centigram       |            %g Cg            \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliigram       |            %g Mg            \n", skalatanggaturun1(nilaiberat));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'M': // MILIGRAM KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI MILIGRAM KE NILAI BERAT LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Ton           |            %g Ton           \n", skalatangganaik8(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|       Kwintal        |            %g Kwintal       \n", skalatangganaik7(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Kilogram        |            %g Kg            \n", skalatangganaik6(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektogram       |            %g Hg            \n", skalatangganaik5(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekagram        |            %g Dag           \n", skalatangganaik4(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Gram          |            %g g             \n", skalatangganaik3(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desigram        |            %g Dg            \n", skalatangganaik2(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centigram       |            %g Cg            \n", skalatangganaik1(nilaiberat));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Miliigram       |            %g Mg            \n", nilaiberat);
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        default : red();printf("Kode yang anda masukan invalid! Silahkan untuk mengulang\n");reset();break; 
                                    
                                    }
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangberat);
                                    system("cls");
                                } while (ulangberat != 0);
                            } else if (pemilihcv == 3) { // JARAK
                                int ulangjarak;
                                double nilaijarak;
                                char kodejarak;
                                do {
                                    home_jarak();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("Jarak dan kode jaraknya\n");
                                    reset();
                                    printf("Masukan disini: ");scanf("%lf%c", &nilaijarak, &kodejarak);
                                    printf("=====================================================\n");
                                    system("cls");
                                    switch(kodejarak) {
                                        case 'K': // KILOMETER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KILOMETER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    green();
                                                    printf("|      Kilometer        |            %g Km            \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektometer       |            %g Hm            \n", skalatanggaturun1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekameter        |            %g Dam           \n", skalatanggaturun2(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Meter          |            %g m             \n", skalatanggaturun3(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desimeter        |            %g Dm            \n", skalatanggaturun4(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centimeter       |            %g Cm            \n", skalatanggaturun5(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliimeter       |            %g Mm            \n", skalatanggaturun6(nilaijarak));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }  
                                        case 'H': // HEKTOMETER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI HEKTOMETER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|      Kilometer        |            %g Km            \n", skalatangganaik1(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Hektometer       |            %g Hm            \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekameter        |            %g Dam           \n", skalatanggaturun1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Meter          |            %g m             \n", skalatanggaturun2(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desimeter        |            %g Dm            \n", skalatanggaturun3(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centimeter       |            %g Cm            \n", skalatanggaturun4(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliimeter       |            %g Mm            \n", skalatanggaturun5(nilaijarak));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'A': // DEKAMETER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI DEKAMETER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|      Kilometer        |            %g Km            \n", skalatangganaik2(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektometer       |            %g Hm            \n", skalatangganaik1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Dekameter        |            %g Dam           \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Meter          |            %g m             \n", skalatanggaturun1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desimeter        |            %g Dm            \n", skalatanggaturun2(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centimeter       |            %g Cm            \n", skalatanggaturun3(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliimeter       |            %g Mm            \n", skalatanggaturun4(nilaijarak));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'M': // METER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI METER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|      Kilometer        |            %g Km            \n", skalatangganaik3(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektometer       |            %g Hm            \n", skalatangganaik2(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekameter        |            %g Dam           \n", skalatangganaik1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Meter          |            %g m             \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desimeter        |            %g Dm            \n", skalatanggaturun1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centimeter       |            %g Cm            \n", skalatanggaturun2(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliimeter       |            %g Mm            \n", skalatanggaturun3(nilaijarak));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'D': // DESIMETER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI DESIMETER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|      Kilometer        |            %g Km            \n", skalatangganaik4(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektometer       |            %g Hm            \n", skalatangganaik3(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekameter        |            %g Dam           \n", skalatangganaik2(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Meter          |            %g m             \n", skalatangganaik1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Desimeter        |            %g Dm            \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centimeter       |            %g Cm            \n", skalatanggaturun1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n"); 
                                                    printf("|      Miliimeter       |            %g Mm            \n", skalatanggaturun2(nilaijarak));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'C': // CENTIMETER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI CENTIMETER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|      Kilometer        |            %g Km            \n", skalatangganaik5(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektometer       |            %g Hm            \n", skalatangganaik4(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekameter        |            %g Dam           \n", skalatangganaik3(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Meter          |            %g m             \n", skalatangganaik2(nilaijarak));;
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desimeter        |            %g Dm            \n", skalatangganaik1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Centimeter       |            %g Cm            \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Miliimeter       |            %g Mm            \n", skalatanggaturun1(nilaijarak));
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'L':  // MILIMETER KE BERAT LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI MILIMETER KE NILAI JARAK LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|      Kilometer        |            %g Km            \n", skalatangganaik6(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Hektometer       |            %g Hm            \n", skalatangganaik5(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Dekameter        |            %g Dam           \n", skalatangganaik4(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Meter          |            %g m             \n", skalatangganaik3(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Desimeter        |            %g Dm            \n", skalatangganaik2(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|      Centimeter       |            %g Cm            \n", skalatangganaik1(nilaijarak));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Miliimeter       |            %g Mm            \n", nilaijarak);
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        default : red();printf("Kode yang anda masukan invalid!  Silahkan untuk mengulang\n");reset();break; 
                                    }
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangjarak);
                                    system("cls");
                                } while (ulangjarak != 0);
                            } else if (pemilihcv == 4) { // WAKTU
                                int ulangwaktu;
                                double nilaiwaktu;
                                char kodewaktu;
                                do {
                                    home_waktu();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("waktu dan kode waktunya\n");
                                    reset();
                                    printf("Masukan disini: ");scanf("%lf%c", &nilaiwaktu, &kodewaktu);
                                    printf("=====================================================\n");
                                    system("cls");
                                    switch(kodewaktu) {
                                        case 'A': // ABAD KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI ABAD KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    green();
                                                    printf("|        Abad         |            %g Abad           \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", abadkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", abadkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", abadkelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", abadketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", abadkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", abadkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", abadkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", abadkejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", abadkemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", abadkedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", abadkemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'K': // DEKADE KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI DEKADE KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", dekadekeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Dekade       |            %g Dekade         \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", dekadekewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", dekadekelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", dekadeketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", dekadekebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", dekadekeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", dekadekehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", dekadekejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", dekadekemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", dekadekedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", dekadekemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'W': // WINDU KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI WINDU KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", windukeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", windukedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Windu        |            %g Windu          \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", windukelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", winduketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", windukebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", windukeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", windukehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", windukejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", windukemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", windukedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", windukemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'L': // LUSTRUM KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI LUSTRUM KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", lustrumkeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", lustrumkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", lustrumkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|       Lustrum       |            %g Lustrum        \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", lustrumketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", lustrumkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", lustrumkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", lustrumkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", lustrumkejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", lustrumkemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", lustrumkedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", lustrumkemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'T': // TAHUN KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI TAHUN KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", tahunkeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", tahunkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", tahunkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", tahunkelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Tahun        |            %g Tahun          \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", tahunkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", tahunkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", tahunkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", tahunkejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", tahunkemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", tahunkedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", tahunkemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'B': // BULAN KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI BULAN KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", bulankeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", bulankedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", bulankewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", bulankelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", bulanketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Bulan        |            %g Bulan          \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", bulankeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", bulankehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", bulankejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", bulankemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", bulankedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", bulankemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'G': // MINGGU KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI MINGGU KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", minggukeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", minggukedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", minggukewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", minggukelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", mingguketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", minggukebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|       Minggu        |            %g Minggu         \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", minggukehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", minggukejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", minggukemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", minggukedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", minggukemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'H': // HARI KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI HARI KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", harikeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", harikedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", harikewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", harikelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", hariketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", harikebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", harikeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Hari         |            %g Hari           \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", harikejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", harikemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", harikedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", harikemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'J': // JAM KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI JAM KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", jamkeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", jamkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", jamkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", jamkelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", jamketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", jamkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", jamkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", jamkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Jam          |            %g Jam            \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", jamkemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", jamkedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", jamkemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'M': // MENIT KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI MENIT KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", menitkeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", menitkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", menitkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", menitkelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", menitketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", menitkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", menitkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", menitkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", menitkejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Menit        |            %g Menit          \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", menitkedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", menitkemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'D': // DETIK KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI DETIK KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", detikkeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", detikkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", detikkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", detikkelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", detikketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", detikkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", detikkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", detikkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", detikkejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", detikkemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Detik        |            %g Detik          \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|      Milidetik      |            %g Milidetik      \n", detikkemilidetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }
                                        case 'I': // MILIDETIK KE WAKTU LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI MILIDETIK KE NILAI WAKTU LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Abad         |            %g Abad           \n", mildetikkeabad(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Dekade       |            %g Dekade         \n", mildetikkedekade(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Windu        |            %g Windu          \n", mildetikkewindu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Lustrum       |            %g Lustrum        \n", mildetikkelustrum(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Tahun        |            %g Tahun          \n", mildetikketahun(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Bulan        |            %g Bulan          \n", mildetikkebulan(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|       Minggu        |            %g Minggu         \n", mildetikkeminggu(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Hari         |            %g Hari           \n", mildetikkehari(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Jam          |            %g Jam            \n", mildetikkejam(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Menit        |            %g Menit          \n", mildetikkemenit(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    printf("|        Detik        |            %g Detik          \n", mildetikkedetik(nilaiwaktu));
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Milidetik      |            %g Milidetik      \n", nilaiwaktu);
                                                    reset();
                                                    cyan();
                                                    printf("|----------------------------------------------------------------------|\n");
                                                    reset();
                                                    yellow();
                                                    printf(" Untuk nilai dengan format nilaie+007 seperti contoh\n");
                                                    printf("    Artinya itu sama saja dengan nilai x 10^7 \n");
                                                    printf("      Sebaliknya juga sama untuk nilaie-007 \n");
                                                    reset();
                                                    printf("=====================================================\n");
                                                    break;
                                                  }                                                                                                    
                                        default : red();printf("Kode yang anda masukan invalid! Silahkan untuk mengulang\n");reset();break;   
                                    }
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangwaktu);
                                    system("cls");
                                } while (ulangwaktu != 0);
                            } else if (pemilihcv == 5) { // PROGRAMMER
                                int ulangprogrammer;
                                long long int nilaiprogrammer;
                                char kodeprogrammer;
                                do {
                                    home_programmer();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("bilangan dan kodenya\n");
                                    reset();
                                    printf("Masukan disini: ");scanf("%lld%c", &nilaiprogrammer, &kodeprogrammer);
                                    printf("=====================================================\n");
                                    system("cls");
                                    switch(kodeprogrammer) {
                                        case 'B': // BINER KE BILANGAN LAIN
                                                  { 
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KE NILAI BILANGAN LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    green();
                                                    printf("|         Biner          |            %lld             \n", nilaiprogrammer);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Decimal         |            %lld             \n", binerkedecimal(nilaiprogrammer));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|         Octal          |            %lld             \n", binerkeoctal(nilaiprogrammer));
                                                    printf("|---------------------------------------------------|\n");
                                                    int hexDigitToBinary[16] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
                                                    1001, 1010, 1011, 1100, 1101, 1110, 1111};
                                                    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                                                    '9', 'A', 'B', 'C', 'D', 'E', 'F'};
                                                    char hexaDecimalNumber[20];     
                                                    int position, i, digits;
                                                    position = 0;
                                                    while(nilaiprogrammer!=0) {
                                                
                                                        digits = nilaiprogrammer % 10000;  
                                                        for(i=0; i<16; i++) {
                                                            if(hexDigitToBinary[i] == digits) {
                                                                hexaDecimalNumber[position] = hexDigits[i];
                                                                position++;  
                                                                break;  
                                                            }  
                                                        }  
                                                
                                                        nilaiprogrammer /= 10000;  
                                                    }  
                                                
                                                    hexaDecimalNumber[position] = '\0';  
                                                    strrev(hexaDecimalNumber);
                                                    printf("|      Hexadecimal       |            %s              \n", hexaDecimalNumber);
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                  }
                                        case 'D': // DECIMAL KE BILANGAN LAIN
                                                  { 
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KE NILAI BILANGAN LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    decimalkebiner(nilaiprogrammer);
                                                    printf("\n|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Decimal         |            %lld            \n", nilaiprogrammer);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    decimalkeoctal(nilaiprogrammer);
                                                    printf("\n|---------------------------------------------------|\n");
                                                    int hexDigitToBinaryD[16] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
                                                    1001, 1010, 1011, 1100, 1101, 1110, 1111};
                                                    char hexDigitsD[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
                                                    '9', 'A', 'B', 'C', 'D', 'E', 'F'};
                                                    char hexaDecimalNumberD[20];     
                                                    int positionD, iD, digitsD;
                                                    positionD = 0;
                                                    while(decimalkehexa(nilaiprogrammer)!=0) {
                                                
                                                        digitsD = decimalkehexa(nilaiprogrammer) % 10000;  
                                                        for(iD=0; iD<16; iD++) {
                                                            if(hexDigitToBinaryD[iD] == digitsD) {
                                                                hexaDecimalNumberD[positionD] = hexDigitsD[iD];
                                                                positionD++;  
                                                                break;  
                                                            }  
                                                        }  
                                                
                                                        long long int tempD = decimalkehexa(nilaiprogrammer);
                                                        tempD /= 10000;  
                                                    }  
                                                
                                                    hexaDecimalNumberD[positionD] = '\0';  
                                                    strrev(hexaDecimalNumberD);
                                                    printf("%s            \n", hexaDecimalNumberD);
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                  }   
                                        case 'O': // OCTAL KE BILANGAN LAIN
                                                  {
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KE NILAI BILANGAN LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|        Biner           |            %lld             \n", octalkebiner(nilaiprogrammer));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Decimal         |            %lld             \n", octalkedecimal(nilaiprogrammer));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|        Octal           |            %lld             \n", nilaiprogrammer);
                                                    reset();
                                                    cyan();
                                                    printf("|---------------------------------------------------|\n");
                                                    octalkehexa(nilaiprogrammer);
                                                    printf("\n=====================================================\n");
                                                    reset();
                                                    break;
                                                  }   
                                        case 'H': // HEXADECIMAL KE BILANGANLAIN
                                                 {
                                                    char nilaiprogrammerh[100];
                                                    printf("=====================================================\n");
                                                    printf("Masukan nilai dari ");
                                                    purple();
                                                    printf("Hexadecimalnya\n");
                                                    reset();
                                                    printf("Masukan disini: ");scanf("%s", &nilaiprogrammerh);
                                                    system("cls");
                                                    printf("=====================================================\n");
                                                    blue();
                                                    printf(" BERIKUT ADALAH HASIL CONVERSI KE NILAI BILANGAN LAINNYA \n");
                                                    reset();
                                                    cyan();
                                                    printf("=====================================================\n");
                                                    printf("|         Biner          |            %lld            \n", hexakebiner(nilaiprogrammerh));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|        Decimal         |            %lld             \n", hexakedecimal(nilaiprogrammerh));
                                                    printf("|---------------------------------------------------|\n");
                                                    printf("|         Octal          |            %lld             \n", hexakeoctal(nilaiprogrammerh));
                                                    printf("|---------------------------------------------------|\n");
                                                    green();
                                                    printf("|      Hexadecimal       |            %s             \n", nilaiprogrammerh);
                                                    reset();
                                                    printf("=====================================================\n");
                                                    reset();
                                                    break;
                                                 }
                                        default : red();printf("Kode yang anda masukan invalid atau kosong! Silahkan untuk mengulang\n");reset();break;                                                    
                                    }
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangprogrammer);
                                    system("cls");
                                } while (ulangprogrammer != 0);
                            
                            }   
                            } while (pemilihcv != 99);
                            continue;
                            break;    
                        }        
                case 4: // BANGUN DATAR (DONE)
                        {
                            int pemilihbd;
                            do {
                            bangun_datar();
                            printf("Masukin disini ya: ");scanf("%d", &pemilihbd);
                            system("cls");
                            if (pemilihbd == 1) { // PERSEGI
                                int ulangpersegi;
                                double spersegi;
                                do {
                                    home_persegi();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ");
                                    reset();
                                    printf("persegi: ");scanf("%lf", &spersegi);
                                    printf("============================================================\n");
                                    printf("KELILING PERSEGI\n");
                                    printf("Sisi x 4\n");
                                    printf("%g x 4: ", spersegi, 4);
                                    cyan();
                                    printf("%gcm\n", keliling_persegi(spersegi));
                                    reset();
                                    printf("============================================================\n");
                                    printf("LUAS PERSEGI\n");
                                    printf("Sisi x Sisi\n");
                                    printf("%g x %g: ", spersegi, spersegi);
                                    cyan();
                                    printf("%gcm^2\n", luas_persegi(spersegi));
                                    reset();
                                    printf("============================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangpersegi);
                                    system("cls");
                                } while (ulangpersegi != 0);
                            } else if (pemilihbd == 2) { // PERSEGI PANJANG
                                int ulangpersegip;
                                double ppersegip, lpersegip;
                                do {
                                    home_persegi_panjang();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang ");
                                    reset();
                                    printf("persegi panjang: ");scanf("%lf", &ppersegip);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("lebar ");
                                    reset();
                                    printf("persegi panjang: ");scanf("%lf", &lpersegip);
                                    printf("===============================================================================================================================\n");
                                    printf("KELILING PERSEGI PANJANG\n");
                                    printf("2 x (Panjang + Lebar)\n");
                                    printf("2 x (%g + %g)\n", ppersegip, lpersegip);
                                    printf("2 x %g: ", ppersegip + lpersegip);
                                    cyan();
                                    printf("%gcm\n", keliling_persegi_panjang(ppersegip, lpersegip));
                                    reset();
                                    printf("============================================================\n");
                                    printf("LUAS PERSEGI PANJANG\n");
                                    printf("Panjang x Lebar\n");
                                    printf("%g x %g: ", ppersegip, lpersegip);
                                    cyan();
                                    printf("%gcm^2\n", luas_persegi_panjang(ppersegip, lpersegip));
                                    reset();
                                    printf("===============================================================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangpersegip);
                                    system("cls");
                                } while (ulangpersegip != 0);
                            } else if (pemilihbd == 3) { // SEGITIGA
                                int ulangsegitiga;
                                double sasegitiga, sbsegitiga, scsegitiga, tsegitiga;
                                do {
                                    home_segitiga();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi A ");
                                    reset();
                                    printf("segitiga: ");scanf("%lf", &sasegitiga);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi B ");
                                    reset();
                                    printf("segitiga: ");scanf("%lf", &sbsegitiga);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi C (ALAS)");
                                    reset();
                                    printf("segitiga: ");scanf("%lf", &scsegitiga);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi ");
                                    reset();
                                    printf("segitiga: ");scanf("%lf", &tsegitiga);
                                    printf("================================================================\n");
                                    printf("KELILING SEGITIGA\n");
                                    printf("Sisi A + Sisi B + Sisi C\n");
                                    printf("%g + %g + %g: ", sasegitiga, sbsegitiga, scsegitiga);
                                    cyan();
                                    printf("%gcm\n", keliling_segitiga(sasegitiga, sbsegitiga, scsegitiga));
                                    reset();
                                    printf("============================================================\n");
                                    printf("LUAS SEGITIGA\n");
                                    printf("1/2 x Alas x Tinggi\n");
                                    printf("1/2 x %g x %g: ", scsegitiga, tsegitiga);
                                    cyan();
                                    printf("%gcm^2\n", luas_segitiga(scsegitiga, tsegitiga));
                                    reset();
                                    printf("===============================================================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangsegitiga);
                                    system("cls");
                                } while (ulangsegitiga != 0);
                            } else if (pemilihbd == 4) { // JAJAR GENJANG
                                int ulangjajarg; 
                                double smjajar, sjjajar;
                                do {
                                    home_jajar_genjang();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi miring ");
                                    reset();
                                    printf("jajar genjang: ");scanf("%lf", &smjajar);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi sejajar ");
                                    reset();
                                    printf("jajar genjang: ");scanf("%lf", &sjjajar);
                                    printf("==================================================================================================================\n");
                                    printf("KELILING JAJAR GENJANG:\n");
                                    printf("2 x (Sisi Miring + Sisi Sejajar)\n");
                                    printf("2 x (%g + %g)\n", smjajar, sjjajar);
                                    printf("2 x %g: ", smjajar + sjjajar);
                                    cyan();
                                    printf("%gcm\n", keliling_jajar_genjang(smjajar, sjjajar));
                                    reset();
                                    printf("============================================================\n");
                                    printf("LUAS JAJAR GENJANG\n");
                                    printf("Sisi Miring x Sisi Sejajar\n");
                                    printf("%g x %g: ", smjajar, sjjajar);
                                    cyan();
                                    printf("%gcm^2\n", luas_jajar_genjang(smjajar, sjjajar));
                                    reset();
                                    printf("===============================================================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangjajarg);
                                    system("cls");
                                } while (ulangjajarg != 0);
                            } else if (pemilihbd == 5) { // TRAPESIUM
                                int ulangtra; 
                                double sstra, sdtra, sttra, setra, ttra;
                                do {
                                    home_trapesium();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ke-1 (Sisi Sejajar)");
                                    reset();
                                    printf("trapesium: ");scanf("%lf", &sstra);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ke-2 ");
                                    reset();
                                    printf("trapesium: ");scanf("%lf", &sdtra);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ke-3 (Sisi Sejajar)");
                                    reset();
                                    printf("trapesium: ");scanf("%lf", &sttra);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ke-4 ");
                                    reset();
                                    printf("trapesium: ");scanf("%lf", &setra);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi ");
                                    reset();
                                    printf("trapesium: ");scanf("%lf", &ttra);
                                    printf("==============================================================================\n");
                                    printf("KELILING TRAPESIUM\n");
                                    printf("Jumlah semua sisi\n");
                                    printf("Sisi ke-1 + Sisi ke-2 + Sisi ke-3 + Sisi ke-4\n");
                                    printf("%g + %g + %g + %g: ", sstra, sdtra, sttra, setra);
                                    cyan();
                                    printf("%gcm\n", keliling_trapesium(sstra, sdtra, sttra, setra));
                                    reset();
                                    printf("============================================================\n");
                                    printf("LUAS TRAPESIUM\n");
                                    printf("1/2 x Jumlah sisi sejajar x Tinggi\n");
                                    printf("1/2 x (%g + %g) x %g: \n", sstra, sttra, ttra);
                                    printf("1/2 x %g x %g: ", sstra + sttra, ttra);
                                    cyan();
                                    printf("%gcm^2\n", luas_trapesium(sstra, sttra, ttra));
                                    reset();
                                    printf("===============================================================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangtra);
                                    system("cls");
                                } while (ulangtra != 0);
                            } else if (pemilihbd == 6) { // LAYANG-LAYANG
                                int ulanglayang; 
                                double sslayang, sdlayang, dslayang, ddlayang;
                                do {
                                    home_layang();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi lebih panjang ");
                                    reset();
                                    printf("layang-layang: ");scanf("%lf", &sslayang);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi lebih pendek ");
                                    reset();
                                    printf("layang-layang: ");scanf("%lf", &sdlayang);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang diagonal pertama ");
                                    reset();
                                    printf("layang-layang: ");scanf("%lf", &dslayang);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang diagonal kedua ");
                                    reset();
                                    printf("layang-layang: ");scanf("%lf", &ddlayang);
                                    printf("=================================================================\n");
                                    printf("KELILING LAYANG-LAYANG\n");
                                    printf("2 x (Sisi Lebih Panjang + Sisi Lebih Pendek)\n");
                                    printf("2 x (%g + %g)\n", sslayang, sdlayang);
                                    printf("2 x %g: ", sslayang + sdlayang);
                                    cyan();
                                    printf("%gcm\n", keliling_layang(sslayang, sdlayang));
                                    reset();
                                    printf("=================================================================\n");
                                    printf("LUAS LAYANG-LAYANG\n");
                                    printf("1/2 x Diagonal Pertama x Diagonal Kedua\n");
                                    printf("1/2 x %g x %g: ", dslayang, ddlayang);
                                    cyan();
                                    printf("%gcm^2\n", luas_layang(dslayang, ddlayang));
                                    reset();
                                    printf("=================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulanglayang);
                                    system("cls");
                                } while (ulanglayang != 0);
                            } else if (pemilihbd == 7) { // BELAH KETUPAT
                                int ulangbelahk;
                                double sbelahk, dsbelahk, ddbelahk;
                                do {
                                    home_belah_ketupat();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ");
                                    reset();
                                    printf("belah ketupat: ");scanf("%lf", &sbelahk);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang diagonal pertama ");
                                    reset();
                                    printf("belah ketupat: ");scanf("%lf", &dsbelahk);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang diagonal kedua ");
                                    reset();
                                    printf("belah ketupat: ");scanf("%lf", &ddbelahk);
                                    printf("===============================================================================================================\n");
                                    printf("KELILING BELAH KETUPAT\n");
                                    printf("KELILING PERSEGI\n");
                                    printf("Sisi x 4\n");
                                    printf("%g x 4: ", sbelahk, 4);
                                    cyan();
                                    printf("%gcm\n", keliling_belah_ketupat(sbelahk));
                                    reset();
                                    printf("===============================================================================================================\n");
                                    printf("LUAS BELAH KETUPAT\n");
                                    printf("1/2 x Diagonal Pertama x Diagonal Kedua\n");
                                    printf("1/2 x %g x %g: ", dsbelahk, ddbelahk);
                                    cyan();
                                    printf("%gcm^2\n", luas_belah_ketupat(dsbelahk, ddbelahk));
                                    reset();
                                    printf("===============================================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangbelahk);
                                    system("cls");
                                } while (ulangbelahk != 0);
                            } else if (pemilihbd == 8) { // LINGKARAN
                                int ulanglingkaran;
                                double rlingkaran;
                                do {
                                    home_lingkaran();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("radius (Jari-jari) ");
                                    reset();
                                    printf("lingkaran: ");scanf("%lf", &rlingkaran);
                                    printf("==============================================================================\n"); 
                                    printf("DIAMETER LINGKARAN\n");
                                    printf("2 x radius\n");
                                    printf("2 x %g: ", rlingkaran);
                                    cyan();
                                    printf("%gcm\n", 2 * rlingkaran);
                                    reset();
                                    printf("==============================================================================\n"); 
                                    printf("KELILING LINGKARAN\n");
                                    printf("2 x phi x radius\n");
                                    printf("2 x 3,14 x %g: ", rlingkaran);
                                    cyan();
                                    printf("%gcm\n", keliling_lingkaran(rlingkaran));
                                    reset();
                                    printf("==============================================================================\n"); 
                                    printf("LUAS LINGKARAN\n");
                                    printf("phi x radius x radius\n");
                                    printf("3,14 x %g x %g: ", rlingkaran, rlingkaran);
                                    cyan();
                                    printf("%gcm^2\n", luas_lingkaran(rlingkaran));
                                    reset();
                                    printf("==============================================================================\n"); 
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulanglingkaran);
                                    system("cls");
                                } while (ulanglingkaran != 0);
                            } 
                            } while (pemilihbd != 99);
                            continue;
                            break;    
                        }
                case 5: // BANGUN RUANG (DONE)
                        {
                            int pemilihbr;
                            do {
                            bangun_ruang();
                            printf("Masukin disini ya: ");scanf("%d", &pemilihbr);
                            system("cls");
                            if (pemilihbr == 1) { // KUBUS
                                int ulangkubus;
                                double skubus;
                                do {
                                    home_kubus();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi ");
                                    reset();
                                    printf("kubus: ");scanf("%lf", &skubus);
                                    printf("=============================================\n");
                                    printf("VOLUME KUBUS\n");
                                    printf("Sisi x Sisi x Sisi\n");
                                    printf("%g x %g x %g: ", skubus, skubus, skubus);
                                    cyan();
                                    printf("%gcm^3\n", volume_kubus(skubus));
                                    reset();
                                    printf("=============================================\n");
                                    printf("KELILING KUBUS\n");
                                    printf("12 x Sisi\n");
                                    printf("12 x %g: ", skubus);
                                    cyan();
                                    printf("%gcm\n", keliling_kubus(skubus));
                                    reset();
                                    printf("=============================================\n");
                                    printf("LUAS PERMUKAAN KUBUS\n");
                                    printf("6 x Sisi x Sisi\n");
                                    printf("6 x %g x %g: ", skubus, skubus);
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_kubus(skubus));
                                    reset();
                                    printf("=============================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangkubus);
                                    system("cls");
                                } while (ulangkubus != 0);
                            } else if (pemilihbr == 2) { // BALOK
                                int ulangbalok;
                                double pbalok, lbalok, tbalok;
                                do {
                                    home_kubus();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang ");
                                    reset();
                                    printf("balok: ");scanf("%lf", &pbalok);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("lebar ");
                                    reset();
                                    printf("balok: ");scanf("%lf", &lbalok);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi ");
                                    reset();
                                    printf("balok: ");scanf("%lf", &tbalok);
                                    printf("=============================================\n");
                                    printf("VOLUME BALOK\n");
                                    printf("Panjang x Lebar x Tinggi\n");
                                    printf("%g x %g x %g: ", pbalok, lbalok, tbalok);
                                    cyan();
                                    printf("%gcm^3\n", volume_balok(pbalok, lbalok, tbalok));
                                    reset();
                                    printf("=============================================\n");
                                    printf("KELILING BALOK\n");
                                    printf("4 x (Panjang + Lebar + Tinggi\n");
                                    printf("4 x (%g + %g + %g)\n", pbalok, lbalok, tbalok);
                                    printf("4 x %g\n: ", pbalok + lbalok + tbalok);
                                    cyan();
                                    printf("%gcm\n", keliling_balok(pbalok, lbalok, tbalok));
                                    reset();
                                    printf("=============================================\n");
                                    printf("LUAS PERMUKAAN BALOK\n");
                                    printf("2 x ((Panjang * Lebar) + (Lebar * Tinggi) + (Panjang * Tinggi))\n");
                                    printf("2 x ((%g * %g) + (%g * %g) + (%g * %g))\n", pbalok, lbalok, lbalok, tbalok, pbalok, tbalok);
                                    printf("2 x (%g + %g + %g)\n", pbalok * lbalok, lbalok * tbalok, pbalok * tbalok);
                                    printf("2 x %g\n", (pbalok * lbalok) + (lbalok * tbalok) + (pbalok * tbalok));
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_balok(pbalok, lbalok, tbalok));
                                    reset();
                                    printf("=============================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangbalok);
                                    system("cls");
                                } while (ulangbalok != 0);
                            } else if (pemilihbr == 3) { // TABUNG
                                int ulangtabung;
                                double rtabung, ttabung;
                                do {
                                    home_tabung();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("radius ");
                                    reset();
                                    printf("(jari-jari) tabung: ");scanf("%lf", &rtabung);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi ");
                                    reset();
                                    printf("tabung: ");scanf("%lf", &ttabung);
                                    printf("======================================================\n");
                                    printf("VOLUME TABUNG\n");
                                    printf("phi x Radius^2 x Tinggi\n");
                                    printf("3,14 x %g^2 x %g\n", rtabung, ttabung);
                                    printf("3,14 x %g x %g: ", rtabung * rtabung, ttabung);
                                    cyan();
                                    printf("%gcm^3\n", volume_tabung(rtabung, ttabung));
                                    reset();
                                    printf("======================================================\n");
                                    printf("KELILING ALAS TABUNG\n");
                                    printf("2 x phi x radius\n");
                                    printf("2 x 3,14 x %g: ", rtabung);
                                    cyan();
                                    printf("%gcm\n", keliling_alas_tabung(rtabung));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS ALAS TABUNG\n");
                                    printf("phi x radius x radius\n");
                                    printf("3,14 x %g x %g: ", rtabung, rtabung);
                                    cyan();
                                    printf("%gcm^2\n", luas_alas_tabung(rtabung));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS SELIMUT TABUNG\n");
                                    printf("2 x phi * Radius * Tinggi\n");
                                    printf("2 x 3,14 x %g x %g: ", rtabung, ttabung);
                                    cyan();
                                    printf("%gcm^2\n", luas_selimut_tabung(rtabung, ttabung));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS PERMUKAAN TABUNG\n");
                                    printf("(2 * Luas Alas Tabung) + Luas Selimut Tabung\n");
                                    printf("(2 * %g) + %g\n", luas_alas_tabung(rtabung), luas_selimut_tabung(rtabung, ttabung));
                                    printf("%g + %g: ", 2 * luas_alas_tabung(rtabung), luas_selimut_tabung(rtabung, ttabung));
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_tabung(luas_alas_tabung(rtabung), luas_selimut_tabung(rtabung, ttabung)));
                                    reset();
                                    printf("======================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangtabung);
                                    system("cls");
                                } while (ulangtabung != 0);
                            } else if (pemilihbr == 4) { // KERUCUT
                                int ulangkerucut;
                                double rkerucut, tkerucut;
                                do {
                                    home_kerucut();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("radius ");
                                    reset();
                                    printf("(jari-jari) kerucut: ");scanf("%lf", &rkerucut);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi ");
                                    reset();
                                    printf("kerucut: ");scanf("%lf", &tkerucut);
                                    printf("======================================================\n");
                                    double skerucut = akar((pangkat(rkerucut,2) + pangkat(tkerucut,2)));
                                    printf("Sehingga didapatkan nilai dari s (garis apotema)\n(garis yang menghubungkan titik puncak dengan titik keliling alas kerucut) yaitu, \n");
                                    printf("akar(Radius^2 + Tinggi^2)\n");
                                    printf("akar(%g^2 + %g^2): ", rkerucut, tkerucut);
                                    cyan();
                                    printf("%g\n", skerucut);
                                    reset();
                                    printf("======================================================\n");
                                    printf("VOLUME KERUCUT\n");
                                    printf("1/3 x phi x Radius^2 x Tinggi\n");
                                    printf("1/3 x 3,14 x %g^2 x %g\n", rkerucut, tkerucut);
                                    printf("1/3 x 3,14 x %g x %g: ", rkerucut * rkerucut, tkerucut);
                                    cyan();
                                    printf("%gcm^3\n", volume_kerucut(rkerucut, tkerucut));
                                    reset();
                                    printf("======================================================\n");
                                    printf("KELILING ALAS KERUCUT\n");
                                    printf("2 x phi x radius\n");
                                    printf("2 x 3,14 x %g: ", rkerucut);
                                    cyan();
                                    printf("%gcm\n", keliling_alas_kerucut(rkerucut));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS ALAS KERUCUT\n");
                                    printf("phi x radius x radius\n");
                                    printf("3,14 x %g x %g: ", rkerucut, rkerucut);
                                    cyan();
                                    printf("%gcm^2\n", luas_alas_kerucut(rkerucut));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS PERMUKAAN KERUCUT\n");
                                    printf("phi * Radius * (Radius + Apotema)\n");
                                    printf("3,14 * %g * (%g + %g): ", rkerucut, rkerucut, skerucut);
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_kerucut(rkerucut, skerucut));
                                    reset();
                                    printf("======================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangkerucut);
                                    system("cls");
                                } while (ulangkerucut != 0);
                            } else if (pemilihbr == 5) { // LIMAS SEGIEMPAT
                                int ulanglimasempat;
                                double slimasempat, tlimasempat, apolimasempat;
                                do {
                                    home_limas_segiempat();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("panjang sisi ");
                                    reset();
                                    printf("limas segiempat: ");scanf("%lf", &slimasempat);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi ");
                                    reset();
                                    printf("limas segiempat: ");scanf("%lf", &tlimasempat);
                                    printf("=============================================\n");
                                    double apolimasempat = akar((pangkat(slimasempat/2,2) + pangkat(tlimasempat,2)));
                                    printf("Sehingga didapatkan nilai dari garis apotema yaitu, \n");
                                    printf("akar(1/2Panjang Sisi Alas^2 + Tinggi^2)\n");
                                    printf("akar(%g^2 + %g^2): ", slimasempat / 2, tlimasempat);
                                    cyan();
                                    printf("%gcm\n", apolimasempat);
                                    reset();
                                    printf("======================================================\n");
                                    printf("KELILING AlAS LIMAS SEGIEMPAT\n");
                                    printf("4 x Panjang Sisi Alas\n");
                                    printf("4 x %g: ", slimasempat);
                                    cyan();
                                    printf("%gcm\n", keliling_alas_limas_empat(slimasempat));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS ALAS LIMAS SEGIEMPAT\n");
                                    printf("Panjang Sisi Alas x Panjang Sisi Alas\n");
                                    printf("%g x %g: ", slimasempat, slimasempat);
                                    cyan();
                                    printf("%gcm^2\n", luas_alas_limas_empat(slimasempat));
                                    reset();
                                    printf("======================================================\n");
                                    printf("VOLUME LIMAS SEGIEMPAT\n");
                                    printf("1/3 x Luas Alas x Tinggi\n");
                                    printf("1/3 x %g x %g: ", luas_alas_limas_empat(slimasempat), tlimasempat);
                                    cyan();
                                    printf("%gcm^3\n", volume_limas_empat(luas_alas_limas_empat(slimasempat), tlimasempat));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS SISI TEGAK LIMAS SEGIEMPAT\n");
                                    printf("1/2 * Panjang Sisi * Apotema\n");
                                    printf("1/2 x %g x %g: ", slimasempat, apolimasempat);
                                    cyan();
                                    printf("%gcm^2\n", luas_sisitegak_limas_empat(slimasempat, apolimasempat));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS PERMUKAAN LIMAS SEGIEMPAT\n");
                                    printf("Luas Alas Limas Segitiga + (4 * Luas Sisi Tegak)\n");
                                    printf("%g + (4 * %g)\n", luas_alas_limas_empat(slimasempat), luas_sisitegak_limas_empat(slimasempat, apolimasempat));
                                    printf("%g + %g: ", luas_alas_limas_empat(slimasempat), 4 * luas_sisitegak_limas_empat(slimasempat, apolimasempat));
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_limas_empat(luas_alas_limas_empat(slimasempat), luas_sisitegak_limas_empat(slimasempat, apolimasempat)));
                                    reset();
                                    printf("======================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulanglimasempat);
                                    system("cls");
                                } while (ulanglimasempat != 0);
                            } else if (pemilihbr == 6) { // BOLA
                                int ulangbola;
                                double rbola;
                                do {
                                    home_bola();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("radius ");
                                    reset();
                                    printf("bola: ");scanf("%lf", &rbola);
                                    printf("====================================\n");
                                    printf("VOLUME BOLA\n");
                                    printf("4/3 x phi x Radius^3\n");
                                    printf("4/3 x 3,14 x %g: ", rbola);
                                    cyan();
                                    printf("%gcm^3\n", volume_bola(rbola));
                                    reset();
                                    printf("====================================\n");
                                    printf("LUAS PERMUKAAN BOLA\n");
                                    printf("4 x phi x Radius x Radius\n");
                                    printf("4 x 3,14 x %g x %g: ", rbola, rbola);
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_bola(rbola));
                                    reset();
                                    printf("====================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangbola);
                                    system("cls");
                                } while (ulangbola != 0);
                            } else if (pemilihbr == 7) { // PRISMA 
                                int ulangprisma;
                                double saprisma, sbprisma, scprisma, taprisma, tprisma;
                                do {
                                    home_prisma();
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi A ");
                                    reset();
                                    printf("prisma segitiga: ");scanf("%lf", &saprisma);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi B ");
                                    reset();
                                    printf("prisma segitiga: ");scanf("%lf", &sbprisma);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("sisi C (ALAS)");
                                    reset();
                                    printf("prisma segitiga: ");scanf("%lf", &scprisma);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi alas ");
                                    reset();
                                    printf("prisma segitiga: ");scanf("%lf", &taprisma);
                                    printf("Masukan nilai dari ");
                                    purple();
                                    printf("tinggi prisma ");
                                    reset();
                                    printf("segitiga: ");scanf("%lf", &tprisma);
                                    printf("======================================================\n");
                                    printf("KELILING ALAS PRISMA SEGITIGA\n");
                                    printf("Sisi A + Sisi B + Sisi C\n");
                                    printf("%g + %g + %g: ", saprisma, sbprisma, scprisma);
                                    cyan();
                                    printf("%gcm\n", keliling_prisma(saprisma, sbprisma, scprisma));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS ALAS PRISMA SEGITIGA\n");
                                    printf("1/2 x Sisi C x Tinggi Alas\n");
                                    printf("1/2 x %g x %g: ", scprisma, taprisma);
                                    cyan();
                                    printf("%gcm^2\n", luas_prisma(scprisma, taprisma));
                                    reset();
                                    printf("======================================================\n");
                                    printf("VOLUME PRISMA SEGITIGA\n");
                                    printf("Luas Alas x Tinggi Prisma\n");
                                    printf("%g x %g: ", luas_prisma(scprisma, taprisma), tprisma);
                                    cyan();
                                    printf("%gcm^3\n", volume_prisma(luas_prisma(scprisma, taprisma), tprisma));
                                    reset();
                                    printf("======================================================\n");
                                    printf("LUAS PERMUKAAN PRISMA SEGITIGA\n");
                                    printf("(2 x Luas Alas) + (Keliling Alas x Tinggi Prisma)\n");
                                    printf("(2 X %g) + (%g x %g): ", luas_prisma(scprisma, taprisma), keliling_prisma(saprisma, sbprisma, scprisma), tprisma);
                                    printf("%g + %g: ", 2 * luas_prisma(scprisma, taprisma), keliling_prisma(saprisma, sbprisma, scprisma) * tprisma);
                                    cyan();
                                    printf("%gcm^2\n", luas_permukaan_prisma(luas_prisma(scprisma, taprisma), keliling_prisma(saprisma, sbprisma, scprisma), tprisma));
                                    reset();
                                    printf("======================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangprisma);
                                    system("cls");
                                } while (ulangprisma != 0);
                            } 
                            } while (pemilihbr != 99);
                            continue;
                            break;    
                        }
                case 6: // EXTRAS (DONE)
                        {
                            int pemilihex;
                            do {
                            extras();
                            printf("Masukin disini ya: ");scanf("%d", &pemilihex);
                            system("cls");
                            if (pemilihex == 1) { // FIBONACCI
                                int ulangfibo;
                                long long int nfibo, snfibo=0;
                                do {
                                    home_fibonacci();
                                    printf("Masukan nilai dari fibonacci(n): ");scanf("%lld", &nfibo);
                                    printf("=========================================================================\n");
                                    printf("Nilai dari bilangan fibonacci(%lld) adalah ", nfibo);
                                    green();
                                    printf("%lld\n",fibonacci(nfibo));
                                    reset();
                                    for (int k=2;k<=nfibo;k++) {
                                        cyan();
                                        printf("%lld + ",fibonacci(k-1));
                                        reset();
                                        snfibo+=fibonacci(k);
                                    }
                                    cyan();
                                    printf("%lld = ", fibonacci(nfibo));
                                    reset();
                                    green();
                                    printf("%lld",snfibo + 1);
                                    reset();
                                    printf("\nTambahan buat kamu, jadi total dari fibonacci(%lld) adalah ", nfibo);
                                    green();
                                    printf("%lld\n",snfibo + 1);
                                    reset();
                                    printf("================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali ke halaman awal)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangfibo);
                                    system("cls");
                                } while (ulangfibo != 0);
                            } else if (pemilihex == 2) { // FAKTORIAL
                                int ulangfakto;
                                long long int nfakto;
                                do {
                                    home_faktorial();
                                    printf("Masukan nilai bilangan n!: ");scanf("%lld", &nfakto);
                                    printf("==============================================================================\n");
                                    printf("Nilai dari bilangan %lld! adalah ", nfakto);
                                    if (nfakto == 0) {
                                        green();
                                        printf("%lld\n", 1);
                                        reset();
                                    } else {
                                        green();
                                        printf("%lld\n",faktorial(nfakto));
                                        reset();
                                    }
                                    printf("================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali ke halaman awal)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangfakto);
                                    system("cls");
                                } while (ulangfakto != 0);
                            } else if (pemilihex == 3) { // BILANGAN PRIMA
                                int ulangprima;
                                long long int nprima;
                                do {
                                    home_prima();
                                    printf("Masukan bilangan n yang ingin di cek: ");;scanf("%lld", &nprima);
                                    printf("=========================================================================\n");
                                    bool isPrime = true;
                                    if (nprima == 0 || nprima == 1) {
                                        isPrime = false;
                                    }
                                    for (int r=2;r<=nprima/2;r++) {
                                        if (nprima % r == 0) {
                                            isPrime = false;
                                        } else {
                                            isPrime = true;
                                            }
                                    }
                                    if (isPrime == true){;
                                        cyan();
                                        printf("%d merupakan bilangan prima\n", nprima);
                                        reset();
                                    } else if (isPrime == false){
                                        red();
                                        printf("%d bukan merupakan bilangan prima\n", nprima);
                                        reset();
                                    }
                                    printf("================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali ke halaman awal)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangprima);
                                    system("cls");
                                } while (ulangprima != 0);
                            } else if (pemilihex == 4) { // Deret Aritmatika
                                int ulangdereta;
                                long long int adereta, bdereta, undereta, sndereta;
                                do {
                                    home_deret_aritmatika();
                                    printf("Masukan nilai dari a (Nilai Pertama): ");scanf("%lld", &adereta);
                                    printf("Masukan nilai dari b (Perbedaan Nilai Saat Ini Dengan Nilai Selanjutnya): ");scanf("%lld", &bdereta);
                                    printf("================================================================================\n");
                                    printf("Masukan nilai dari suku Un yang ingin diketahui: ");scanf("%lld", &undereta);
                                    printf("Masukan nilai dari suku Sn yang ingin diketahui: ");scanf("%lld", &sndereta);
                                    printf("================================================================================\n");
                                    printf("Nilai dari suku U%lld adalah: ", undereta);
                                    cyan();
                                    printf("%lld\n", un_deret_aritmatika(adereta, bdereta, undereta));
                                    reset();
                                    printf("================================================================================\n");
                                    printf("Nilai dari S%lld adalah: ", sndereta);
                                    cyan();
                                    printf("%lld\n", sn_deret_aritmatika(adereta, bdereta, sndereta));
                                    reset();
                                    printf("================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali ke halaman awal)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangdereta);
                                    system("cls");
                                } while (ulangdereta != 0);
                            } else if (pemilihex == 5) { //Deret Geometri
                                int ulangderetg;
                                double aderetg, bderetg, underetg, snderetg;
                                do {
                                    home_deret_geometri();
                                    printf("Masukan nilai dari U1: ");scanf("%lf", &aderetg);
                                    printf("Masukan nilai dari U2: ");scanf("%lf", &bderetg);
                                    printf("\n             U2        %g   \n", bderetg);
                                    printf("Rasio(r) = ------  = ----- \n");
                                    printf("             U1        %g   \n", aderetg); 
                                    printf("================================================================================\n"); 
                                    printf("Masukan nilai dari suku Un yang ingin diketahui: ");scanf("%lf", &underetg);
                                    printf("Masukan nilai dari suku Sn yang ingin diketahui: ");scanf("%lf", &snderetg);
                                    printf("================================================================================\n");
                                    printf("Nilai dari suku U%g adalah: ", underetg);
                                    cyan();
                                    printf("%g\n", un_deret_geometri(aderetg, rasio_geometri(bderetg, aderetg), underetg));
                                    reset();
                                    printf("================================================================================\n");
                                    double rasiog = rasio_geometri(bderetg, aderetg);
                                    if (rasiog < 1) {
                                        printf("Nilai dari S%g adalah: ", snderetg);
                                        cyan();
                                        printf("%g\n", sn_deret_geometri_turun(aderetg, rasiog, snderetg));
                                        reset();
                                    } else if (rasiog > 1) {
                                        printf("Nilai dari S%g adalah: ", snderetg);
                                        cyan();
                                        printf("%g\n", sn_deret_geometri_naik(aderetg, rasiog, snderetg));
                                        reset(); 
                                    }
                                    printf("================================================================================\n");
                                    printf("Mau mengulang operasi? (1 untuk Iya / 0 untuk Tidak dan Kembali ke halaman awal)\n");
                                    printf("Masukin disini: ");scanf("%d", &ulangderetg);
                                    system("cls");
                                } while (ulangderetg != 0);
                            } 
                            } while (pemilihex != 99);
                            continue;
                           break;   
                        }        

            }
    } while (operator != 0);
    tutup();
    return 0;
}
