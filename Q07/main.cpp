#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[start];
            arr[start]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}