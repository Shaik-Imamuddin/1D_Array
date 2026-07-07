#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int maxcount=0,res=arr[0];
    
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count>maxcount){
            maxcount = count;
            res=arr[i];
        }
    }
    printf("%d",res);
    return 0;
}