#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    if(n<2){
        cout<<"Not prime"<<endl;
        return 0;
    }
    else{
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"Prime does not exist"<<endl;
            return 0;
        }

    }
    }

    cout<<"Prime number"<<endl;
}