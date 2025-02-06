//Developed by: @jtfrl
//Beecrowd: n. 1040
#include <stdio.h>
 
int main() {
	float n1, n2, n3, n4;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	float media, med_rec, nrec;
	media=((2.0*n1+3.0*n2+4.0*n3+1.0*n4)/10.0);
/* note que é necessário ter o ponto em cada número, inlcuindo o denominador */
	med_rec=(media+med_rec);
	if (media>=7.0){
    	printf("Media: %.1f\n", media);
    	printf("Aluno aprovado\n");
	}else if (media<5.0){
    	printf("Media: %.1f\n", media);
    	printf("Aluno reprovado\n");
	}else if (media>=5.0&&media<=6.9){
    	printf("Media: %.1f\n", media);
    	printf("Aluno em exame\n");
    	scanf("%f",&nrec);
    	med_rec=((media+nrec)/2.0);
    	if (med_rec>=5.0){
        	printf("Nota do exame: %.1f\n", nrec);
        	printf("Media final: %.1f\n", med_rec);
        	printf("Aluno aprovado\n");
    	}else{
        	printf("Nota do exame: %.1f\n", nrec);
        	printf("Media final: %.1f\n", med_rec);
        	printf("Aluno reprovado\n");
    	}
	}
	return 0;
}
