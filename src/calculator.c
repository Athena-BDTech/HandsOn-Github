#include <stdio.h>
#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("=== Calculatrice Simple ===\n");
    printf("\n");
    
    // Tests d'addition
    printf("Tests d'addition :\n");
    printf("5 + 3 = %d\n", add(5, 3));
    printf("10 + 20 = %d\n", add(10, 20));
    printf("0 + 0 = %d\n", add(0, 0));
    
    printf("\n");
    
    // Tests de soustraction
    printf("Tests de soustraction :\n");
    printf("10 - 4 = %d\n", subtract(10, 4));
    printf("50 - 25 = %d\n", subtract(50, 25));
    printf("5 - 5 = %d\n", subtract(5, 5));
    
    printf("\n");
    printf("Calculatrice fonctionnelle !\n");
    
    return 0;
}
