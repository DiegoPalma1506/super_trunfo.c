#include <stdio.h> // Para funções de entrada (scanf) e saída (printf)
#include <locale.h> // Para permitir acentuação nos prompts (opcional, mas melhora a usabilidade)

/*
 * Programa: Cadastro Super Trunfo (Versão Simplificada)
 * Descrição: Este programa lê os dados de duas cartas do Super Trunfo
 * fornecidos pelo usuário e, em seguida, exibe esses dados
 * de forma organizada na tela.
 *
 * Restrições: Não utiliza loops (for/while) ou decisões (if/else).
 */
int main() {
    // Configura o programa para aceitar acentos (ex: "População") nos prompts
    setlocale(LC_ALL, "Portuguese");

    // --- Variáveis para a Carta 1 ---
    // Nomes de variáveis descritivos para fácil entendimento
    char estado1;
    char codigo1[5];      // Ex: "A01" + caractere nulo ('\0') = 4. Usamos 5 por segurança.
    char nomeCidade1[50]; // Espaço para nomes de cidades, ex: "Rio de Janeiro"
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Variáveis para a Carta 2 ---
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ------------------------------------------
    // ETAPA 1: LEITURA DOS DADOS DA CARTA 1
    // ------------------------------------------
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o Estado (A-H): ");
    // Usamos " %c" (com espaço) para consumir qualquer 'Enter' anterior
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    // Usamos " %[^\n]" (com espaço) para ler a linha inteira,
    // permitindo nomes com espaços (ex: "São Paulo")
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Adiciona uma linha em branco para separar

    // ------------------------------------------
    // ETAPA 2: LEITURA DOS DADOS DA CARTA 2
    // ------------------------------------------
    // (Código repetido conforme a restrição de não usar loops)
    printf("=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2); // O espaço antes de %c é importante

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2); // O espaço antes de %[^\n] também

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n\n"); // Adiciona duas linhas em branco

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
