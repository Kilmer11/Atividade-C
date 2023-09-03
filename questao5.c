#include <stdio.h>

int main()
{
    float altura, peso, mediaIdade;
    int idade, porcentagem;
    int acmIdade = 0;
    int acm = 0;
    int acm2 = 0;

    for (int t = 1; t <= 10; ++t)
    {
        printf("%d° pessoa\n", t);
        printf("Digite o peso: \n");
        scanf("%f", &peso);
        printf("Digite a idade: \n");
        scanf("%d", &idade);
        printf("Digite a altura: \n");
        scanf("%f", &altura);

        if (peso > 80 && altura < 1.50)
        {
            acm = acm + 1;
        }

        if (altura > 1.90)
        {
            if (idade > 10 && idade < 30)
            {
                acm2 = acm2 + 1;
            }
        }

        acmIdade = acmIdade + idade;
    }
    
    mediaIdade = acmIdade/10;
    printf("Media das idades das 10 pessoas: %.2f\n", mediaIdade);

    printf("Quantidade de pessoas com peso superior a 80kg e altura inferior a 1,50m: %d\n", acm);

    porcentagem = acm2 * 10;
    printf("Percentual de pessoas entre 10 e 30 anos com altura superior a 1,90m: %d\n", porcentagem);

    return 0;
}