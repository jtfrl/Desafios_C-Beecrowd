//Developed by: @jtfrl
//Beecrowd: n. 1142
#include <stdio.h>

void puml(int n) {
	int count = 1;
	int i;

	for (i = 0; i < n; i++) {
		printf("%d %d %d PUM\n", count, count + 1, count + 2);
		count += 4;
	}
}

int main() {
	int n;
	scanf("%d", &n);

	puml(n);

	return 0;
}
