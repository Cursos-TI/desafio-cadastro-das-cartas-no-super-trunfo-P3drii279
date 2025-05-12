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
    float Densidade;
    float PIBpercapita;
    int divisao;

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
    printf("Densidade Populacional: %.2f\n", carta.Densidade);
    printf("PIB per Capita: %.2f\n", carta.PIBpercapita);
}

// Cadastro das cartas
int main() {
    Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado: ");
    scanf("%29s", carta1.estado);
    printf("Digite o Código da Carta: ");
    scanf("%9s", carta1.codigo);
    printf("Digite a Cidade: ");
    scanf("%29s", carta1.cidade);
    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.PIB);
    printf("Digite a Quantidade de Turistas: ");
    scanf("%d", &carta1.Turistas);
    carta1.Densidade = carta1.populacao / carta1.area;
    carta1.PIBpercapita = carta1.PIB / carta1.populacao;
    printf("\n"); // pula uma linha

    
    printf("Cadastro da Carta 2:\n");
    printf("Digite o Estado: ");
    scanf("%29s", carta2.estado);
    printf("Digite o Código da Carta: ");
    scanf("%9s", carta2.codigo);
    printf("Digite a Cidade: ");
    scanf("%29s", carta2.cidade);
    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.PIB);
    printf("Digite a Quantidade de Turistas: ");
    scanf("%d", &carta2.Turistas);
    carta2.Densidade = carta2.populacao / carta2.area;
    carta2.PIBpercapita = carta2.PIB / carta2.populacao;
    printf("\n"); // pula uma linha

    
    // Imprimir os atributos das cartas
    printf("*** SUPER TRUNFO ***\n");

    printf("\nCarta 1:\n");
    imprimirCarta(carta1);
    printf("\nCarta 2:\n");
    imprimirCarta(carta2);

    return 0;
}