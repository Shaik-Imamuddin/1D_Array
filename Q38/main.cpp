#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int start=0,end;
    int currsum=0;

    for(end=0;end<n;end++){
        currsum+=arr[end];

        while(currsum>target && start<=end){
            currsum-=arr[start];
            start+=1;
        }
        if(currsum==target)
            break;
    }

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}