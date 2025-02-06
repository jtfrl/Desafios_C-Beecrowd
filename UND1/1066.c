//Developed by: @jtfrl
//Beecrowd: n. 1066
#include <stdio.h>
int main() { 
int cex, cpo, cne, cpar, cimp, n; 
cex = 1; 
cpo = 0; 
cne = 0;
cpar = 0; 
cimp=0;
// cpo conta positivos; cex execuções
while (cex <= 5) {  
    scanf("%d", &n);
    if (n >0) {
        cpo++;
    }else if(n<0){
        cne++;
    }if (n%2==0){
        cpar++;
    }else{
        cimp++;
    }
    cex++;
}

//cada condição atendida é analisada pelas cadeias condicionais abaixo

if (cpar > 0) {
    printf("%d valor(es) par(es)\\n", cpar);
  }else{
      printf("0 valor(es) par(es)\\n");
  }
if (cimp > 0) {
    printf("%d valor(es) impar(es)\\n", cimp);
  }else{
      printf("0 valor(es) impar(es)\\n");
  }
if (cpo > 0) {
    printf("%d valor(es) positivo(s)\\n", cpo);
  }else{
      printf("0 valor(es) positivo(s)\\n");
  }
if (cne > 0) {
    printf("%d valor(es) negativo(s)\\n", cne);
  }else{
      printf("0 valor(es) negativo(s)\\n");
  }

return 0;

// cpo conta positivos; cex execuções
while (cex <= 5) { 
    scanf("%d", &n);
    if (n >0) {
        cpo++;
    }else if(n<0){
        cne++;
    }if (n%2==0){
        cpar++;
    }else{
        cimp++;
    }
    cex++;
}

if (cpar > 0) {
    printf("%d valor(es) par(es)\\n", cpar);
}else{
    printf("0 valor(es) par(es)\\n");
}
if (cimp > 0) {
    printf("%d valor(es) impar(es)\\n", cimp);
}else{
    printf("0 valor(es) impar(es)\\n");
}
if (cpo > 0) {
    printf("%d valor(es) positivo(s)\\n", cpo);
}else{
    printf("0 valor(es) positivo(s)\\n");
}
if (cne > 0) {
    printf("%d valor(es) negativo(s)\\n", cne);
}else{
    printf("0 valor(es) negativo(s)\\n");
}

return 0;


