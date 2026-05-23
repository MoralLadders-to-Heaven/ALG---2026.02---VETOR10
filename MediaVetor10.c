#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);

    long long valor[10], soma = 0;
    long double media = 0;
    for (int i = 1; i <= 10; i++) {

        printf("Escreva o %d°valor:", i);
        scanf("%lld", &valor[i - 1]);

    }

    for (int i = 1; i <= 10; i++) {
        soma += valor[i - 1];
    }
    media = soma / 10.0;

    printf("a media é %.2Lf\n", media);

    system("pause");
    return 0;
}
