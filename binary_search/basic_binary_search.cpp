#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,2,4,5,9,15,18,21,24};
    cout<<"enter target :";
    int tar, n=v.size();
    bool flag=false;
    cin>>tar;
    // for(int i=0; i<n;i++){
    //     if(v[i]==tar){
    //         flag =true;
    //         break;
    //     }
    // }
    // if(flag==true) cout<<"target is present ";
    // else cout<<"target is not present ";
    
    //uisng binary search operation
    int l=0,h=n-1;
    for(int i=0; i<n; i++){
        int mid=(l+h)/2;
        if(v[mid]==tar){
            flag=true;
            break;}
        if(v[mid]<tar) l=mid+1;
        if(v[mid]>tar) h=mid-1;
    }
    if(flag==true) cout<<"target is present ";
    else cout<<"target is not present ";
}
