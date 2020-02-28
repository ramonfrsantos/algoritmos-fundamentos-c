#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define Q 5

float opcao1(float n)
{
    printf("Digite um numero real qualquer: ");
    scanf("%f",&n);
    if (n < 0.0)
    {
        return n*(-1);
    }
    else
    {
        return n;
    }
}

float opcao2(float n1, float n2, float n3)
{
    printf("------ Digite 3 numeros: ");
    printf("\n\n");
    printf("Numero 1 - ");
    scanf("%f", &n1);
    printf("Numero 2 - ");
    scanf("%f",&n2);
    printf("Numero 3 - ");
    scanf("%f",&n3);

    if (n1 > n2 && n1 > n3)
        return n1;
    else
        if (n2 > n3)
            return n2;
        else
            return n3;
}

void opcao3(int vet[Q])
{
    int i;
    printf("O vetor na forma inversa e: \n");
    for (i = Q-1; i >= 0; i--)
    {
        printf("%d\t",vet[i]);
    }
}

void opcao4()
{
    int i, vet[Q], menor = vet[0], maior = vet[0];
    printf("Digite os valores que compoem o vetor: \n\n");
    for (i = 0; i < Q; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d",&vet[i]);
    }
    for (i = 0; i < Q; i++)
    {

        if (vet[0] > vet[i])
        {
            menor = vet[i];
            vet[0] = vet[i];
        }
        else
            menor = vet[0];
    }
    printf("\n------ O MENOR valor e %d.", menor);
    for (i = 0; i < Q; i++)
    {

        if (vet[0] < vet[i])
        {
            maior = vet[i];
            vet[0] = vet[i];
        }
        else
            maior = vet[0];
    }
    printf("\n------ O MAIOR valor e %d.", maior);
}

int opcao5(int vet[Q])
{
    int i, cont = 0, x;
    printf("\n\nDigite um numero: ");
    scanf("%d", &x);
    printf("\n");
    for (i = 0; i < Q; i++)
    {
        if (x == vet[i])
        {
            cont++;
            break;
        }
    }
    return (cont == 1 ? i + 1 : -1 );
}

void opcao6(int vetDados[Q],int vetPosic[])
{
    int i, j, cont = 0, x;
    printf("Digite os valores que preenchem o vetor: \n\n");
    for (i = 0; i < Q; i++)
    {
        printf("Valor %d: ",i+1);
        scanf("%d",&vetDados[i]);
    }

    system("cls");

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("\n");
    printf("O vetor com os valores das posicoes que repetem e: \n\n");
    for (i = 0; i < Q; i++)
    {
        if (x == vetDados[i])
        {
            vetPosic[i] = i + 1;
            printf("%d\t", vetPosic[i]);
        }
    }
    printf("\n");
}


int main()
{
    srand(time(NULL));
    int escolha, i, j, vet[Q], cont;
    float n, n1, n2, n3;
    do
    {
        printf("MENU\n0 -  Sair\n");
        printf("1 -  Determinar o modulo um numero\n");
        printf("2 -  Determinar o maior valor de um conjunto de 3 valores\n");
        printf("3 -  Imprimir um vetor de forma reversa\n");
        printf("4 -  Determinar o menor e o maior valor de um vetor\n");
        printf("5 -  Determinar a posicao da primeira ocorrencia de um elemento 'x' em um vetor\n");
        printf("6 -  Determinar as posicoes de ocorrencia de um elemento 'x' em um vetor\n");
        printf("\n\nDigite uma opcao para o menu acima: ");
        scanf("%d",&escolha);

        system("cls");

        switch(escolha)
        {
            case 0:
                printf("------ Obrigado por utilizar o programa.\n------ VOLTE SEMPRE!!!");
                system("pause>>NULL");
                exit(0);
            break;

            case 1:
                printf("O valor absoluto e %f.",opcao1(n));
                system("pause>>NULL");
                break;

            case 2:
                printf("\nO maior valor e %f.",opcao2(n1,n2,n3));
                system("pause>>NULL");
                break;

            case 3:
                printf("Digite os valores que preenchem o vetor: \n\n");
                for (i = 0; i < Q; i++)
                {
                    printf("Valor %d: ",i+1);
                    scanf("%d",&vet[i]);
                }
                printf("\nO vetor na forma original e: \n");
                for (i = 0; i < Q; i++)
                {
                    printf("%d\t",vet[i]);
                }
                printf("\n\n");
                opcao3(vet);
                system("pause>>NULL");
                break;

            case 4:
                opcao4();
                system("pause>>NULL");
                break;

            case 5:
                printf("Digite os valores que preenchem o vetor: \n\n");
                for (i = 0; i < Q; i++)
                {
                    printf("Valor %d: ",i+1);
                    scanf("%d",&vet[i]);
                }
                system("cls");
                printf("O vetor na forma original e: \n");
                for (i = 0; i < Q; i++)
                {
                    printf("%d\t",vet[i]);
                }
                printf("\n");
                if (opcao5(vet) == -1 ? printf("O valor aparece nao aparece no vetor!") : printf("O valor aparece primeiro na posicao %d.", i-1));
                system("pause>NULL");
                break;

            case 6:
                opcao6(vet, vet);
                system("pause>NULL");
                break;

        }
        system("cls");
    }while(escolha >= 0 && escolha <= 6);
    return 0;
}


