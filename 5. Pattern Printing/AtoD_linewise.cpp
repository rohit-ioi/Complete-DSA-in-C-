#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = n; i>=1; i--){
        char name = 'A';
        for(int j = 1; j<=i; j++){
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }

}