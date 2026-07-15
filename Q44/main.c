/*
An element is a leader if it is greater than or equal to all elements to its right.
The rightmost element is always a leader.
*/

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n],leaders[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int mfr = arr[n-1]; //maximum element from right
    int ind = 0;
             
    leaders[ind++] = mfr;

    for(int i=n-2;i>=0;i--){
        if(arr[i]>=mfr){
            mfr = arr[i];
            leaders[ind++] = mfr;
        }
    }

    for(int i=ind-1;i>=0;i--){
        printf("%d ",leaders[i]);
    }

    return 0;
}