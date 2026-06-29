#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int cursum=arr[0];
    int maxsum = cursum;

    for(int i=1;i<n;i++){
        if(cursum+arr[i]>arr[i])
            cursum+=arr[i];
        else
            cursum=arr[i];

        if (cursum>maxsum)
            maxsum=cursum;
    }
    printf("%d",maxsum);
    return 0;
}