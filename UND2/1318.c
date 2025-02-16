//Developed by: @jtfrl
//Beecrowd: n. 1318
#include <stdio.h>
#include <string.h>

#define MAX_O 10000
#define MAX_P 20000

typedef struct{
    int dadoIng[MAX_P];
}ingresso;

int compIng(int lista1[], int tam){
    unsigned short cont=0;
    int freq[MAX_P]={0}; //array que vai verificar a sequencia
    //de dados repetidos    
    for(int i=0; i<tam; i++){
        freq[lista1[i]]++; //incrementa no próprio elemento de freq
    }
    
    for (int i=0; i<MAX_P; i++){
        if(freq[i]>1){
            cont++;
        }
    }
    return cont;
}


int main(){
   unsigned short n, m;
   while(scanf("%hu %hu", &n, &m) == 2 && (n != 0 || m != 0)){
       //enquanto os dois dados estiverem preenchidos dentro dos parametros
       if(n<=MAX_O && m<=MAX_P){
           ingresso codIng;
           for (unsigned short k=0; k<m; k++){
               scanf("%d", &codIng.dadoIng[k]); //passa a ser um array aqui
           }
           int contRept=compIng(codIng.dadoIng, m); //usa a função com o tamanho
           //m e os numeros registrados
           printf("%d\n", contRept);
       }
   }

    return 0;
}
