
/******************************************************************************

Situação Problema: (RESOLVER EM PORTUGUÊS)

Você precisa armazenar uma lista de códigos numéricos, a capacidade desta lista é de no máximo 20 posições.
Os códigos numéricos são todos inteiros (positivos e negativos). Os códigos devem ser inseridos conforme informado pelo usuário.
Seu programa deverá permitir (DESCREVER EM PORTUGUÊS): 
a - Consultar a posição (0 a 19); Imprimir o código numérico na tela.
b - Inserção de um novo elemento na posição indicada pelo usuário; Se o usuário indicar uma posição ocupada, os elementos subsequentes devem "andar uma posição" para o final; Se o usuário indicar uma posição maior que o número de posições ocupadas, o item será inserido na primeira posição livre (se não estiver cheia).
c - Retirar um elemento indicado pelo usuário (usuário informa a posição); Se houver elementos posteriores, estes devem tomar a posição que ficou livre;
d - Consultar a quantidade de posições ocupadas na lista;

Dicas: 
i. Usar um vetor de inteiros de 20 posições; 
ii. armazenar em um número inteiro a quantidade de elementos ocupados; se ocupados é igual a zero, significa que o vetor está vazio, se ocupados é igual a 20 significa que a lista está cheia;

1 - descrever em Português o processo que deve acontecer em cada um dos itens (a,b,c,d);
2 - descrever quais problemas podem ocorrer nos itens (a,b,c,d); (caso haja);
3 - descrever (pelo menos) um caso de teste para cada item (a,b,c,d) que permitam saber se estes estão funcionando adequadamente;

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
                printf("!!! Lista cheia.\n");
                continue;
            }
            printf("Digite o valor: ");
            scanf("%d", &valor);
            printf("Digite a posição (de 1 a 20): ");
            scanf("%d", &posicao);
            if (posicao < 1 || posicao > 20)
            {
                printf("Erro!!! Informar posição (de 1 a 20)");
                continue;
            }
            posicao--;
            if (ocupados < posicao)
            {
                lista[ocupados] = valor;
                printf("- Valor %d inserido na posicao %d -\n", valor, ocupados + 1);
            }
            else
            {
                for(int i = ocupados; posicao < i; i--)
                {
                    lista[i] = lista[i-1];
                }
                lista[posicao] = valor;
                printf("- Valor %d inserido na posicao %d -\n", valor, posicao + 1);
            }
            ocupados++;
        }
        else if (codigo == 2)
        {
            if(ocupados == 0)
            {
                printf("!!! Lista vazia.\n");
                continue;
            }
            printf("Digite a posição  (de 1 a 20): ");
            scanf("%d", &posicao);
            if (posicao < 1 || posicao > 20)
            {
                printf("Erro!!! Informar posição (de 1 a 20)");
                continue;
            }
            posicao--;
            if (ocupados <= posicao)
            {
                printf("!!! Posição vazia.\n");
            }
            else
            {
                printf("Valor da posição %d: %d\n", posicao + 1, lista[posicao]);
            }
        }
        else if (codigo == 3)
        {
            if(ocupados == 0)
            {
                printf("!!! Lista vazia.\n");
                continue;
            }
            printf("Digite a posição  (de 1 a 20): ");
            scanf("%d", &posicao);
            if (posicao < 1 || posicao > 20)
            {
                printf("Erro!!! Informar posição (de 1 a 20)");
            }
            posicao--;
            if (ocupados <= posicao)
            {
                printf("!!! Posição vazia.\n");
            }
            else
            {
                valor = lista[posicao];
                for(int i = posicao; i < ocupados; i++)
                {
                    lista[i] = lista[i+1];
                }
                ocupados--;
                printf("- Valor %d removido da posicao %d -\n", valor, posicao + 1);
            }
        }
        else if (codigo == 4)
        {
            if (ocupados == 0)
            {
                printf("!!! Lista vazia\n");
            }
            else
            {
                printf("[ %d", lista[0]);
                for(int i = 1; i < ocupados; i++)
                {
                    printf(", %d",  lista[i]);
                }
                printf(" ]\n");
            }
        }
        else if (codigo < 1 || codigo > 5)
        {
            printf("!!! Opção inválida\n");
        }
        
    }
    
    for(int i = 0; i < ocupados; i++) {
        printf("%d\n",  lista[i]);
    }

    printf("! Fim do programa !\n");
    return 0;
}
