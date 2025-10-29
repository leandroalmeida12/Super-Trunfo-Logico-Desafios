/*Neste primeiro nível, seu objetivo é construir a base do 
nosso jogo Super Trunfo de Países: um sistema para cadastrar 
as cartas com informações sobre as cidades. Você vai praticar 
a leitura de dados do usuário, o armazenamento em variáveis e 
a exibição dessas informações na tela.*/

// Inclusão das Bibliotecas
#include <stdio.h>
#include <string.h> //Tive que adicionar a biblioteca string para ações com Strings

// Iniciando Função Main.
int main()
{
    /*Criar um programa em C que permita ao usuário inserir os
    dados de duas cartas do Super Trunfo. Para cada carta, o
    usuário deverá fornecer as seguintes informações:*/

    // ---> Definindo Variáveis
    // Carta 1
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    float pib_per_capita;
    float densidade;
    float superpoder;

    // Carta 2
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float superpoder2;

    // ---> Leitura e Entrada dos Dados
    // Carta 1
    printf("---[Cadastrando | Carta 1]\n");
    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c",&estado); 
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta);
    printf("Nome da Cidade:\n");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade, sizeof(nome_cidade), stdin); //Cadastra o nome da cidade
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes:\n");
    scanf("%lu", &populacao);
    printf("A area da cidade em Quilometros Quadrados:\n");
    scanf("%f",&area);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f",&pib);
    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &numero_pontos_turisticos);
    densidade = populacao/area;
    pib_per_capita = pib/populacao;
    superpoder = (float)populacao+area+pib+(float)numero_pontos_turisticos+pib_per_capita+(1.0/densidade);


    // Carta 2
    printf("---[Cadastrando | Carta 2]\n");
    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c",&estado2);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta2);
    printf("Nome da Cidade:\n");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //Cadastra o nome da cidade
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes:\n");
    scanf("%lu", &populacao2);
    printf("A area da cidade em Quilometros Quadrados:\n");
    scanf("%f",&area2);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f",&pib2);
    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &numero_pontos_turisticos2);
    densidade2 = populacao2/area2;
    pib_per_capita2 = pib2/populacao2;
    superpoder2 = (float)populacao2+area2+pib2+(float)numero_pontos_turisticos2+pib_per_capita2+(1.0/densidade2);


    /*Após o usuário inserir os dados de cada carta, seu 
    programa deve exibir na tela as informações cadastradas, 
    de forma organizada e legível. Para cada carta, imprima cada 
    informação em uma linha separada, com uma descrição clara.*/

    // Carta 1
    printf("---[Apresentando | Carta 1]\n");
    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n",codigo_carta);
    printf("Nome da Cidade: %s\n",nome_cidade);
    printf("Populacao: %lu\n",populacao);
    printf("Area: %.2f km²\n",area);
    printf("PIB: R$%.2f\n",pib);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita);
    printf("Superpoder: %.2f\n",superpoder);

    //Carta 2
    printf("---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo_carta2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("Populacao: %lu\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: R$%.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita2);
    printf("Superpoder: %.2f\n",superpoder2);

    //Comparação para Resultados
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s (SP): %lu\n",estado,populacao);
    printf("Carta 2 - %s (RJ): %lu\n",estado2,populacao2);
    if (populacao>populacao2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }
    
    printf("Comparação de Cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (SP): %.2f km²\n",estado,area);
    printf("Carta 2 - %s (RJ): %.2f km²\n",estado2,area2);
    if (area>area2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }

    printf("Comparação de Cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (SP): R$ %.2f\n",estado,pib);
    printf("Carta 2 - %s (RJ): R$ %.2f\n",estado2,pib2);
    if (pib>pib2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }

    printf("Comparação de Cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s (SP): %d\n",estado,numero_pontos_turisticos);
    printf("Carta 2 - %s (RJ): %d\n",estado2,numero_pontos_turisticos2);
    if (numero_pontos_turisticos>numero_pontos_turisticos2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }

    printf("Comparação de Cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (SP): %.2f\n",estado,densidade);
    printf("Carta 2 - %s (RJ): %.2f\n",estado2,densidade2);
    if (densidade<densidade2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }

    printf("Comparação de Cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s (SP): R$ %.2f\n",estado,pib_per_capita);
    printf("Carta 2 - %s (RJ): R$ %.2f\n",estado2,pib_per_capita2);
    if (pib_per_capita>pib_per_capita2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }

    printf("Comparação de Cartas (Atributo: Superpoder):\n");
    printf("Carta 1 - %s (SP): R$ %.2f\n",estado,superpoder);
    printf("Carta 2 - %s (RJ): R$ %.2f\n",estado2,superpoder2);
    if (superpoder>superpoder2)
    {
        printf("Carta 1 (%s) venceu!\n",estado);
    } else
    {
        printf("Carta 2 (%s) venceu!\n", estado2);
    }
    
    // Finalizador do Sistema
    return 0;
}
