#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((a-b)%10<9)
        printf("%d",a-b+1);
    else
        printf("%d",a-b-1);
    return 0;
}
