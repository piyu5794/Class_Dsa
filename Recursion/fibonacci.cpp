#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cout<<"enter term of fibonacci :";
    cin>>n;
    cout<<fib(n)<<endl;
    int a=1,b=1,c;
    cout<<"1"<<" "<<"1"<<" ";
    for(int i=0; i<n-2; i++){
        c=a+b;
        b=a;
        a=c;
        cout<<c<<" ";
    }
}
