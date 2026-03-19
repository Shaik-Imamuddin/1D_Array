#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Not sorted in Ascending Order";
            return 0;
        }
    }
    cout<<"Sorted in Ascending Order";
    return 0;
}