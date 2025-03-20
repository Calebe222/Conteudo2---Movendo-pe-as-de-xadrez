#include <stdio.h>

int main() {
    int i, j;
    char letra;

    for (i = 1; i < 5; i++) {
        letra = 'A'; // Corrigido: use 'A' em vez de "A"

        for (j = 1; j <= i; j++) {
            printf("%c ", letra);
            ++letra; // Incrementa o caractere (ex: 'A' -> 'B')
        }

        printf("\n"); // Pula para a próxima linha
    }

    return 0;
}