#include <stdio.h>

int main () {
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue; // Pula a iteração quando i é 5
        if (i == 8) break; // sai do loop quando i é 8
        printf("%d ", i);

    }
}