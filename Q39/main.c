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

    int start=0,currsum=0,maxlen=0;

    for(int end=0;end<n;end++){
        currsum+=arr[end];

        while(currsum>target && start<end){
            currsum-=arr[start];
            start++;
        }

        if(currsum==target){
            int len = end-start+1;
            if(len>maxlen)
                maxlen=len;
        }
    }

    printf("%d",maxlen);
    return 0;
}