#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    if(max<=0){
        printf("1");
        return 0;
    }

    int visited[max+1];

    for(int i=0;i<=max;i++)
        visited[i]=0;

    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<=max)
            visited[arr[i]]=1;
    }

    for(int i=max;i>=1;i--){
        if(visited[i]==0){
            printf("%d",i);
            return 0;
        }
    }

    printf("%d",max+1);
    return 0;
}