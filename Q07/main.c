#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[start];
            arr[start]=temp;
            start++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

/*

int start=0;
for(int i=0;i<n;i++){
    if(arr[i]==0)
        continue;
    arr[start]=arr[i]
    start++;
}
while start<n:
    arr[start]=0;
    start++

*/