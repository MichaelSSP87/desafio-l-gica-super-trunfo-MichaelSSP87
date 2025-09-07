#include <stdio.h>
#include <string.h>

int main() {
    // --- Definindo as propriedades das duas cartas ---
    
    // Carta 1
    char nomeCidade1[50];
    long populacao1;
    long pib1;

    // Carta 2
    char nomeCidade2[50];
    long populacao2;
    long pib2;
    
    // --- Entrada de Dados: Coletando as informações das cartas ---
    printf("=== Super Trunfo: Nivel Novato ===\n\n");
    
    // Cadastro da Carta 1
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%ld", &populacao1);
    printf("PIB: ");
    scanf("%ld", &pib1);
    
    printf("\n"); // Espaço para organizar a saída
    
    // Cadastro da Carta 2
    printf("--- Cadastro da Segunda Carta ---\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%ld", &popacao2);
    printf("PIB: ");
    scanf("%ld", &pib2);
    
    // --- Comparação das Cartas (usando Populacao) ---
    printf("\n--- Comparando as Cartas ---\n");
    printf("Atributo para comparacao: Populacao\n");

    // Lógica para determinar o vencedor
    if (populacao1 > populacao2) {
        // Se a populacao da primeira cidade for maior
        printf("\nA VENCEDORA E: %s\n", nomeCidade1);
        printf("Pois sua populacao (%ld) e maior que a de %s (%ld).\n", 
               populacao1, nomeCidade2, populacao2);
    } else if (populacao2 > populacao1) {
        // Se a populacao da segunda cidade for maior
        printf("\nA VENCEDORA E: %s\n", nomeCidade2);
        printf("Pois sua populacao (%ld) e maior que a de %s (%ld).\n", 
               populacao2, nomeCidade1, populacao1);
    } else {
        // Se as populacoes forem iguais
        printf("\nO jogo terminou em EMPATE!\n");
        printf("Ambas as cidades tem a mesma populacao de %ld.\n", populacao1);
    }

    return 0;
}
