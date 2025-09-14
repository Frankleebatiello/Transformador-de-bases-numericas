#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Converter_Para_Nova_Base(int Numero, int NovaBase)
{
    int Resto[100];
    int i = 0;

    while (Numero > 0)
    {
        Resto[i] = Numero % NovaBase;
        Numero = Numero / NovaBase;
        i++;
    }

    for (int r = i - 1; r >= 0; r--)
    {
        printf("%d", Resto[r]);
    }
    printf("\n");
}

int main()
{
    int Auxiliar;
    int BaseAtual, e, NovaBase, NovoNumero, Numero, Resultado;

    puts("Digite o numero que deseja transformar");
    printf("Numero: "),
        scanf("%d", &Numero);

    puts("Digite a base atual");
    printf("Base atual: "),
        scanf("%d", &BaseAtual);

    puts("Digite a base para qual deseja transforma-lo");
    printf("Nova base: "),
        scanf("%d", &NovaBase);

    if (BaseAtual == 10)
    {
        printf("O numero %d na base %d convertido para base %d e: ", Numero, BaseAtual, NovaBase);
        Converter_Para_Nova_Base(Numero, NovaBase);
    }
    else
    {
        e = 0;
        Resultado = 0;
        while (Numero > 0)
        {
            Auxiliar = Numero % 10;
            Resultado += Auxiliar * pow(BaseAtual, e);
            Numero /= 10;
            e++;
        }
        if (NovaBase == 10)
        {
            printf("O numero %d na base %d, convertido para base 10 e igual a %d", Numero, BaseAtual, NovaBase, Resultado);
        }
        else
        {
            printf("O numero convertido para base %d e: ", NovaBase);
            Converter_Para_Nova_Base(Resultado, NovaBase);
        }
    }

    return 0;
}
