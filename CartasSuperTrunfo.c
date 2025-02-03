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
    char estado = "A,B,C,D,E,F,G,H";
    int cidade = "01,02,03,04";

    int populacao = "0.0";
    int area = "";
    int PIB = "";
    int pontos = "";

    printf("\n\nPais:\n", pais);
    scanf("%s", &pais);

    printf("\nEstado:\n", estado);
    scanf("%s", &estado);

    printf("Cidade:\n", cidade);
    scanf("%d", &cidade);

    printf("Populacao:\n", populacao);
    scanf("%d", &populacao);

    printf("Area:\n", area);
    scanf("%d", &area);

    printf("PIB:\n", PIB);
    scanf("%d", &PIB);
   
    return 0;
}
