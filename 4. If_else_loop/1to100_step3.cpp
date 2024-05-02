#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(int i=1; i<n+1; i+=3){
        cout<<i<<endl;
    }
}