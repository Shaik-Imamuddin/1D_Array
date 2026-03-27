#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],secmax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax = max;
            max=arr[i];
        }
        else if(arr[i]>secmax && arr[i]!=max)
            secmax=arr[i];
    }
    cout<<secmax;
    return 0;
}