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

    // Decisões e Ternários
    int escolha1, escolha2;
    float valor1_c1 = 0, valor2_c1 = 0, valor1_c2 = 0, valor2_c2 = 0;
    float soma1, soma2;
    // ---> Leitura e Entrada dos Dados
    // Carta 1
    printf("---[Cadastrando | Carta 1]\n");
    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c", &estado);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta);
    printf("Nome da Cidade:\n");
    getchar();                                      // Limpa o \n do buffer antes de fgets
    fgets(nome_cidade, sizeof(nome_cidade), stdin); // Cadastra o nome da cidade
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes:\n");
    scanf("%lu", &populacao);
    printf("A area da cidade em Quilometros Quadrados:\n");
    scanf("%f", &area);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib);
    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &numero_pontos_turisticos);
    densidade = populacao / area;
    pib_per_capita = pib / populacao;
    superpoder = (float)populacao + area + pib + (float)numero_pontos_turisticos + pib_per_capita + (1.0 / densidade);

    // Carta 2
    printf("---[Cadastrando | Carta 2]\n");
    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta2);
    printf("Nome da Cidade:\n");
    getchar();                                        // Limpa o \n do buffer antes de fgets
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); // Cadastra o nome da cidade
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes:\n");
    scanf("%lu", &populacao2);
    printf("A area da cidade em Quilometros Quadrados:\n");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);
    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &numero_pontos_turisticos2);
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)numero_pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    /*Após o usuário inserir os dados de cada carta, seu
    programa deve exibir na tela as informações cadastradas,
    de forma organizada e legível. Para cada carta, imprima cada
    informação em uma linha separada, com uma descrição clara.*/

    // Carta 1
    printf("---[Apresentando | Carta 1]\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita);
    printf("Superpoder: %.2f\n", superpoder);

    // Carta 2
    printf("---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // Menu Atributo 1
    printf("\nEscolha o primeiro atributo:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade\n6. PIB per Capita\n7. Superpoder\n");
    scanf("%d", &escolha1);

    // Menu Atributo 2 (sem repetir o 1)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 7; i++)
        if (i != escolha1)
            printf("%d. %s\n", i,
                   i == 1 ? "Populacao" : i == 2 ? "Area"
                                      : i == 3   ? "PIB"
                                      : i == 4   ? "Pontos Turisticos"
                                      : i == 5   ? "Densidade"
                                      : i == 6   ? "PIB per Capita"
                                                 : "Superpoder");
    scanf("%d", &escolha2);

    // Atribuindo valores com switch (sem funções)
    switch (escolha1)
    {
    case 1:
        valor1_c1 = populacao;
        valor1_c2 = populacao2;
        break;
    case 2:
        valor1_c1 = area;
        valor1_c2 = area2;
        break;
    case 3:
        valor1_c1 = pib;
        valor1_c2 = pib2;
        break;
    case 4:
        valor1_c1 = numero_pontos_turisticos;
        valor1_c2 = numero_pontos_turisticos2;
        break;
    case 5:
        valor1_c1 = densidade;
        valor1_c2 = densidade2;
        break;
    case 6:
        valor1_c1 = pib_per_capita;
        valor1_c2 = pib_per_capita2;
        break;
    case 7:
        valor1_c1 = superpoder;
        valor1_c2 = superpoder2;
        break;
    default:
        printf("Atributo invalido!\n");
        return 0;
    }

    switch (escolha2)
    {
    case 1:
        valor2_c1 = populacao;
        valor2_c2 = populacao2;
        break;
    case 2:
        valor2_c1 = area;
        valor2_c2 = area2;
        break;
    case 3:
        valor2_c1 = pib;
        valor2_c2 = pib2;
        break;
    case 4:
        valor2_c1 = numero_pontos_turisticos;
        valor2_c2 = numero_pontos_turisticos2;
        break;
    case 5:
        valor2_c1 = densidade;
        valor2_c2 = densidade2;
        break;
    case 6:
        valor2_c1 = pib_per_capita;
        valor2_c2 = pib_per_capita2;
        break;
    case 7:
        valor2_c1 = superpoder;
        valor2_c2 = superpoder2;
        break;
    default:
        printf("Atributo invalido!\n");
        return 0;
    }

    // Exibicao de dados
    printf("\n---[Comparando Cartas]\n");
    printf("Cidade 1: %s\n", nome_cidade);
    printf("Cidade 2: %s\n\n", nome_cidade2);

    printf("Atributo 1: %s\n", escolha1 == 1 ? "Populacao" : escolha1 == 2 ? "Area"
                                                         : escolha1 == 3   ? "PIB"
                                                         : escolha1 == 4   ? "Pontos Turisticos"
                                                         : escolha1 == 5   ? "Densidade"
                                                         : escolha1 == 6   ? "PIB per Capita"
                                                                           : "Superpoder");
    printf("-> %s: %.2f\n-> %s: %.2f\n\n", nome_cidade, valor1_c1, nome_cidade2, valor1_c2);

    printf("Atributo 2: %s\n", escolha2 == 1 ? "Populacao" : escolha2 == 2 ? "Area"
                                                         : escolha2 == 3   ? "PIB"
                                                         : escolha2 == 4   ? "Pontos Turisticos"
                                                         : escolha2 == 5   ? "Densidade"
                                                         : escolha2 == 6   ? "PIB per Capita"
                                                                           : "Superpoder");
    printf("-> %s: %.2f\n-> %s: %.2f\n\n", nome_cidade, valor2_c1, nome_cidade2, valor2_c2);

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    if (escolha1 == 5)
        soma1 = (1.0 / densidade) + valor2_c1;
    if (escolha2 == 5)
        soma1 = valor1_c1 + (1.0 / densidade);
    if (escolha1 == 5 && escolha2 == 5)
        soma1 = (1.0 / densidade) + (1.0 / densidade);
    if (escolha1 == 5)
        soma2 = (1.0 / densidade2) + valor2_c2;
    if (escolha2 == 5)
        soma2 = valor1_c2 + (1.0 / densidade2);
    if (escolha1 == 5 && escolha2 == 5)
        soma2 = (1.0 / densidade2) + (1.0 / densidade2);

    printf("Soma dos Atributos:\n-> %s: %.2f\n-> %s: %.2f\n\n", nome_cidade, soma1, nome_cidade2, soma2);

    printf("Resultado: ");
    if (soma1 > soma2)
        printf("%s venceu!\n", nome_cidade);
    else if (soma2 > soma1)
        printf("%s venceu!\n", nome_cidade2);
    else
        printf("Empate!\n");

    // Finalizador do Sistema
    return 0;
}
