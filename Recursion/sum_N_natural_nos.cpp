#include<iostream>
using namespace std;

void sum(int a, int b){   //parameterised
    if(b==0){
        cout<<a;
        return;
    }
    sum(a+b,b-1);
}
int s(int n){            //return type
    if(n==0) return 0;
    return n + s(n-1);
}

int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    sum(0,n);
    s(n);
    cout<<endl<<s(n);    
}
