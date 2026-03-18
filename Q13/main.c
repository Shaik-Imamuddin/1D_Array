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
        if(arr[i]%2==0){
            int temp=arr[i];
            for(int j=i;j>start;j--){
                arr[j]=arr[j-1];
            }
            arr[start]=temp;
            start++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}