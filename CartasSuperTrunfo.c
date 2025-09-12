#include<stdio.h>
#include<string.h>

int main(){
    //Declaração das variáveis
    char cidade[2],cidade2[2];
    char codigo[4],codigo2[4];
    char nome[50],nome2[50];
    int populacao = 0,populacao2 = 0;
    float area = 0.0,area2 = 0.0;
    float pib = 0.0,pib2 = 0.0;
    int turismo = 0,turismo2 = 0;
    
    //Apresentação do programa
    printf("\n");
    printf("Bem Vindo ao Super Trunfo \n");
    printf("\n");

    printf("Digite as informacoes da primeira carta! \n");
    printf("\n");

    //Entrada de dados da primeira carta
    printf("Carta 1 \n");
    printf("\n");

    printf("Digite a cidade: \n");
    scanf(" %s", cidade);

    printf("Digite o Codigo da cidade: \n");
    scanf(" %s", codigo);

    printf("Digite o Nome da Cidade: \n");
    getchar(); // limpa o \n que ficou no buffer
    fgets(nome,50,stdin);
    nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha
    
    printf("Digite a Populacao da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf(" %d", &turismo);
    printf("\n");
    printf("\n");


    printf("Digite as informacoes da segunda carta! \n");
    printf("\n");
    //Entrada de dados da segunda carta
    printf("Carta 2 \n");
    printf("\n");

    printf("Digite a cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite o Codigo da cidade: \n");
    scanf(" %s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    getchar(); // limpa o \n que ficou no buffer
    fgets(nome2,50,stdin);
    nome2[strcspn(nome2, "\n")] = 0; // Remove o caractere de nova linha
    
    printf("Digite a Populacao da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB do cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf(" %d", &turismo2);
    printf("\n");
    printf("\n");

    //Saída de dados da primeira e segunda carta
    printf("Carta 1 \n");
    printf("cidade: %s \n", cidade);
    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao da cidade: %d \n", populacao);
    printf("area da cidade: %.2f \n", area);
    printf("PIB da cidade: %.2f \n", pib);
    printf("Numero de pontos turisticos da cidade: %d \n", turismo);
    printf("\n");
    printf("Carta 2 \n");
    printf("cidade: %s \n", cidade2);
    printf("Codigo da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Populacao da cidade: %d \n", populacao2);
    printf("area da cidade: %.2f \n", area2);
    printf("PIB da cidade: %.2f \n", pib2);
    printf("Numero de pontos turisticos da cidade: %d \n", turismo2);
    
    return 0;
}