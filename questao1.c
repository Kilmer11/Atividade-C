#include <stdio.h>
#include <math.h>

int main()
{
    float quadrado, cubo, raizQuadrada, raizCubica, resto;
    int numero;

    printf("Digite um numero maior que 0: ");
    scanf("%d.\n", &numero);

    if(numero < 0)
    {
        printf("Numero digitado inválido!!\n");
    }
    else{
        quadrado = pow(numero, 2);
        printf("%d elevado a 2 : %.2f \n", numero, quadrado);

        cubo = pow(numero, 3);
        printf("%d elevado a 3 : %.2f \n", numero, cubo);

        raizQuadrada = pow(numero, 1.0/2.0);
        printf("raiz quadrada de %d : %.2f \n", numero, raizQuadrada);

        raizCubica = pow(numero, 1.0/3.0);
        printf("raiz cubica de %d : %.2f \n", numero, raizCubica);

        resto = numero % 3;
        printf("Resto da divisao de %d por 3: %.2f", numero, resto);
    }

    return 0;
}