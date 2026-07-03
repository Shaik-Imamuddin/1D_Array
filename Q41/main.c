#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int maxprod = arr[0];
    int minprod = arr[0];
    int ans = arr[0];

    for(int i=1;i<n;i++){
        int curr = arr[i];

        if(curr<0){
            int temp = maxprod;
            maxprod = minprod;
            minprod = temp;
        }

        if(curr>maxprod*curr)
            maxprod=curr;
        else
            maxprod=maxprod*curr;
        

        if(curr<minprod*curr)
            minprod=curr;
        else
            minprod=minprod*curr;

        
        if(maxprod>ans)
            ans = maxprod;

    }

    printf("%d",ans);
    return 0;
}