#include<iostream>
using namespace std;

int main(){

    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int i=0,j=0,k=0;
    int res[n1+n2];

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
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
        i++;
        k++;
    }

    while(j<n2){
        res[k]=arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<n1+n2;i++){
        cout<<res[i]<<" ";
    }
    

    return 0;
}