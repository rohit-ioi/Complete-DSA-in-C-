#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int count = 1; count<=n; count++){
        cout<<count*count<<endl;
    }
}