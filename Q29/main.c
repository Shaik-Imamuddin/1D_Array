#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    
    int arr[n],res[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int k=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<k;j++){
            if(arr[i]==res[j])
                count++;
        }
        if(count==0){
            res[k]=arr[i];
            k++;
        }
    }

    for(int i=0;i<k;i++){
        printf("%d ",res[i]);
    }

    return 0;
}