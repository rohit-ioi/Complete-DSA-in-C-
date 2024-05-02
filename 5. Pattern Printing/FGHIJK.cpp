#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        char name = 'F';
        for(char j = name ; j <='K'; j = j + 1){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}