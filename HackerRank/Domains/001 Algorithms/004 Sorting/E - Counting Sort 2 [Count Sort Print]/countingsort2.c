#include<stdio.h>

int main(){
    int N,arr[100]={0},x;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&x);
        arr[x]++;
    }
    for(x=0;x<100;x++){
        for(N=0;N<arr[x];N++)
            printf("%d ",x);
    }
    return 0;
}

