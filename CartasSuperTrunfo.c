#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Cassia
//Não soube como arrumar este erro na linha 11, corrijo, salvo e não salva, para corrigir: Delete e Tab.
    
    int main(){

    printf("Super Trunfo - Paises - Cadastro de Cartas \n\n");
    printf("Sr(a) usuario, insira os dados de cada carta, de oito estados identificados pelas letras de A a H. Cada estado tera quatro cidades, numeradas de 1 a 4");
    printf("\n\n'Cartas'\n\n");

    char estad[20] = "A,B,C,D,E,F,G,H"; //Estados identificados pelas letras A a H.
    char codig_da_carta[100] = "A01;A02;B01;B02"; //Codigos das cartas (A01,A02,B01,B2).
    char nome[50] = "01,02,03,04"; //Cidades numeradas de 1 a 4.
    int populacao;
    float area;
    float PIB;
    int pontos;

    //O comando 'for' permite que variável seja executada 34 vezez (8 estados X 4 cidades)
    for (int carta = 1; carta <= 34; carta++) {
        printf("\nCarta %d\n", carta);
        
    //Entrada e saída de dados
    printf("Digite o Estado:", estad);
    scanf("%s", &estad);

    printf("Digite o Codigo da Carta:", codig_da_carta);
    scanf("%s", &codig_da_carta);

    printf("Digite Nome da Cidade:", nome); 
    scanf(" %[^\n]", &nome); // Lê o nome da cidade incluindo espaços e acentuação


    printf("Digite a Populacao:", populacao);
    scanf("%d", &populacao);

    printf("Digite a Area em km2:", area);
    scanf("%f", &area);

    printf("Digite o PIB:", PIB);
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turisticos:", pontos);
    scanf("%d", &pontos);

    }

       
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
