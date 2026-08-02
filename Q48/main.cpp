#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int visited[n+1];

    for(int i=0;i<=n;i++){
        visited[i]=0;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=1 && arr[i]<=n)
            visited[arr[i]]=1;
    }

    for(int i=1;i<n;i++){
        if(visited[i]==0){
            cout<<i;
            return 0;
        }
    }

    cout<<n+1;
    return 0;
}