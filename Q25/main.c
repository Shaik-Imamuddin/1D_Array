#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("%d",n+1);
    return 0;
}


//By using formula

// #include<stdio.h>
// int main(){
//     int n,actsum=0;
//     scanf("%d",&n);

//     int expsum=((n+1)*(n+2))/2;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         actsum+=arr[i];
//     }
//     printf("%d",expsum-actsum);
//     return 0;
// }