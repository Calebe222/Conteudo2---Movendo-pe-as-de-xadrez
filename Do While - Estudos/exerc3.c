#include <stdio.h>


int main () {
    int option;


    do {
        printf("Menu:\n");
        printf("1. Opção\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);


        switch (option)
        {
        case 1:
            printf("Você escolheu a opção 1\n");
            break;
        case 2: 
            printf("Você escolheu a opção 2\n");
            break;
        case 3: 
            printf("Saindo...\n");
        default: 
            printf("Opção Inválida!\n");
        }
    } while (option != 3);

    return 0;
}