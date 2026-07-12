#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int candidate=0,count=0;

    for(int i=0;i<n;i++){
        if(count==0)
            candidate=arr[i];
        
        if(arr[i]==candidate)
            count+=1;
        else
            count-=1;
    }
    
    count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate)
            count++;
    }
    if(count>n/2)
        cout<<candidate;
    else
        cout<<"No Majority Element";

    return 0;
}