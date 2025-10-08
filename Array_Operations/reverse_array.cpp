#include<iostream>
#include<vector>

using namespace std;

void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int> v{1,3,2,4,3,4,1,6};
    display(v);

        //swap two vectors to rverse
        for(int i=0, j=v.size()-1; j>=i;i++, j--){
            int temp =v[i];
            v[i]=v[j];
            v[j]=temp;
        
    }
        //creting a new vector to reverse
    // vector<int>v1(v.size());
    // for(int i=0; i<v.size(); i++){
    //     v1[i]=v[v.size()-1-i];
    // }
    
    display(v);

    return 0;
}
