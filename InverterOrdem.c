#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);

    long long valor[10];

    for (int i = 1; i <= 10; i++) {

        printf("Escreva o %d°valor: ", i);
        scanf("%lld", &valor[i - 1]);

    }

    printf("A escrita inversa desses núemros é: {");
    for (int i = 10; i >= 1; i--) {

        if (i != 1) {

            printf("%lld, ", valor[i - 1]);
        }
        else {
            printf("%lld}\n", valor[i - 1]);
        }
    }

    system("pause");
    return 0;
}
