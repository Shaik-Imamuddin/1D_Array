#include<stdio.h>

int main(){

    int n1,n2;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    int i=0,j=0,k=0;
    int res[n1+n2];

    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            res[k]=arr1[i];
            i++;
        }
        else{
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        res[k]=arr1[i];
        i++;k++;
    }

    while(j<n2){
        res[k]=arr2[j];
        j++;k++;
    }

    int total=n1+n2;
    double median;

    if(total%2==0)
        median=(res[total/2-1]+res[total/2])/2.0;
    else
        median=res[total/2];

    printf("%.2lf\n",median);

    return 0;
}