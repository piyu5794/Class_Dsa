#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enetr elements of array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        // cout<<endl;
    }

    int x;
    cout<<"enter an element :";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"element is present "<<endl;
            break;
        }
        cout<<"element is finding"<<endl;

        // if(arr[n-1]!=x){
        //     cout<<"element is not present ";
        // }
        if(i==n-1 && arr[i]!=x){
            cout<<"element is not present ";
        }
    }

    return 0;
} 
