#include<stdio.h>
#include<string.h>

int main(){
    //Declaração das variáveis
    char estado[2],estado2[2],codigo[4],codigo2[4],nome[50],nome2[50];
    int populacao = 0,populacao2 = 0,turismo = 0,turismo2 = 0;
    float area = 0.0,area2 = 0.0,pib = 0.0,pib2 = 0.0, densidadepop = 0.0, densidadepop2 = 0.0, percapita = 0.0, percapita2 = 0.0;   

    //Apresentação do programa
    printf("\n");
    printf("Bem Vindo ao Super Trunfo \n");
    printf("\n");
    
    //Entrada de dados da primeira carta
    printf("Digite as informacoes da primeira carta! \n");
    printf("\n");

    printf("Carta 1 \n");
    printf("\n");

    printf("Digite o estado: \n");
    scanf(" %s", estado);

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

    //função de calculo da densidade populacional
    densidadepop = (float)populacao / area;

    //função do calculo do PIB per Capita
    percapita = (pib*1000000000) / populacao;

    printf("\n");
    printf("\n");

    //Entrada de dados da segunda carta
    printf("Digite as informacoes da segunda carta! \n");
    printf("\n");
   
    printf("Carta 2 \n");
    printf("\n");

    printf("Digite o estado: \n");
    scanf(" %s", estado2);

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
    
    //função de calculo da densidade populacional
    densidadepop2 = (float)populacao2 / area2;

    //função que calcula o PIB per Capita
    percapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n");
    printf("\n");

    //Saída de dados da primeira e segunda carta
    printf("Carta 1 \n");
    printf("cidade: %s \n", estado);
    printf("Codigo da cidade: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("Populacao da cidade: %d \n", populacao);
    printf("Area da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f bilhões de reais \n", pib);
    printf("Numero de pontos turisticos da cidade: %d \n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB per Capita: %.2f reais \n",percapita);
    printf("\n");
    printf("Carta 2 \n");
    printf("cidade: %s \n", estado2);
    printf("Codigo da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Populacao da cidade: %d \n", populacao2);
    printf("Area da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f bilhões de reais \n", pib2);
    printf("Numero de pontos turisticos da cidade: %d \n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais \n",percapita2);
    return 0;

}