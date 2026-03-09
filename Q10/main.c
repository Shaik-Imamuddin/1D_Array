#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int res[n];
    for(int i=0;i<n;i++){
        res[i]=arr[n-i-1];
        printf("%d ",res[i]);
    }
    return 0;
}