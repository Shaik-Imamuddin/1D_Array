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

    int start=0,currsum=0,maxlen=0;

    for(int end=0;end<n;end++){
        currsum+=arr[end];
        
        while(currsum>target && start<=end){
            currsum-=arr[start];
            start+=1;
        }

        if(currsum==target){
            int len = end-start+1;
            if(len>maxlen)
                maxlen = len;
        }
    }
    cout<<maxlen<<" ";
    return 0;
}