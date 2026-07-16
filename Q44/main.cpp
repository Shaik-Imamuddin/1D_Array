#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],leaders[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mfr = arr[n-1];
    int ind=0;
    leaders[ind++] = mfr;

    for(int i=n-2;i>=0;i--){
        if(arr[i]>=mfr){
            mfr = arr[i];
            leaders[ind++]=mfr;
        }
    }

    for(int i=ind-1;i>=0;i--){
        cout<<leaders[i]<<" ";
    }

    return 0;
}