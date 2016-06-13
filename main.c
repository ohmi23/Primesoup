#include <stdio.h>
#include <stdlib.h>

int main(){
    int limit = 10000;
    unsigned long long int i,j;
    int *primes;
    int z = 1;

    primes = malloc(sizeof(int)*limit);

    for (i=2;i<limit;i++)
        primes[i]=1;

    for (i=2;i<limit;i++)
        if (primes[i])
            for (j=i;i*j<limit;j++)
                primes[i*j]=0;

    for (i=2;i<limit;i++)
        
        if (primes[i])
            printf("\\");
        else
            printf(" ");
    
return 0;
}

