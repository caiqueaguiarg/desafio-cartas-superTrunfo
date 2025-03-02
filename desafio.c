#include <stdio.h>

int main(){
    int carta1 = 1;
    char estadoC1;
    char codigoCartaC1[3], nomeCidadeC1[25];
    int populacaoC1, pontosTuristicosC1;
    float areaKM2C1, PIBC1;

    int carta2 = 2;
    char estadoC2;
    char codigoCartaC2[3], nomeCidadeC2[25];
    int populacaoC2, pontosTuristicosC2;
    float areaKM2C2, PIBC2;

    printf("Digite os dados da Primeira carta:\n");
    printf("Estado:\n");
    scanf(" %c",&estadoC1);

    printf("Codigo Carta:\n");
    scanf("%s", &codigoCartaC1);

    printf("Nome Cidade:\n");
    scanf("%s", &nomeCidadeC1);

    printf("Populacao:\n");
    scanf("%d", &populacaoC1);

    printf("Pontos Turisticos:\n");
    scanf("%d", &pontosTuristicosC1);

    printf("Area KM2:\n");
    scanf("%f", &areaKM2C1);

    printf("PIB:\n");
    scanf("%f", &PIBC1);


    printf("Digite os dados da Segunda carta:\n");
    printf("Estado:\n");
    scanf(" %c",&estadoC2);

    printf("Codigo Carta:\n");
    scanf("%s", &codigoCartaC2);

    printf("Nome Cidade:\n");
    scanf("%s", &nomeCidadeC2);

    printf("Populacao:\n");
    scanf("%d", &populacaoC2);

    printf("Pontos Turisticos:\n");
    scanf("%d", &pontosTuristicosC2);

    printf("Area KM2:\n");
    scanf("%f", &areaKM2C2);

    printf("PIB:\n");
    scanf("%f", &PIBC2);

    printf("Dados Primeira Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area: %f  km²\n PIB: %2.f bilhoes de reais", carta1, estadoC1, codigoCartaC1, nomeCidadeC1, populacaoC1, pontosTuristicosC1,areaKM2C1,PIBC1);

    printf("Dados Segunda Carta: \n Carta: %d \n Estado: %c \n Codigo: %s \n Nome da Cidade: %s \n Populacao: %d \n Pontos Turisticos: %d \n Area:%f km²\n PIB: %2.f bilhoes de reais", carta2, estadoC2, codigoCartaC2, nomeCidadeC2, populacaoC2, pontosTuristicosC2,areaKM2C2,PIBC2);

    return 0;
}