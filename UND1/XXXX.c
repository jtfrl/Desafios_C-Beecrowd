// 
//
#include <stdio.h>
int main() {
	double A, B, C, D, E, F;
	double res;
	scanf("%lf %lf %lf", &A, &B, &C);
	if(A<B){
	res=A;
	A=B;
	B=res;
	}if(A<C){
    	res=A;
    	A=C;    
    	C=res;  
	}if(B<C){
   	res=B;
   	B=C;
   	C=res;
	}
	//variaveis de reserva para valores dos criterios em ifs:
	D=B+C;
	E=B*B+C*C;
	F=A*A;
	if(A>=D){
	printf("NAO FORMA TRIANGULO\n");
	}//cadeia de verificação de outros casos:
	else{
    	if(F==E){
    	printf("TRIANGULO RETANGULO\n");
    	}if(F>E){
    	printf("TRIANGULO OBTUSANGULO\n");
    	} if(F<E){
    	printf("TRIANGULO ACUTANGULO\n");
    	} if(A == B&&B == C){
    	printf("TRIANGULO EQUILATERO\n");
    	}else if(A == B || B == C || A == C){
    	printf("TRIANGULO ISOSCELES\n");
    	}
	}
return 0;
}

