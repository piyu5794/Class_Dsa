#include<iostream>
#include<math.h>
using namespace std;

void maxarray(int arr[],int n,int idx,int ans){ 
    if(idx==n){
        cout<<ans;
        return;
    }
    if(arr[idx]>ans) ans=arr[idx];
    maxarray(arr,n,idx+1,ans);
}
int printmax(int arr[],int n,int idx){
    if(idx==n) return 0;
    return max(arr[idx],printmax(arr,n,idx+1));
}

int main()
{
    int arr[]={12,3,45,4,2,145,2,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    // maxarray(arr,n,0,0);
    cout<<printmax(arr,n,0);
}
