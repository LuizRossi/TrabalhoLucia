#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3



typedef struct Dados{
float altura,peso;
int idade;
}Dados;


void imprimirDados(Dados dados){

printf("Altura: %.2f m",dados.altura);
printf("\tPeso: %.2f Kg ",dados.peso);
printf("\tIdade: %d Anos",dados.idade);

}

Dados preencherDados()
{
    Dados dados;
    printf("Digite sua Altura: \n");
    scanf("%f",&dados.altura);
    printf("Digite seu peso: \n");
    scanf("%f",&dados.peso);
    printf("Digite sua idade:\n");
    scanf("%d",&dados.idade);
    return dados;

}


/*(int bubbleSort()
{
     setlocale(LC_ALL,"");
    int numeros[TAM];
    int i,aux,contador;
    printf("Entre com dez numeros para preencher o array e pressione enter apos digitar cada um:\n");
    for(i=0;i<TAM;i++)
    {
        scanf("%d",&numeros[i]);
    }
    printf("Ordem atual dos itens no array :\n");

    for(i=0;i<TAM;i++)
    {
      printf("%4d",numeros[i]);
    }

    //Algoritmo de ordenação BubbleSort (Percorre o vetor da esquerda para a direita comparando exemplo p1 é maior que p2 se sim troca de valores )
     for(contador=1;contador<TAM;contador++)//contador percorre ate a posição anterior do fim
     {
       for(i=0;i<TAM-1;i++){//contador das posiçoes do vetor
         if(numeros[i]>numeros[i+1])
         {
             //troca de valores da posição anterios para a seguinte se o valor da posição anterios for maior que a seguinte
             aux=numeros[i];
             numeros[i]=numeros[i+1];
             numeros[i+1]=aux;
         }

         }
     }

     printf("\n Elementos do vetor em ordem crescente: \n  ");
     for(i=0;i<TAM;i++)
     {
         printf("%4d",numeros[i]);
     }
     printf("\n");
     return numeros[i];
}

*/




int main()
{
int i;
Dados dados1[TAM];
for(i=0;i<TAM;i++)
{
dados1[i] = preencherDados();
printf("\n");
}
for(i=0;i<TAM;i++)
{
    printf("\n");
imprimirDados(dados1[i]); 
  printf("\n");
}



return 0;
}



