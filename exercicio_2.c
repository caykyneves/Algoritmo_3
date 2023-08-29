#include<stdio.h>
#include<locale.h>

int main(){
   

    int num1, num2,num3,num4;


    printf("Digite 4 valores\n");
    printf("\nDigite o primeiro numero:");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero:");
    scanf("%d", &num2);
    printf("\nDigite o terceiro numero:");
    scanf("%d", &num3);
    printf("\nDigite o quarto numero:");
    scanf("%d", &num4);

    int maior= num1;
    int menor = num1;

    if(num2 > maior ){
        maior= num2;
    }if (num3>maior)
    {
        maior = num3;
    }if (num4> maior)
    {
    maior = num4;
    }if (num2 <menor)
    {
        menor = num2;
    }if (num3 < menor)
    {
        menor = num3;
    }if (num4< menor)
    {
        menor = num4;
    }
    printf("\n\n O maior numero e : %d\n", maior);
    printf("\n\n O menor numero e : %d\n", menor);
    
    
    
    
    





}