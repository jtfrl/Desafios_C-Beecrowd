//Developed by: @jtfrl
//Beecrowd: n. 1072

#include <stdio.h>

int main() {
    int n, x = 0, y = 0;

    // leitura dos inputs
    scanf("%d", &n);

    // criação de array que abriga os números lidos
    int vet[n];

    // leitura no range [10;20]
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);

        if (vet[i] >= 10 && vet[i] <= 20) {
            x++;
        } else {
            y++;
        }
    }

    printf("%d in\n", x);
    printf("%d out\n", y);

    return 0;
}

