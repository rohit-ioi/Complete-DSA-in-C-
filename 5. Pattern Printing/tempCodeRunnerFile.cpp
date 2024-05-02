#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 6; i<=n; i++){
        for(int j = 10; j<=(j+i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}