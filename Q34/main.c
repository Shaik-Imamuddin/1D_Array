#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    scanf("%d",&target);

    int f=-1,l=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(f==-1)
                f=i;
            l=i;
        }
    }
    printf("%d %d",f,l);
}