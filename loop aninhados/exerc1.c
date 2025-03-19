// loop dentro de outro loop 
// usado em múltiplas dimensões de dados

#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {  // loop externo
        int j = 1;
        while (j <= 10) { // loop interno
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");  // Nova linha após cada linha da tabuada
        i++;  // Incremento da variável i dentro do loop externo
    }
    return 0;
}