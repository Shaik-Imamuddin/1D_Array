#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxprod = arr[0];
    int minprod = arr[0];
    int ans = arr[0];

    for(int i=1;i<n;i++){
        int curr = arr[i];

        if(curr<0){
            int temp = maxprod;
            maxprod = minprod;
            minprod = temp;
        }

        if(curr>maxprod*curr)
            maxprod = curr;
        else
            maxprod=maxprod*curr;

        if(curr<minprod*curr)
            minprod=curr;
        else
            minprod=minprod*curr;

        if(maxprod>ans)
            ans = maxprod;
    }

    cout<<ans;
    return 0;
}