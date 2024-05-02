#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i<=n; i = i+1){
        for(int j = i; j>=1; j = j-1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}