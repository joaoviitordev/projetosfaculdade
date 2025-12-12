#include <stdio.h>

// Modificadores de tipos de dados em C

// Os mais usados são: unsigned | signed | short | long

// Exemplo de uso de unsigned e long !

int main() {

    // Unsigned int

    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
 
    printf("Número sem unsigned: %d\n", signedNumber);
    printf("Número com unsigned: %u\n", unsignedNumber);
    
    // Unsigned int

    int signedNumberr = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumberr = 3000000000;
    
    printf("Número sem unsigned: %d\n", signedNumber);
    printf("Número com unsigned: %u\n", unsignedNumber);

    // Long int

    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
    
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
    
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);

    // Long double int

    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);

    return 0;
}


 
 

 
