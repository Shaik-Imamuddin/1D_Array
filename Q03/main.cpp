#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
            sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}