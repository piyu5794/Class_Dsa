#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"eneter elements of array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max=arr[0];
    
    for(int i=0; i<n; i++){
        if(max<arr[i]) max =arr[i];
    }
     cout<<"maximum element : "<<max;

}
