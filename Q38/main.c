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

    int currsum=0;
    int start=0,end;

    for(end=0;end<n;end++){
        currsum+=arr[end];

        while (currsum>target && start<=end){
            currsum -= arr[start];
            start+=1;
        }
        if(currsum==target)
            break;
    }
    for(int i=start;i<=end;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//sliding window + two pointers

/*

expand the window by moving end
shirnk the window by moving start when sum becomes too large

*/