#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Cassia
//Não consegui colocar espaço nos nomes dos Estados e das cidades, tem que digitar o nome sem espaco.

    int main(){
    
    printf("Super Trunfo - Paises - Cadastro de Cartas \n\n");
    printf("Sr(a) usuario, insira os dados de cada carta, de oito estados identificados pelas letras de A a H. Cada estado tera quatro cidades, numeradas de 1 a 4");
    printf("\nAtencao: Digite nomes de Estado e cidade sem espaco!");
    printf("\n\n'Cartas'");

    char pais[50] = "";
    char codigo_do_estado = "A,B,C,D,E,F,G,H";
    int codigo_da_cidade = "01,02,03,04";
    char nome[50];
    char nomecid[50];
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

    printf("\nNome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

    printf("Populacao:\n", populacao);
    scanf("%f", &populacao);

    printf("Area:\n", area);
    scanf("%f", &area);

    printf("PIB:\n", PIB);
    scanf("%f", &PIB);

    printf("Numero de Pontos Turisticos:", pontos);
    scanf("%f", &pontos);

    printf("\nPropriedades da carta:\n");
    printf("Codigo da carta: %c%d\n", codigo_do_estado, codigo_da_cidade);
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);


    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    printf("\nCodigo do Estado:\n", codigo_do_estado);
    scanf("%s", &codigo_do_estado);

    printf("Codigo da Cidade:\n", codigo_da_cidade);
    scanf("%d", &codigo_da_cidade);

    printf("\Nome do Estado:\n", nome);
    scanf("%s", &nome); 

    printf("Nome da Cidade:\n", nomecid);
    scanf("%s", &nomecid);

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
    printf("Estado: %s\n", nome);
    printf("Cidade: %s\n", nomecid);
    printf("Populacao: %.3f\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", PIB);
    printf("Numero de pontos turisticos:%.0f\n", pontos);

    
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
