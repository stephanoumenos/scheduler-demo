#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int a[5], n, i;
    uint8_t executado;

    scanf("%u %u %u %u %u %u", &a[0], &a[1], &a[2], &a[3], &a[4], &n);

    for (i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
        executado=0;
        if(i%a[0]==0){
            printf("0");
            executado=1;
        }
        if(i%a[1]==0){
            printf("1");
            executado=1;
        }
        if(i%a[2]==0){
            printf("2");
            executado=1;
        }
        if(i%a[3]==0){
            printf("3");
            executado=1;
        }
        if(i%a[4]==0){
            printf("4");
            executado=1;
        }
        if(!executado)
            printf("-");
        printf("\n");
    }

    return 0;
}
