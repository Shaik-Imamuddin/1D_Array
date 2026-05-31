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

    int low=0,high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            printf("%d",mid);
            return 0;
        }
        else if(arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;

    }
    printf("-1");
    return 0;
}