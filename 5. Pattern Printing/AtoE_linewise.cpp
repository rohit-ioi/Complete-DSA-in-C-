#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        char name = 'A';
        for(char j = name; j< name + (i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


