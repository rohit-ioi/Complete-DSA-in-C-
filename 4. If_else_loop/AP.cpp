#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 220,d = 7;
    cout<<"Enter first term: "<<a<<endl;
    
    cout<<"Enter common difference: "<<d<<endl;
    
    for(int i=a; i<=730; i = i+d){
        cout<<i<<" ";
    }
}