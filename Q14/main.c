#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            printf("Not sorted in Ascending Order");
            return 0;
        }
    }

    printf("Sorted in Ascending Order");
    return 0;
}







//Two Pointer Approach

/*

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }    
    int start=0,end=n-1;
    while(start<=end){
        if(arr[start]>arr[end]){
            printf("Not sorted in Ascending Order");
            return 0;
        }
        start++;end--;
    }
    printf("Sorted in Ascending Order");
    return 0;
}

*/