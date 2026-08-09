#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    if(max<=0){
        cout<<1;
        return 0;
    }

    int visited[max+1];

    for(int i=0;i<=max;i++)
        visited[i]=0;


    for(int i=0;i<n;i++){
        if(arr[i]>0 and arr[i]<=max)
            visited[arr[i]]=1;
    }

    for(int i=max;i>=1;i--){
        if(visited[i]==0){
            cout<<i;
            return 0;
        }
    }
    cout<<max+1;
    return 0;
}