//Developed by: @jtfrl
//Beecrowd: n. 2693

/**********************************
VAN ESCOLAR

:: ordenar dados informados considerando a hierarquia
-1 distancia (crescente) 
-2 regiao (ordem alfabetica)
-3 nome (idem)

> q é a quantidade de alunos
> o input é colocado na seguinte ordem
nome - regiao - distancia

*********************************/
#include <stdio.h>
#include <string.h>

typedef struct{
    char nomeA[100];
    char dir;
    unsigned short dist;
}aluno;

void ordenaA(aluno *, unsigned short tam);

int main(){
    unsigned short q, i;
    while(scanf("%hu", &q)!=EOF){
        aluno listaA[q];
        for(i=0; i<q; i++){
            scanf("%s %c %hu", listaA[i].nomeA, &listaA[i].dir, &listaA[i].dist);
            //armazena nome, direcao e distancia
        }
    ordenaA(listaA, q);
        
    
    
        for(i=0;i<q;i++){
         printf("%s", listaA[i].nomeA);
         printf("\n");
        }
    }
    return 0;
}

void ordenaA(aluno *listaA, unsigned short tam){
    //short vai ser útil porque queremos valores pequenos
    
    short i=1, j;
    aluno temp;
    
    while(i<tam){
        j=i-1;
        temp=listaA[i];
        while(j>=0&&((listaA[j].dist > temp.dist ||
                       (listaA[j].dist == temp.dist && listaA[j].dir > temp.dir) ||
                       (listaA[j].dist == temp.dist && listaA[j].dir == temp.dir && strcmp(listaA[j].nomeA, temp.nomeA) > 0)))){
            listaA[j+1]=listaA[j];
            j--;
        }
        listaA[j+1]=temp;
        i++;
    }
    
}
 
