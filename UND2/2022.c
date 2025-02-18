//Developed by: @jtfrl
//Beecrowd: n. 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nomeP[30];
    float p;
    int pref;
}presente;


int compare(const void *a, const void *b){
    presente *p1 =(presente *)a;
    presente *p2 =(presente *)b;
    
    //comparacao de preferencia
    if(p1->pref != p2->pref){
        return p2->pref - p1->pref;
    } //acessa um campo de memória com
    //ponteiro (por causa da estrutura de 'presente')
    //cada seta aponta para um endereço genérico
    
    //caso preferencia igual, compara preço
    if(p1->p!=p2->p){
        return (p1->p > p2->p)-(p1->p < p2->p);
    }
    
    
    return strcmp(p1->nomeP, p2->nomeP);
}


int main(){
   char nome[20]; //nome da pessoa
   unsigned short b; //numero de presentes 
   char line[100]; //leitura completa de linha
   while(fgets(line, sizeof(line), stdin)){ //util para ler nomes com espaço
       if(sscanf(line, "%s %hu", nome, &b) == 2 && nome && (b>=1 && b<=100)){ 
           //condições dos inputs
           presente *listaPpl=(presente *)malloc(b * sizeof(presente));
           
           if(listaPpl==NULL){
               return 1;
           }
           for (int i=0; i<b; i++){
                //toma nome, preço e preferencia
                if(fgets(line, sizeof(line), stdin)){
                    //remove caractere extra
                    line[strcspn(line, "\n")]=0;
                    strcpy(listaPpl[i].nomeP, line); 
                }//separa-se para melhorar a leitura dos inputs
                if(fgets(line, sizeof(line), stdin)){
                    sscanf(line, "%f %d", &listaPpl[i].p, &listaPpl[i].pref);
                }
           }
           
           qsort(listaPpl, b, sizeof(presente), compare);
            //importante indicar sizeof do tipo 'presente'  
               
               
        
            printf("Lista de %s\n", nome);  //sem tamanho, ja que é implicito ser um array
            for(int j=0; j<b; j++){
                printf("%s - R$%.2f\n", listaPpl[j].nomeP, listaPpl[j].p);
            }
        
         printf("\n");
       
          free(listaPpl); 
           
       }
   }
   
   
    return 0;
}

