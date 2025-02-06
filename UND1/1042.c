//Developed by: @jtfrl
//Beecrowd: n. 1042

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
	return (a + b + abs(a - b)) / 2;
}

//existe uma função anterior
//que é usada em int main()

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int maior = max(max(a, b), c);

	printf("%d eh o maior\n", maior);

	return 0;
}
