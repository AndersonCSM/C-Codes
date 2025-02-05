/*
Anderson Carlos da Silva Morais
Projeto para desenvolver uma calculadora b�sica com as quatro opera��es: +, -, *, /
Para dois n�meros
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc = 1;

    while (opc != 0)
    {
        float n1 = 0, n2 = 0, res = 0;

        printf("Programa Calculadora 1.0\n");
        printf("Opera��es:\n");
        printf("1 - adi��o (+)\n");
        printf("2 - subtra��o (-)\n");
        printf("3 - multiplica��o (*)\n");
        printf("4 - divis�o (/)\n");
        printf("0 - sair\n");

        printf("Qual opera��o ser� realizada?\n");
        scanf("%d", &opc);

        printf("Informe os dois n�meros a serem realizados a opera��o\n");
        scanf("%f %f", &n1, &n2);

        switch (opc)
        {
        case 1:
            res = n1 + n2;
            break;

        case 2:
            res = n1 - n2;
            break;

        case 3:
            res = n1 * n2;
            break;

        case 4:
            res = n1 / n2;
            break;

        default:
            printf("Op��o inv�lida! \n");
        }

        if (opc != 0){
            char opc2 = 's';
            printf("O resultado da opera��o � %.2f\n", res);

            while (1)
            {
                printf("Deseja realizar outra opera��o? [s/n]\n");
                scanf(" %c", &opc2);
                while (getchar() != '\n')
                    ; // Limpar o buffer de entrada
                if (opc2 == 's')
                {
                    break;
                }
                else if (opc2 == 'n')
                {
                    opc = 0;
                    printf("Finalizando a calculadora!\n");
                    break;
                }
                else
                {
                    printf("Op��o inv�lida\n");
                }
            }
        }
    }
    return (0);
}