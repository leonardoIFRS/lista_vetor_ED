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
            if (ocupados > posicao)
            {
                lista[ocupados] = valor
            }
            else
            {
                for(int i = ocupados-1; posicao >= i; i--)
                {
                    lista[i+1] = lista[i];
                }
            }
        }
        
    }
    
    printf("Fim do programa")
    return 0;
}