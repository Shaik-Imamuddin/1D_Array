#include<stdio.h>

int main(){

    int n,total=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
    }

    int start=0;

    for(int i=0;i<n;i++){
        int end = total-start-arr[i];
        if(start==end){
            printf("%d",i);
            return 0;
        }
        start+=arr[i];
    }
    printf("-1");
    return 0;
}