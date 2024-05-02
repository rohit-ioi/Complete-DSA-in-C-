#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int count = 2; count<=n; count+=2){
        cout<<count<<endl;
    }
}
