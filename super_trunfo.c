#include <stdio.h>

int main() {
    struct Carta { // Define a estrutura das cartas com as suas variáveis
        char nome[50];
        char estado;
        char codigo[4];
        unsigned long int populacao;
        float area;
        float pib;
        int num_ponto_tur;
        float dens_pop;
        float pib_per_capita;
    };
    
    // Dados para a primeira carta
    struct Carta carta1 = {
        .nome = "São Paulo",
        .estado = 'A', // Corrigido para aspas simples
        .codigo = "A01",
        .populacao = 12325000,
        .area = 1521.11,
        .pib = 699.28,
        .num_ponto_tur = 50
    };

    // Cálculos para a carta1
    carta1.dens_pop = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / (float)carta1.populacao;

    // Dados para a segunda carta
    struct Carta carta2 = {
        .nome = "Rio de Janeiro",
        .estado = 'B', // Corrigido para aspas simples
        .codigo = "B02",
        .populacao = 6748000,
        .area = 1200.25,
        .pib = 300.5,
        .num_ponto_tur = 30,
    };

    // Cálculos para a carta2
    carta2.dens_pop = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / (float)carta2.populacao;

    // Menu e Escolhas
    int escolha1, escolha2;
    float soma1 = 0, soma2 = 0;

    printf("*** Bem-vindo ao Super Trunfo Países! ***\n\n");
    printf("Escolha dois atributos DIFERENTES para a batalha:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite o número da sua PRIMEIRA escolha: ");
    scanf("%d", &escolha1);
    printf("Digite o número da sua SEGUNDA escolha: ");
    scanf("%d", &escolha2);

    // Validação das escolhas
    if (escolha1 == escolha2 || escolha1 < 1 || escolha2 < 1 || escolha1 > 6 || escolha2 > 6) {
        printf("\nErro! Escolhas inválidas. Reinicie o programa e selecione novamente.\n");
        return 1;
    }

    // Lógica da Soma com operador ternário
    soma1 += (escolha1 == 1) ? (float)carta1.populacao : (escolha1 == 2) ? carta1.area : (escolha1 == 3) ? carta1.pib :
             (escolha1 == 4) ? (float)carta1.num_ponto_tur : (escolha1 == 5) ? (1.0f / carta1.dens_pop) :
             carta1.pib_per_capita;
    soma2 += (escolha1 == 1) ? (float)carta2.populacao : (escolha1 == 2) ? carta2.area : (escolha1 == 3) ? carta2.pib :
             (escolha1 == 4) ? (float)carta2.num_ponto_tur : (escolha1 == 5) ? (1.0f / carta2.dens_pop) :
             carta2.pib_per_capita;

    soma1 += (escolha2 == 1) ? (float)carta1.populacao : (escolha2 == 2) ? carta1.area : (escolha2 == 3) ? carta1.pib :
             (escolha2 == 4) ? (float)carta1.num_ponto_tur : (escolha2 == 5) ? (1.0f / carta1.dens_pop) :
             carta1.pib_per_capita;
    soma2 += (escolha2 == 1) ? (float)carta2.populacao : (escolha2 == 2) ? carta2.area : (escolha2 == 3) ? carta2.pib :
             (escolha2 == 4) ? (float)carta2.num_ponto_tur : (escolha2 == 5) ? (1.0f / carta2.dens_pop) :
             carta2.pib_per_capita;

    // Exibe os dados para comparação
    printf("\n*** Resultado da batalha ***\n");
    printf("Atributos escolhidos: %d e %d\n", escolha1, escolha2);

    printf("Soma da Carta 1 (%s): %.2f\n", carta1.nome, soma1);
    printf("Soma da Carta 2 (%s): %.2f\n", carta2.nome, soma2);

    if (soma1 > soma2) {
        printf("\nParabéns! Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (soma1 < soma2) {
        printf("\nParabéns! Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("\nResultado: Empate!\n");
    }
    
    return 0;
}
