#include <stdio.h>
//funções do cálculo da densidade populacional e do PIB per Capita
float calculo_densidade(int populacao, float area_em_km){
    return populacao/area_em_km;
}
float pib_percapita(float pib, int populacao){
    return pib*1000000000/ (float)populacao;
}
int main() {
    //Dados da primeira carta
    char estado[3];
    char codigo_da_carta[5];
    char nome_da_cidade[15];
    int populacao;//nível mestre- população armazenada com unsigned long int
    float area_em_km;
    float pib;
    int pontos_turisticos;

    //Dados da segunda carta
    char estado2[3];
    char codigo_da_carta2[2];
    char nome_da_cidade2[15];
    int populacao2;
    float area_em_km2;
    float pib2;
    int pontos_turisticos2;
    
    printf("Bem vindo ao jogo! Vamos criar  duas cartas? Insira os dados pedidos: \n\n");

    //coletando dados da primeira carta
    printf("Insira os dados da primeira carta: \n\n");
    printf("Digite uma letra entre A e H, para escolher a letra que vai representar o seu estado: \n");
    scanf("%s", estado);
    printf("Digite a letra do estado escolhido, seguida de um número entre 01 e 04: \n");
    scanf("%s", codigo_da_carta);
    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(nome_da_cidade,15,stdin);
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    printf("Digite a área em km², da sua cidade: \n");
    scanf("%f", &area_em_km);
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);
    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontos_turisticos);

    //coletando os dados segunda carta
    printf("Insira os dados da segunda carta: \n\n");
    printf("Digite uma letra entre A e H, para escolher a letra que vai representar o seu estado: \n");
    scanf("%s", estado2);
    printf("Digite a letra do estado escolhido, seguida de um número entre 01 e 04: \n");
    scanf("%s", codigo_da_carta2);
    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(nome_da_cidade2,15,stdin);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em km², da sua cidade: \n");
    scanf("%f", &area_em_km2);
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &pontos_turisticos2);

    //Cálculo da densidade populacional
    float densidade1 = calculo_densidade(populacao,area_em_km);
    float densidade2 = calculo_densidade(populacao2,area_em_km2);

    //Cálculo PIB per Capita
    float pib_percapita1 = pib_percapita(pib, populacao);
    float pib_percapita2 = pib_percapita(pib2,populacao2);

    //exibindo os dados das cartas
    printf("Cartas criadas: \n\n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area_em_km);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos);
    printf("Densidade populacional: %.2f km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib_percapita1);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area_em_km2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade populacional: %.2f km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pib_percapita2);

    //Comparando a densidade populacional
    printf("Vamos comparar a densidade populacional para descobrir o vencedor: \n\n");
    printf("Carta 1: %s : %.2f \n", nome_da_cidade,densidade1);
    printf("Carta 2: %s : %.2f \n", nome_da_cidade2,densidade2);
    //Resultado da comparação
    if (densidade1 < densidade2){
        printf("Carta 1 (%s) venceu !\n", nome_da_cidade);
    } else{
        printf("Carta 2 (%s) venceu !\n", nome_da_cidade2);
    }

    return 0;
}