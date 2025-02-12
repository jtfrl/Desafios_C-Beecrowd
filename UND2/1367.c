//Developed by: @jtfrl
//Beecrowd: n. 1367.c
/*
**********************
* 
* alguns disclaimers
* 
* ::: unsigned short representa inteiros nao negativos
* ::: que tem um tamanho menor que int. 
  ::: eles são usados aqui pra economizar espaço na memoria

* ::: funcoes do tipo bool são necessarias aqui, para checagem
* ::: no momento de saber, por exemplo, 
  ::: se uma questao existe ou nao no banco de questoes
  
* ::: em alguns contextos, como esse, o main pode vir com void
* ::: já que são as outras funcoes que virao com o papel de dar retorno

***********************

*/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool pQuestao(const char *idQuestoes, char questao);
unsigned short pQuestaPos(const char *idQuestoes, char questao);

int main()
{
    unsigned short casos, i, tQuestao;
    unsigned short qtsTempoTotal, qtsCertas;
    char jlgmto[15], questao;

    while (true) //varios casos teste
    {
        scanf("%hu", &casos); //armazena poucos dados na memoria
//aqui nao é array, entao lembre-se de usar &

        if (casos == 0)
        {
            break;
        }

        i = 0; // numero de questoes
        qtsCertas = 0; 
        qtsTempoTotal = 0; //acumulador de tempo 
        char idQuestoes[casos]; //vetor que armazena questoes
        unsigned short qtsErros[casos]; //penalidade de cada incorreção

	//zera a memoria: uso do memset
        memset(qtsErros, 0, sizeof(qtsErros));
        memset(idQuestoes, 0, sizeof(idQuestoes));

        while (casos--)
        {
            scanf(" %c %hu %s", &questao, &tQuestao, jlgmto);
//jlgmto sem & porque é array
            if (pQuestao(idQuestoes, questao))
            {
                if (strcmp(jlgmto, "correct") == 0) //comparação
                {
                    qtsCertas++;
                    qtsTempoTotal += tQuestao + qtsErros[pQuestaPos(idQuestoes, questao)];
                }
                else
                {
                    qtsErros[pQuestaPos(idQuestoes, questao)] += 20;
                }
            }
            else
            {
                if (strcmp(jlgmto, "correct") == 0)
                {
                    qtsCertas++;
                    idQuestoes[i] = questao;
                    qtsTempoTotal += tQuestao;
                    i++;
                }
                else
                {
                    idQuestoes[i] = questao;
                    qtsErros[i] += 20;
                    i++;
                }
            }
        }

        if (qtsCertas == 0)
        {
            printf("0 0\n");
        }
        else
        {
            printf("%hu %hu\n", qtsCertas, qtsTempoTotal);
        }
    }

    return 0;
}

//verifica se ja tinha a questao

bool pQuestao(const char *idQuestoes, char questao)
{
    while (*idQuestoes)
    {
        if (*(idQuestoes++) == questao)
        {
            return true;
        }
    }
    return false;
}

unsigned short pQuestaPos(const char *idQuestoes, char questao)
{
    unsigned short i = 0;

    while (idQuestoes[i])
    {
        if (idQuestoes[i] == questao)
        {
            return i;
        }
        i++;
    }

    return -1; //se nao achar a posicao repetida, retorna -1
}

