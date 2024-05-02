#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(i==n){
            for(int j = 1; j<i; j++){
                cout<<j<<" ";
            }
            cout<<endl;
            break;
        }
        
        for(int j = 1; j<= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



