#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int current=1,longest=1;

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)
            current++;
        else if(arr[i]!=arr[i-1])
            current=1;
        if(current>longest)
            longest = current;
    }
    cout<<longest;
    return 0;
}