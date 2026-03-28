#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0],secmin=arr[n-1];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            secmin=min;
            min=arr[i];
        }
        else if(arr[i]<secmin && arr[i]!=min){
            secmin=arr[i];
        }
    }
    cout<<secmin;
    return 0;
}