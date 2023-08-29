#include<stdio.h>
#include<math.h>

int main()
{
    double numero, raiz, quadrado;

    printf("Digite o numero:");
    scanf("%lf", &numero);

    if (numero >=0 )
    {
        raiz= sqrt(numero);
        printf("A raiz e : %lf", raiz);

    }else{
        quadrado = numero * numero;
        printf("O quadrado e : %lf", quadrado);
    }
    
    
    
  
}
