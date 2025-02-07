//Developed by: @jtfrl
//Beecrowd: n. 1118
#include <stdio.h>

int main() {
    float n1, media = 0;
    double lista[2] = {0, 0};
    int i = 0, op;

    while (1) {
        i = 0;
        while (i < 2) {
            scanf("%f", &n1);

            if (n1 < 0 || n1 > 10) {
                printf("nota invalida\n");
            } else {
                lista[i] = n1;
                i++;
            }
        }

        media = (lista[0] + lista[1]) / 2.0;
        printf("media = %.2lf\n", media);

        while (1) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
            if (op == 1) {
                break;
            } else if (op == 2) {
                return 0;
            }
        }
    }

    return 0;
}

