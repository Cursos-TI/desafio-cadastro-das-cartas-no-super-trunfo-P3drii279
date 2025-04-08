#include <stdio.h>
#include <string.h>

// Definição da estrutura Carta
typedef struct {
    char estado[30];
    char codigo[10];
    char cidade[30];
    int populacao;
    float area;
    float PIB;
    int Turistas;
} Carta;

// Função para imprimir os atributos de uma carta
void imprimirCarta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.PIB);
    printf("Turistas: %d\n", carta.Turistas);
}

// Cadastro das cartas
int main() {
    Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%29s", carta1.estado);
    printf("Código: ");
    scanf("%9s", carta1.codigo);
    printf("Cidade: ");
    scanf("%29s", carta1.cidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.PIB);
    printf("Turistas: ");
    scanf("%d", &carta1.Turistas);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%29s", carta2.estado);
    printf("Código: ");
    scanf("%9s", carta2.codigo);
    printf("Cidade: ");
    scanf("%29s", carta2.cidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.PIB);
    printf("Turistas: ");
    scanf("%d", &carta2.Turistas);

    // Imprimir os atributos das cartas
    printf("\nCarta 1:\n");
    imprimirCarta(carta1);
    printf("\nCarta 2:\n");
    imprimirCarta(carta2);

    return 0;
}