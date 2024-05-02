#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>0 && num%2==0){
        cout<<"The number is positive and even"<<endl;
    }
    else{
        cout<<"The number is not positive and even"<<endl;
    }
}