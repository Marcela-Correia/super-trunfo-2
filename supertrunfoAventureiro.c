//Desafio de nível aventureiro com menu interativo
#include <stdio.h>
float calculoDensidade(int populacao, float area){
    return populacao/area;
}

int main(){
    //variáveis da primeira carta
    char nomeDoPais[50];//só para exibição
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    int opcao;//variável para Menu interativo switch
     
    //variáveis da segunda carta
    char nomeDoPais2[50];//só para exibição
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //coletando os dados fornecidos pelo usuário
    printf("Digite os dados da carta 1: \n");
    printf("Digite o nome do País: \n");
    getchar();
    fgets(nomeDoPais,50,stdin);
    printf("Digite quantos habitantes tem no seu país: \n");
    scanf("%d", &populacao);
    printf("Digite a área em km²: \n");
    scanf("%f", &area);
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &pontosTuristicos);

    //segunda carta
    printf("Digite os dados da carta 2: \n");
    printf("Digite o nome do País: \n");
    getchar();
    fgets(nomeDoPais2,50,stdin);
    printf("Digite quantos habitantes tem no seu país: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos tem: \n");
    scanf("%d", &pontosTuristicos2);

    //calculo da densidade populacional
    float densiade1 = calculoDensidade(populacao,area);
    float densiade2 = calculoDensidade(populacao2,area2);

    //Escolha do atributo a ser comparado
    printf("Escolha um atributo para comparar \n");
    printf("1-População \n2-Área\n3-PIB\n4-Pontos Turísticos\n5-Densidade demográfica\n");
    scanf("%d",&opcao);

    //comparação do atributo escolhido
    switch (opcao)
    {
    case 1:
        printf("Populção de %s: %d\n", nomeDoPais,populacao);
        printf("População de %s: %d\n", nomeDoPais2,populacao2);
        break;
    case 2:
        printf("Área de %s: %.2f\n", nomeDoPais,area);
        printf("Área de %s: %.2f\n", nomeDoPais2,area2);
        break;
    case 3:
        printf("PIB de %s: %.2f bilhões\n", nomeDoPais,pib);
        printf("PIB de %s: %.2f bilhões\n", nomeDoPais2,pib2);
        break;
    case 4:
        printf("Pontos turísticos em %s: %d\n", nomeDoPais,pontosTuristicos);
        printf("Pontos turísticos em %s: %d\n", nomeDoPais2,pontosTuristicos2);
        break;
    case 5:
        printf("Densiade demográfica de %s: %.2f\n", nomeDoPais,densiade1);
        printf("Densiade demográfica de %s: %.2f\n", nomeDoPais2,densiade2);
        break;
        default:
        printf("Opção inválida! Selecione uma das opções válidas.\n");
        return 1;
}
    //Determinando o vencedor
    if((opcao == 1 && populacao > populacao2) || 
       (opcao == 2 && area > area2) ||
       (opcao == 3 && pib > pib2) ||
       (opcao == 4 && pontosTuristicos > pontosTuristicos2) ||
       (opcao == 5 && densiade1 < densiade2)){
        printf("%s vence!\n", nomeDoPais);
       }else if((opcao == 1 && populacao2 > populacao) ||
                (opcao == 2 && area2 > area) ||
                (opcao == 3 && pib2 > pib) ||
                (opcao == 4 && pontosTuristicos2 > pontosTuristicos) ||
                (opcao == 5 && densiade2 < densiade1)) {
                printf("%s vence!\n", nomeDoPais2);
                } else {
                    printf("Empate!\n");
                }
    return 0;
}