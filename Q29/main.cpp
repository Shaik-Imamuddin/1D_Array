#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n],res[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k=0;

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<k;j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count==0){
            res[k]=arr[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}