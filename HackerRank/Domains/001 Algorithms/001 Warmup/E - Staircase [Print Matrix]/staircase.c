#include<stdio.h>

int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=0;j<N-i;j++)
            printf(" ");
        for(j=N-i;j<N;j++)
            printf("#");
        printf("\n");
    }
    return 0;
}

