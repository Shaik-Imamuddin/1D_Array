#include<iostream>
using namespace std;

int main(){

    int n,total=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }

    int start=0;

    for(int i=0;i<n;i++){
        int end = total-start-arr[i];
        if(start==end){
            cout<<i;
            return 0;
        }
        start+=arr[i];
    }
    cout<<-1;
    return 0;
}