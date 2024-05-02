#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(int i=1; i<11; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}