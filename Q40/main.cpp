#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cursum=arr[0];
    int maxsum=cursum;

    for(int i=1;i<n;i++){
        if(cursum+arr[i]>arr[i])
            cursum+=arr[i];
        else
            cursum=arr[i];
        
        if (cursum>maxsum)
            maxsum=cursum;
    }
    cout<<maxsum;
    return 0;
}
