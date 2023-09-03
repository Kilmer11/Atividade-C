#include <stdio.h>
#include <math.h>

int main()
{
    float hora, parteReal;
    int minutos, segundos, parteInt;

    printf("Digite a hora quebrada: ");
    scanf("%f", &hora);

    if (hora > 23.59 || hora < 0)
    {
        printf("Hora informada invalida!!");
    }
    else
    {
        parteInt = floor(hora);
        parteReal = hora - parteInt;
        minutos = (parteInt * 60) + (parteReal * 100);
        printf("Minutos: %d\n", minutos);
        segundos = minutos * 60;
        printf("Segundos: %d\n", segundos);
    }

    return 0;
}
