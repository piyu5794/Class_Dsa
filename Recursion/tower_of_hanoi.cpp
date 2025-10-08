#include<iostream>
using namespace std;
void hanoi(int n,char a, char b, char c){ //a-->sourcec b-->helper c-->destination
    if(n==0) return ; //base case
    hanoi(n-1,a,c,b);
    cout<<a<<"-->"<<c<<endl;
    hanoi(n-1,b,a,c);
}

int main()
{
    int n;
    cout<<"enter te number of disks :";
    cin>>n;
    hanoi(n,'A','B','C'); // A,B,C are the names of the rods
    
}
