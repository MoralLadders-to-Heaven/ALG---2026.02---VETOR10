#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    long long valor[10];

    for (int i = 1; i <= 10; i++) {

        printf("Escreva o %d°valor: ", i);
        scanf("%lld", &valor[i - 1]);

    }

    for (int i = 1; i <= 10; i++) {

        if (valor[i - 1] % 2 == 0) {
            printf("O valor %lld é par!\n", valor[i - 1]);
        }
        else {
            printf("O valor %lld é ímpar!\n", valor[i - 1]);
        }
      
    }

    system("pause");
    return 0;
}
