#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int j;
    int k;
        for(i=0; i<=10;i++)
        {
            printf("Premier for");
            for(j=0; j<=10;j++)
                {
                    printf("deuxieme for");
                }
        }

        do
        {
            k+=1;
            printf("%d", k);
        } while (k<200);

    return 0;
}