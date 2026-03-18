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
        if (arr[i]%2==0){
            int temp=arr[i];
            for(int j=i;j>start;j--){
                arr[j]=arr[j-1];
            }
            arr[start]=temp;
            start++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}