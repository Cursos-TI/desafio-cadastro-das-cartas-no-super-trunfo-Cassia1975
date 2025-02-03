#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    
    printf("Super Trunfo - Paises - Cadastro de Cartas \n\n");
    printf("Sr(a) usuario, insira os dados de cada carta, em oito estados, identificados pelas letras de A a H. Cada estado tera quatro cidades, numeradas de 1 a 4");
    printf("\nObs: digite numeros inteiros e sem pontuacao");
    printf("\n\n'Cartas'");


    char pais[50] = "";
    char codigo_do_estado = "A,B,C,D,E,F,G,H";
    int codigo_da_cidade = "01,02,03,04";
    char nome_do_estado[60];
    char nome_da_cidade[160];
    float populacao;
    float area;
    float PIB;
    float pontos;

    printf("\n\nPais:\n", pais);
    scanf("%s", &pais);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\nNome do Estado:\n", nome_do_estado);
    scanf("%s", &nome_do_estado);

    printf("Nome da Cidade:\n", nome_da_cidade);
    scanf("%s", &nome_da_cidade);

    printf("Populacao:\n", populacao);
    scanf("%f", &populacao);

    printf("Area:\n", area);
    scanf("%f", &area);

    printf("PIB:\n", PIB);
    scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos:\n", pontos);
    scanf("%f", &pontos);

    printf("\nPropriedades da carta:\n");
    printf("Codigo da carta: %c%d\n", codigo_do_estado, codigo_da_cidade);
    printf("Estado: %s\n", nome_do_estado);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);
   

    return 0;
}
