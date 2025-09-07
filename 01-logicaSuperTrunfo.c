#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código compara duas cartas de cidades com base em uma propriedade fixa.

int main() {
    // --- 1. Definição das variáveis para armazenar as propriedades das cidades ---
    
    // Variáveis da Carta 1
    char nome_cidade1[50];
    float populacao1;
    float pib1;

    // Variáveis da Carta 2
    char nome_cidade2[50];
    float populacao2;
    float pib2;

    // --- 2. Cadastro das Cartas: Coletando os dados do usuário ---
    
    // Cadastro da primeira cidade
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao (em milhoes): ");
    scanf("%f", &populacao1);
    printf("PIB (em bilhoes de dolares): ");
    scanf("%f", &pib1);

    // Cadastro da segunda cidade
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao (em milhoes): ");
    scanf("%f", &populacao2);
    printf("PIB (em bilhoes de dolares): ");
    scanf("%f", &pib2);

    // --- 3. Comparação de Cartas: Decidindo o vencedor ---

    printf("\n--- Comparando as Cidades ---\n");

    // Vamos comparar o PIB das duas cidades. A cidade com o maior PIB vence.
    if (pib1 > pib2) {
        printf("A cidade vencedora e: %s\n", nome_cidade1);
        printf("Motivo: O PIB de %.2f e maior que o PIB de %.2f da cidade %s.\n", pib1, pib2, nome_cidade2);
    } else if (pib2 > pib1) {
        printf("A cidade vencedora e: %s\n", nome_cidade2);
        printf("Motivo: O PIB de %.2f e maior que o PIB de %.2f da cidade %s.\n", pib2, pib1, nome_cidade1);
    } else {
        printf("Houve um empate entre as cidades %s e %s no atributo PIB.\n", nome_cidade1, nome_cidade2);
    }

    // --- 4. Exibição dos Resultados: Fim do jogo ---
    printf("\n--- Fim do Jogo ---\n");
    
    return 0;
}
