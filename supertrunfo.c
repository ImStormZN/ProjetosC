#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese");

    // Letra referente aos Estados
    char estado1 = 'A';
    char estado2 = 'B';

    // Nome da Cidade
    char cidadeO[50];
    char cidadeT[50];

    // Numero de Habitantes
    int populacaoA, populacaoB;

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


    // Nome da Cidade 

    printf("Digite o nome da Cidade (1): ");
    scanf(" %49[^\n]", cidadeO);
    printf("%s\n\n", cidadeO);
;
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
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCartaO);
    printf("Nome da Cidade: %s\n", cidadeO);
    printf("População: %i\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de Pontos Turísticos: %i\n\n\n", turisticoA);

    // Separar

    printf("/////////////////////////////////////////////////////////////////////////////\n\n\n");

    // Resultado ( Carta 2  )

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCartaT);
    printf("Nome da Cidade: %s\n", cidadeT);
    printf("População: %i\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de Pontos Turísticos: %i\n\n\n", turisticoB);

    return 0;

}
