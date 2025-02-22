#include <stdio.h>

int main() {
    
    //CARTA 1
    
    char estado;
    char codigo[11];
    char cidade[51];
    int populacao;
    float area;
    float pib;
    int pontos;
    
    printf("Dados da Carta 1\n\n");
    
    printf("Digite o Estado:\n");
    scanf("%c", &estado);
    
    printf("Digite o Código da Carta:\n");
    scanf("%s", &codigo);
    
    printf("Digite o Nome da Cidade:\n");
    scanf("%[^\n]", cidade);
    scanf("%*[^\n]"); scanf("%*c");
    scanf("%[^\n]", cidade);
    
    printf("Digite a População da Cidade:\n");
    scanf("%d", &populacao);
    
    printf("Digite a Área desta Cidade:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib);
    
    printf("Digite o Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &pontos);
    
    printf("\nEstado: %c\nCódigo da Carta: %s\nCidade: %s\n", estado, codigo, cidade);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nPontos Turísticos: %d\n\n", populacao, area, pib, pontos);
    
    //CARTA 2

    char estado2;
    char codigo2[11];
    char cidade2[51];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
    printf("Dados da Carta 2\n\n");
    
    printf("Digite o Estado:\n");
    scanf("%s", &estado2);
    
    
    printf("Digite o Código da Carta:\n");
    scanf("%s", &codigo2);
    
    printf("Digite o Nome da Cidade:\n");
    scanf("%[^\n]", cidade2);
    scanf("%*[^\n]"); scanf("%*c");
    scanf("%[^\n]", cidade2);
    
    printf("Digite a População da Cidade:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a Área desta Cidade:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &pontos2);
    
    printf("\nEstado: %c\nCódigo da Carta: %s\nCidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de Reais\nPontos Turísticos: %d\n\n", populacao2, area2, pib2, pontos2);
    
    return 0;
    
    }
    
