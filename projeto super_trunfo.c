#include <stdio.h> // Para a função de saída (printf)
#include <locale.h> // Para permitir acentuação na saída

/*
 * Programa: Cadastro Super Trunfo (Versão com Dados Prontos)
 * Descrição: Este programa demonstra o armazenamento de dados
 * de duas cartas do Super Trunfo usando variáveis já
 * inicializadas e, em seguida, exibe esses dados na tela.
 */
int main() {
    // Configura o programa para aceitar acentos (ex: "População")
    setlocale(LC_ALL, "Portuguese");

    // ------------------------------------------
    // ETAPA 1: INICIALIZAÇÃO DOS DADOS DA CARTA 1
    // ------------------------------------------
    // Os dados são "hardcoded" (fixos) no programa
    char estado1 = 'A';
    char codigo1[5] = "A01";
    char nomeCidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11f;     // 'f' indica que é um float
    float pib1 = 699.28f;
    int pontosTuristicos1 = 50;

    // ------------------------------------------
    // ETAPA 2: INICIALIZAÇÃO DOS DADOS DA CARTA 2
    // ------------------------------------------
    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontosTuristicos2 = 30;


    // ------------------------------------------
    // ETAPA 3: EXIBIÇÃO DOS DADOS CADASTRADOS
    // ------------------------------------------
    printf("--- DADOS DAS CARTAS CADASTRADAS ---\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    // Usamos "%.2f" para formatar os números float com 2 casas decimais
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco separando as cartas

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0; // Indica que o programa terminou com sucesso
}
