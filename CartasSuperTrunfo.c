#include <stdio.h>


int main() {
    char est1, est2;
    int pop1, pop2, pont1, pont2, cid1, cid2;
    float area1, area2, pib1, pib2, dens1, dens2, ppc1, ppc2;

    printf("Cadastro da primeira carta\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &est1);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cid1);
    printf("Insira a população: ");
    scanf("%d", &pop1);
    printf("Insira a área: ");   
    scanf("%f", &area1);
    printf("Insira o PIB: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &pont1);

    printf("Cadastro da segunda carta\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &est2);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cid2);
    printf("Insira a população: ");
    scanf("%d", &pop2);
    printf("Insira a área: ");   
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &pont2);

    dens1 = (float) pop1/area1;
    dens2 = (float) pop2/area2;
    ppc1 = (float) pib1/pop1;
    ppc2 = (float) pib2/pop2;

    printf("Carta 1:\n");
    printf("Código: %c%02d\n", est1, cid1);
    printf("População: %d habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pont1);
    printf("Densidade populacional: %.2f hab/km²\n", dens1);
    printf("PIB per capita: %.2f reais\n\n", ppc1);

    printf("Carta 2:\n");
    printf("Código: %c%02d\n", est2, cid2);
    printf("População: %d habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pont2);
    printf("Densidade populacional: %.2f hab/km²\n", dens2);
    printf("PIB per capita: %.2f reais\n", ppc2);

    return 0;
}
