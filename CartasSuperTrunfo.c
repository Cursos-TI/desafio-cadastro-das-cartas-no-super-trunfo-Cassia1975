#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Cassia
//Não soube como arrumar este erro na linha 11, corrijo, salvo e não salva, para corrigir: Delete e Tab.
    
   // Função que calcula a densidade populacional e PIB per capita

void calcularDensidadePopulacionalEPibPercapita() {
    int populacao;
    float area;
    float PIB;
    float densidadePopulacional;
    float PIBPercapita;
    int pontos;

    printf("Digite a Populacao: ");
    scanf("%d", &populacao);

    printf("Digite a Area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    densidadePopulacional = populacao / area;
    PIBPercapita = PIB / populacao;

    // Exibe os resultados
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBPercapita);

    printf("Digite a quantidade de pontos tustisticos:", pontos);
    scanf("%d", &pontos);
}

int main() {
    printf("Super Trunfo - Paises - Cadastro de Cartas \n\n");
    printf("Sr(a) usuario, insira os dados de cada carta, de oito estados identificados pelas letras de A a H.Cada estado tera quatro cidades, numeradas de 1 a 4\n\n");

    char estad[20]; // Estados identificados pelas letras A a H.
    char codig_da_carta[100]; // Codigos das cartas (A01,A02,B01,B02).
    char nome[50]; // Cidades numeradas de 1 a 4.

    //O comando for permite que variável seja executada 34 vezez (8 estados X 4 cidades)
    for (int carta = 1; carta <= 34; carta++) {
        printf("\nCarta %d\n", carta);

        printf("Digite o Estado: ");
        scanf("%s", &estad);

        printf("Digite o Codigo da Carta: ");
        scanf("%s", &codig_da_carta);

        printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", &nome);  // Lê o nome da cidade incluindo espaços e acentuação

        calcularDensidadePopulacionalEPibPercapita(); // Chama a função para calcular e mostrar a densidade populacional e o PIB per capita

    }

    return 0;
}


       
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
