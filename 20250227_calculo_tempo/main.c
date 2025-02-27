// Calcular TEMPO DE PROCESSADOR na execução de determinado programa.
// Data de aula: 19/02/2025
// Fonte: <https://www.ibm.com/docs/pt-br/i/7.5?topic=functions-clock-determine-processor-time>

#include <time.h>
#include <stdio.h>
 
double time1, timedif;        /* use doubles to show small values */
 
int main(void)
{
    int  i;
 
    time1 = (double) clock();            /* get initial time */
    time1 = time1 / CLOCKS_PER_SEC;      /*    in seconds    */
 
    /* running the FOR loop 1000000 times */
    for (i=0; i<1000000; i++);
 
    /* call clock a second time */
    timedif = ( ((double) clock()) / CLOCKS_PER_SEC) - time1;
    printf("The elapsed time is %lf seconds\n", timedif);
}
