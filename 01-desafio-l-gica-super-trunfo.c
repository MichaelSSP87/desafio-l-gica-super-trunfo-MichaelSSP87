#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de cidade
struct Carta {
    char estado[50];
    int codigo;
    char nome[50];
    long populacao;
    float area;
    long pib;
    int pontosTuristicos;
};

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta) {
    printf("--- Propriedades da Carta ---\n");
    printf("Codigo da Carta: %d\n", carta.codigo);
    printf("Estado: %s\n", carta.estado);
    printf("Cidade: %s\n", carta.nome);
    printf("Populacao: %ld habitantes\n", carta.populacao);
    printf("Area: %.2f km2\n", carta.area);
    printf("PIB: %ld\n", carta.pib);
    printf("Pontos Turisticos: %d\n", carta.pontosTuristicos);
    printf("-----------------------------\n");
}

int main() {
    struct Carta carta1;
    struct Carta carta2;

    printf("=== Super Trunfo - Nivel Novato ===\n");
    printf("--- Cadastro da Carta 1 ---\n");

    // Coleta de dados para a Carta 1
    printf("Digite o codigo da carta: ");
    scanf("%d", &carta1.codigo);
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Digite a populacao: ");
    scanf("%ld", &carta1.populacao);
    printf("Digite a area (em km2): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%ld", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n--- Cadastro da Carta 2 ---\n");
    
    // Coleta de dados para a Carta 2
    printf("Digite o codigo da carta: ");
    scanf("%d", &carta2.codigo);
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Digite a populacao: ");
    scanf("%ld", &carta2.populacao);
    printf("Digite a area (em km2): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%ld", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibe as cartas cadastradas
    printf("\n--- Cartas Cadastradas ---\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    // --- Lógica de Comparação (Propriedade escolhida: Populacao) ---
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Atributo de comparacao: Populacao\n");

    // Regra: o maior valor vence
    if (carta1.populacao > carta2.populacao) {
        printf("A carta 1 (%s) venceu! (Populacao: %ld > %ld)\n", carta1.nome, carta1.populacao, carta2.populacao);
    } else if (carta2.populacao > carta1.populacao) {
        printf("A carta 2 (%s) venceu! (Populacao: %ld > %ld)\n", carta2.nome, carta2.populacao, carta1.populacao);
    } else {
        printf("As cartas empataram na populacao! (Populacao: %ld = %ld)\n", carta1.populacao, carta2.populacao);
    }

    return 0;
}
