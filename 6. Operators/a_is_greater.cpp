#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number: ";
    cin>>a>>b>>c;
    if(a>b || a>c){
        cout<<"a is greater than b or c"<<endl;
    }
    else{
        cout<<"Not greater"<<endl;
    }
}