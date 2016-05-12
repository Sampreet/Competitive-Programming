#include<stdio.h>
#include<stdlib.h>

int partition(int *arr,int low,int high){
    int pivot=arr[high],i=low,j,temp;
    for(j=low;j<high;j++){
        if(arr[j]<=pivot){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    temp=arr[i];
    arr[i]=arr[high];
    arr[high]=temp;
    return i;
}

void findMedian(int *arr,int low,int high,int N){
    if(low<high){
        int p=partition(arr,low,high);
        if(p>N/2){
            findMedian(arr,low,p-1,N);
        }
        if(p<N/2)
            findMedian(arr,p+1,high,N);
    }
}

int main(){
    int i,*arr,N;
    scanf("%d",&N);
    arr=(int*)malloc(N*sizeof(int));
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    findMedian(arr,0,N-1,N);
    printf("%d",arr[N/2]);
    free(arr);
    return 0;
}
