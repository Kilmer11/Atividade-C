#include <stdio.h>

int main()
{
    int n;
    int fatorial = 1;

    do
    {   
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        if (n < 0)
        {
            printf("Valor informado invalido!!\n");
        }else{
            for (int t = 1; t <= n; ++t)
            {
                fatorial = fatorial * t;
            }
            printf("Fatorial de %d: %d\n\n", n, fatorial);
        }
        fatorial = 1;
    } while (n != 0);

    return 0;
}