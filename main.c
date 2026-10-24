#include <stdio.h>
#include <string.h>

#define QUANTIDADE_FILMES 5
#define TAM_NOME 50

int main() {
    char filmes[QUANTIDADE_FILMES][TAM_NOME];
    int ingressos[QUANTIDADE_FILMES];
    int totalIngressos = 0;
    int maisVendido = 0;
    int menosVendido = 0;
    int i, j;
    int caractere;

    printf("====================================\n");
    printf("     SISTEMA DE VENDAS DE CINEMA\n");
    printf("====================================\n");

    // Leitura dos nomes e das vendas dos filmes
    for (i = 0; i < QUANTIDADE_FILMES; i++) {
        printf("\nDigite o nome do filme %d: ", i + 1);

        if (fgets(filmes[i], TAM_NOME, stdin) == NULL) {
            printf("Erro ao ler o nome do filme.\n");
            return 1;
        }

        // Remove a quebra de linha do nome
        filmes[i][strcspn(filmes[i], "\n")] = '\0';

        printf("Ingressos vendidos no mes: ");

        if (scanf("%d", &ingressos[i]) != 1 ||
            ingressos[i] < 0) {
            printf("Entrada invalida. Digite um numero inteiro nao negativo.\n");
            return 1;
        }

        // Acumula o total de ingressos vendidos
        totalIngressos += ingressos[i];

        // Limpa o restante da linha digitada
        while ((caractere = getchar()) != '\n' &&
               caractere != EOF) {
        }
    }

    // Identifica os filmes com mais e menos ingressos vendidos
    for (i = 1; i < QUANTIDADE_FILMES; i++) {
        if (ingressos[i] > ingressos[maisVendido]) {
            maisVendido = i;
        }

        if (ingressos[i] < ingressos[menosVendido]) {
            menosVendido = i;
        }
    }

    // Exibe o relatorio de vendas
    printf("\n========== RELATORIO DE VENDAS ==========\n");

    for (i = 0; i < QUANTIDADE_FILMES; i++) {
        printf("%s - %d ingressos\n",
               filmes[i], ingressos[i]);
    }

    printf("\nTotal de ingressos vendidos: %d\n",
           totalIngressos);

    printf("Filme mais assistido: %s (%d ingressos)\n",
           filmes[maisVendido], ingressos[maisVendido]);

    printf("Filme menos assistido: %s (%d ingressos)\n",
           filmes[menosVendido], ingressos[menosVendido]);

    // Grafico de barras textual
    printf("\n========== GRAFICO DE VENDAS ==========\n");

    for (i = 0; i < QUANTIDADE_FILMES; i++) {
        printf("%s: ", filmes[i]);

        // Cada # representa um ingresso, limitado a 50 simbolos
        for (j = 0; j < ingressos[i] && j < 50; j++) {
            printf("#");
        }

        printf(" (%d ingressos)\n", ingressos[i]);
    }

    printf("\nAnalise concluida!\n");
    printf("Obrigado por utilizar o sistema de cinema.\n");

    return 0;
}
