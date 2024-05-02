
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int a = 10;
        for(int j = a; j<(a+i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
        }
    }
  