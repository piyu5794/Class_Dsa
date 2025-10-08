#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=v.size();
    int tar;
    cout<<"enter a target :";
    cin>>tar;
    bool flag=false;
    int h=n-1,l=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(v[mid]==tar){
            if(v[mid-1]==tar) h=mid-1;
            else{
                cout<<mid;
                flag =true;
                break;
            }
        }
        if(v[mid]>tar) h=mid-1;
        if(v[mid]<tar) l=mid+1;
    }
        if(flag==false) cout<<-1;
}
