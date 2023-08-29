#include <stdio.h>

int main() {
    int A, B, C;

    
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    
    if (A < B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B < C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A < B) {
        int temp = A;
        A = B;
        B = temp;
    }

    
    printf("Valores em ordem descendente: %d, %d, %d\n", A, B, C);

    return 0;
}