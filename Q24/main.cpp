#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0,mid=0,end=n-1;

    while(mid<=end){
        if(arr[mid]==0){
            int temp=arr[mid];
            arr[mid]=arr[start];
            arr[start]=temp;
            start++;
            mid++;
        }
        else if(arr[mid]==1)
            mid++;
        else{
            int temp=arr[mid];
            arr[mid]=arr[end];
            arr[end]=temp;
            end--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}