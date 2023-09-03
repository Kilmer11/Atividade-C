#include <stdio.h>

int main()
{
    int a, b, c, troca, opcao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a < 0 || b < 0 || c < 0)
    {
        printf("Numeros digitados invalidos!!\n");
    }else
    {
        //ordenando os numeros em uma ordem especifica
        //nesse caso a ordem decrescente
        if (a > b && a > c)
        {
            if (b > c)
            {
                
            }else{
                troca = b;
                b = c;
                c = troca;   
            }
        }else if (b > c)
        {
            if ( c > a)
            {
                troca = a;
                a = b;
                b = c;
                c = troca;
            }else{
                troca = a;
                a = b;
                b = troca;
            }
        }else{
            if (b > a)
            {
                troca = a;
                a = c;
                c = troca;
            }else{
                troca = a;
                a = c;
                c = b;
                b = troca;
            }
        }

        printf("Escolha uma das opcoes:\n");
        printf("1 - Mostre os numeros em ordem crescente.\n");
        printf("2 - Mostre os numeros em ordem decrescente.\n");
        printf("3 - Mostre o menor numero entre os demais.\n");
        scanf("%d", &opcao);

        //com os numeros ordenandos basta ajustar a cada caso
        if (opcao == 1)
        {
            printf("%d - %d - %d\n", c, b, a);
        }else if (opcao == 2)
        {
            printf("%d - %d - %d\n", a, b, c);
        }if (opcao == 3)
        {
            printf("%d - %d - %d\n", a, c, b);
        }else{
            printf("Numero digitado invalido!!");
        }
    }
    
    return 0;
}