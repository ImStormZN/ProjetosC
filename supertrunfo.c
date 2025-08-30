#include <stdio.h>
#include <locale.h>

float calcularDeP(float arg1, float arg2) {

    float resultado;

    resultado = arg1 / arg2;

    return (float) resultado;

}

int main() {

    setlocale(LC_ALL,"Portuguese");

    // Letra referente aos Estados
    char estado1[50];
    char estado2[50];

    // Nome da Cidade
    char cidadeO[50];
    char cidadeT[50];

    // Numero de Habitantes
    unsigned long int populacaoA;
    unsigned long int populacaoB;

    // Codigo da Ca1ta

    char codigoCartaO[4] = "A01";
    char codigoCartaT[4] = "B02";

    // Area da cidade

    float areaA, areaB;

    // O Produto Interno Bruto da cidade

    float pibA, pibB;

    // A quantidade de pontos turísticos na cidade

    int turisticoA, turisticoB;


    // Apresentação 

    printf("\n");
    printf("\n");
    printf(" -=                Seja bem-vindo ao Super Trunfo                =-\n");
    printf("                        ( Tela de Cadastro )                         \n\n\n");


    //  -= Scan Estado (1) =-

    // Nome do Estado

    printf("Digite o nome do Estado (1): ");
    scanf(" %49[^\n]", estado1);
    printf("%s\n\n", estado1);


    // Nome da Cidade 

    printf("Digite o nome da Cidade (1): ");
    scanf(" %49[^\n]", cidadeO);
    printf("%s\n\n", cidadeO);
    // População

    printf("Quanto de população %s possui atualmente? ", cidadeO);
    scanf("%i", &populacaoA);
    printf("%i\n\n", populacaoA);

    // Area
    
    printf("Quantos km² %s possui? ", cidadeO);
    scanf("%f", &areaA);
    printf("%.2f\n\n", areaA);

    // Pib

    printf("Qual o valor PIB de %s ? ", cidadeO);
    scanf("%f", &pibA);
    printf("%.2f\n\n", pibA);
    
    // Pontos turisticos

    printf("Qual é a quantidade de pontos turisticos que %s tem atualmente? ", cidadeO);
    scanf("%i", &turisticoA);
    printf("%i\n\n", turisticoA);

    // Limpeza para Organizar o Terminal

    printf("\033[2J\033[H"); // limpa a tela e posiciona o cursor no canto superior
    printf("Ok! Dados de %s coletados!\n\n", cidadeO);
    printf("Agora vamos das continuação para a segunda cidade!\n\n");

    //  -= Scan Estado (2) =-

    printf("Digite o nome do Estado (2): ");
    scanf(" %49[^\n]", estado2);
    printf("%s\n\n", estado2);

    // Nome da Cidade 

    printf("Digite o nome da Cidade (2): ");
    scanf(" %49[^\n]", cidadeT);
    printf("%s\n\n", cidadeT);
;
    // População

    printf("Quanto de população %s possui atualmente? ", cidadeT);
    scanf("%i", &populacaoB);
    printf("%i\n\n", populacaoB);

    // Area
    
    printf("Quantos km² %s possui? ", cidadeT);
    scanf("%f", &areaB);
    printf("%.2f\n\n", areaB);

    // Pib

    printf("Qual o valor PIB de %s ? ", cidadeT);
    scanf("%f", &pibB);
    printf("%.2f\n\n", pibB);
    
    // Pontos turisticos

    printf("Qual é a quantidade de pontos turisticos que %s tem atualmente? ", cidadeT);
    scanf("%i", &turisticoB);
    printf("%i\n\n", turisticoB);

    printf("Ok! Dados de %s coletados!\n\n", cidadeT);

    // Apresentação

    printf("- Super Trunfo - \n\n");

    // Resultado ( Carta 1  )

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCartaO);
    printf("Nome da Cidade: %s\n", cidadeO);
    printf("População: %i\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de Pontos Turísticos: %i\n", turisticoA);
    printf("Densidade Populacional: %.2f hab/km²\n", calcularDeP(populacaoA, areaA));
    printf("PIB per Capita: %.2f reais\n\n\n", calcularDeP((float) populacaoA, pibA));

    // Separar

    printf("/////////////////////////////////////////////////////////////////////////////\n\n\n");

    // Resultado ( Carta 2  )

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCartaT);
    printf("Nome da Cidade: %s\n", cidadeT);
    printf("População: %i\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de Pontos Turísticos: %i\n", turisticoB);
    printf("Densidade Populacional: %.2f hab/km²\n", calcularDeP(populacaoB, areaB));
    printf("PIB per Capita: %.2f reais\n\n\n", calcularDeP((float) populacaoB, pibB));

    // Sistema Super Poder

    float pibPcA = calcularDeP((float) populacaoA, pibA);
    float pibPcB = calcularDeP((float) populacaoB, pibB);
    

    // Variaveis

    float superPoderA = (float) populacaoA + areaA + pibA + (float) turisticoA + pibPcA ;
    float superPoderB = (float) populacaoB + areaB + pibB + (float) turisticoB + pibPcB;

    float densidadeA = calcularDeP((float)populacaoA, areaA);
    float densidadeB = calcularDeP((float)populacaoB, areaB);

    // Resultados

    
    // ----------- Comparações -----------
    printf("\n\n=== Comparação de Cartas ===\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacaoA > populacaoB);
    printf("Área: Carta 1 venceu (%d)\n", areaA > areaB);
    printf("PIB: Carta 1 venceu (%d)\n", pibA > pibB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticoA > turisticoB);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadeA < densidadeB); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPcA > pibPcB);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderA > superPoderB);

    // Comparação ( Maior População )

    printf("\n\n=== Comparação (Maior População) ===\n\n\n");
    printf("Carta 1 - %s (%s): %d\n",cidadeO,estado1,populacaoA);
    printf("Carta 2 - %s (%s): %d\n",cidadeT,estado2,populacaoB);

    if(populacaoA > populacaoB) {
        printf("Resultado: Carta 1 (%s) venceu!",cidadeO);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!",cidadeT);
    }

    return 0;

}
