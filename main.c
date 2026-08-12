/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void menu()
{
    printf("Opções:\n");
    printf("1 - inserir\n");
    printf("2 - consultar\n");
    printf("3 - remover\n");
    printf("4 - listar\n");
    printf("5 - sair\n");
}

int main()
{
    int lista[20];
    int ocupados = 0;
    int codigo = 0;
    int valor;
    int posicao;
    
    while(codigo != 5)
    {
        menu();
        printf("Digite sua opção:");
        scanf("%d", &codigo);
        
        if(codigo == 1)
        {
            if(ocupados == 20)
            {
                printf("Lista cheia.\n");
                continue;
            }
            printf("Digite o valor: ");
            scanf("%d", &valor);
            printf("Digite a posição  (de 1 a 20): ");
            scanf("%d", &posicao);
            posicao--;
            if (ocupados < posicao)
            {
                lista[ocupados] = valor;
            }
            else
            {
                for(int i = ocupados; posicao < i; i--)
                {
                    lista[i] = lista[i-1];
                }
                lista[posicao] = valor;
            }
            ocupados++;
        }
        if(codigo == 3)
        {
            if(ocupados == 0)
            {
                printf("Lista vazia.\n");
                continue;
            }
            printf("Digite a posição  (de 1 a 20): ");
            scanf("%d", &posicao);
            posicao--;
            if (ocupados <= posicao)
            {
                printf("Posição vazia.\n");
                continue;
            }
            else
            {
                for(int i = posicao; posicao < ocupados; i++)
                {
                    lista[i] = lista[i+1];
                }
                lista[posicao] = valor;
            }
            ocupados--;
        }
        
    }
    
    for(int i = 0; i < ocupados; i++) {
        printf("%d\n",  lista[i]);
    }

    printf("Fim do programa");
    return 0;
}
