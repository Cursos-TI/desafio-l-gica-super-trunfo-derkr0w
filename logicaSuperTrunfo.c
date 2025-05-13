#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

    int main() {

    //[VARIÁVEIS DAS CARTAS]//

    char estadoA[30], estadoB[30];
    char codigoA[10], codigoB[10];
    char cidadeA[30], cidadeB[30];
    int populacaoA, populacaoB;
    int pontA, pontB;
    float areaA, areaB;
    float pibA, pibB;
    float densA, densB;
    float pibCaptaA, pibCaptaB;
    float superA, superB;
    float densInvA;
    float densInvB;

    //[VARIÁVEIS DE REGRAS]//
    
    int opcao;
    int atributo1;
    int atributo2;
    int resultado;
    float totalA, totalB;
    float ataqueA1, ataqueB1;
    float ataqueA2, ataqueB2;
    float somaA, somaB;

    //[MENU INICIAL]//

    printf("Bem vindo ao jogo SUPER TRUNFO CIDADES DO BRASIL!\n");
    printf("\nEscolha uma opção:\n1. INICIAR JOGO\n2. CRÉDITOS\n3. SAIR\n");
    scanf("%d", &opcao);
    system("clear");

    switch (opcao){
    
    case 1:      

    //[CARTA 1]//

    printf("\n[CARTA 1] Digite o nome do estado:\n");
    scanf(" %[^\n]", estadoA);
    limparBuffer();

    printf("[CARTA 1] Digite o código do estado:\n");
    scanf("%s", codigoA);
    limparBuffer();

    printf("[CARTA 1] Digite o nome da cidade:\n");
    scanf("%[^\n]", cidadeA);
    limparBuffer();

    printf("[CARTA 1] Digite a população da cidade:\n");
    scanf("%d", &populacaoA);
    limparBuffer();

    printf("[CARTA 1] Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontA);
    limparBuffer();

    printf("[CARTA 1] Digite a área da cidade em km² (ex: 123.4):\n");
    scanf("%f", &areaA);
    limparBuffer();

    printf("[CARTA 1] Digite o PIB da cidade (ex 12.3):\n");
    scanf("%f", &pibA);
    limparBuffer();
    pibA *= 1000000;  // valor digitado será considerado em milhões

    densA = (float) populacaoA / areaA;
    pibCaptaA = (float) pibA / populacaoA;
    densInvA = (float) 1 / densA;
    superA = (float) populacaoA + areaA + pibA + pibCaptaA + densInvA + pontA;

    system("clear");
    printf("[CARTA 1 REGISTRADA COM SUCESSO!]\n\n");

    //[CARTA 2]//

    printf("[CARTA 2] Digite o nome do estado:\n");
    scanf("%[^\n]", estadoB);
    limparBuffer();

    printf("[CARTA 2] Digite o código do estado:\n");
    scanf("%s", codigoB);
    limparBuffer();

    printf("[CARTA 2] Digite o nome da cidade:\n");
    scanf("%[^\n]", cidadeB);
    limparBuffer();

    printf("[CARTA 2] Digite a população da cidade:\n");
    scanf("%d", &populacaoB);
    limparBuffer();

    printf("[CARTA 2] Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontB);
    limparBuffer();

    printf("[CARTA 2] Digite a área da cidade em km² (ex: 123.4):\n");
    scanf("%f", &areaB);
    limparBuffer();

    printf("[CARTA 2] Digite o PIB da cidade (ex 12.3):\n");
    scanf("%f", &pibB);
    limparBuffer();
    pibB *= 1000000;

    densB = (float) populacaoB / areaB;
    pibCaptaB = (float) pibB / populacaoB;
    densInvB = (float) 1 / densB;
    superB = (float) populacaoB + areaB + pibB + pibCaptaB + densInvB + pontB;

    system("clear");
    printf("[CARTA 2 REGISTRADA COM SUCESSO!]\n");

    //[APRESENTAÇÃO DE DADOS]//

    printf("\n[CARTA 1]\n");
    printf("Estado: %s\nCódigo: %s\n", estadoA, codigoA);
    printf("Cidade: %s\nPopulação: %d\n", cidadeA, populacaoA);
    printf("Área: %.1f km²\nPIB: %.1f bilhões\nPontos Turísticos: %d\n", areaA, pibA / 1000000, pontA);
    printf("Densidade Populacional: %.1f hab./km²\nPIB per capita: %.1f\n\n", densA, pibCaptaA);

    printf("[CARTA 2]\n");
    printf("Estado: %s\nCódigo: %s\n", estadoB, codigoB);
    printf("Cidade: %s\nPopulação: %d\n", cidadeB, populacaoB);
    printf("Área: %.1f km²\nPIB: %.1f bilhões\nPontos Turísticos: %d\n", areaB, pibB / 1000000, pontB);
    printf("Densidade Populacional: %.1f hab./km²\nPIB per capita: %.1f\n", densB, pibCaptaB);

    //[COMPARAÇÃO DE ATRIBUTOS DAS CARTAS]//

    printf("\n[ESCOLHA O PRIMEIRO ATRIBUTO A SER COMPARADO!]\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6. PIB per capita\n7. SUPER PODER\n");
    scanf("%d", &atributo1);

    switch (atributo1) {

        case 1: //COMPARAÇÃO DE POPULAÇÃO

        ataqueA1 = populacaoA;
        ataqueB1 = populacaoB;

        if (populacaoA > populacaoB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 2: //COMPARAÇÃO DE ÁREA

        ataqueA1 = areaA;
        ataqueB1 = areaB;

        if (areaA > areaB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 3: //COMPARAÇÃO DE PIB

        ataqueA1 = pibA;
        ataqueB1 = pibB;

        if (pibA > pibB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;
        
        case 4: //COMPARAÇÃO DE PONTOS TURÍSTICOS

        ataqueA1 = pontA;
        ataqueB1 = pontB;

        if (pontA > pontB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 5: //COMPARAÇÃO DE DENSIDADE POPULACIONAL INVERTIDA

        ataqueA1 = densInvA;
        ataqueB1 = densInvB;

        if (densInvA > densInvB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 6: //COMPARAÇÃO DE PIB PER CAPITA

        ataqueA1 = pibCaptaA;
        ataqueB1 = pibCaptaB;

        if (pibCaptaA > pibCaptaB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 7: //COMPARAÇÃO DE SUPER PODER

        ataqueA1 = superA;
        ataqueB1 = superB;

        if (superA > superB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;
    }

    printf("\n[ESCOLHA O SEGUNDO ATRIBUTO A SER COMPARADO!]\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6. PIB per capita\n7. SUPER PODER\n");
    scanf("%d", &atributo2);

    switch (atributo2) {

        case 1: //COMPARAÇÃO DE POPULAÇÃO

        ataqueA2 = populacaoA;
        ataqueB2 = populacaoB;

        if (populacaoA > populacaoB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 2: //COMPARAÇÃO DE ÁREA

        ataqueA2 = areaA;
        ataqueB2 = areaB;

        if (areaA > areaB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 3: //COMPARAÇÃO DE PIB

        ataqueA2 = pibA;
        ataqueB2 = pibB;

        if (pibA > pibB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;
        
        case 4: //COMPARAÇÃO DE PONTOS TURÍSTICOS

        ataqueA2 = pontA;
        ataqueB2 = pontB;

        if (pontA > pontB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 5: //COMPARAÇÃO DE DENSIDADE POPULACIONAL INVERTIDA

        ataqueA2 = densInvA;
        ataqueB2 = densInvB;

        if (densInvA > densInvB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 6: //COMPARAÇÃO DE PIB PER CAPITA

        ataqueA2 = pibCaptaA;
        ataqueB2 = pibCaptaB;

        if (pibCaptaA > pibCaptaB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;

        case 7: //COMPARAÇÃO DE SUPER PODER

        ataqueA2 = superA;
        ataqueB2 = superB;

        if (superA > superB) {
              resultado = 1; }
        else {
              resultado = 0;
           }
        break;
    }

    somaA = ataqueA1 + ataqueA2;
    somaB = ataqueB1 + ataqueB2;

    if(resultado = 1) {
        printf("\n[CARTA 1 (%s, %s) COM PODER DE: %.2f!]\n\nV.S\n\n[CARTA 2 COM PODER DE: %.2f!]\n", estadoA, cidadeA, somaA, somaB);
        printf("///[CARTA 1 VENCEU!]///");
    }
    else{
        printf("\n[CARTA 1 (%s, %s) COM PODER DE: %.2f!]\n\nV.S\n\n[CARTA 2 COM PODER DE: %.2f!]\n", estadoA, cidadeA, somaA, somaB);
        printf("\n///[CARTA 2 VENCEU!]///");
    }

    break;

    case 2:
    printf("\nCréditos:\nDerek Luan Leal de Souza\nEstácio\nRev 1.0");
    break;

    case 3:
    printf("Adeus!");
    exit(0);
    break;
}

    return 0;

}