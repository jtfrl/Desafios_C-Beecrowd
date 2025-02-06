//Developed by: @jtfrl
//Beecrowd: n. 1061

#include <stdio.h>

int main() {
	int dia1, hr1, min1, seg1;
	int dia2, hr2, min2, seg2;
	int ttd, tth, ttm, tts;
	scanf(" Dia %d", &dia1);
	scanf(" %d : %d : %d", &hr1, &min1, &seg1);
	scanf(" Dia %d", &dia2);
	scanf(" %d : %d : %d", &hr2, &min2, &seg2);

	if (seg2 < seg1) {
    	seg2 = seg2 + 60;
    	min2--;
	}
	tts = seg2 - seg1;

	if (min2 < min1) {
    	min2 = min2 + 60;
    	hr2--;
	}
	ttm = min2 - min1;

	if (hr2 < hr1) {
    	hr2 = hr2 + 24;
    	dia2--;
	}
	tth = hr2 - hr1;

	ttd = dia2 - dia1;

	printf("%d dia(s)\n", ttd);
	printf("%d hora(s)\n", tth);
	printf("%d minuto(s)\n", ttm);
	printf("%d segundo(s)\n", tts);

	return 0;
}

