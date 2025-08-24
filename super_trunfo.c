#include <stdio.h>

int main(){
    struct Carta // Define estruta das cartas com as suas variáveis
    {
        char nome[50];
        char estado;
        char codigo[4];
        int populacao;
        float area;
        float pib;
        int num_ponto_tur;
    };
    
    printf("Bem vindo ao Super Trunfo de Países!\n\n");

    struct Carta carta1; // Definindo a primeira carta

    printf("Vamos definir os valores da carta 1\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", carta1.nome);

    printf("Digite o estado da cidade:\n");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", carta1.codigo);

    printf("Digite a população da cidade:\n");
    scanf("%i", &carta1.populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%i", &carta1.num_ponto_tur);

    struct Carta carta2; // Definindo a segunda carta

    printf("Vamos definir os valores da carta 2\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", carta2.nome);

    printf("Digite o estado da cidade:\n");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da cidade:\n");
    scanf("%s", carta2.codigo);

    printf("Digite a população da cidade:\n");
    scanf("%i", &carta2.populacao);

    printf("Digite a area da cidade:\n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%i", &carta2.num_ponto_tur);

    printf("\nOk! Então temos a carta 1 com esses dados:\n");
    printf("Nome da cidade: %s\n", carta1.nome);
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("População: %i\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de pontos turisticos: %i\n", carta1.num_ponto_tur);

    printf("\nE temos a carta 2 com esses dados:\n");
    printf("Nome da cidade: %s\n", carta2.nome);
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("População: %i\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de pontos turisticos: %i\n", carta2.num_ponto_tur);

    return 0;
}