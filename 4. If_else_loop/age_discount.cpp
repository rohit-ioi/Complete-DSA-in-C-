#include<iostream>
#include<vector>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    if(age<12 || age>65){
        cout<<"Eligible for discount"<<endl;
    }
    else{
        cout<<"No discount"<<endl;
    }

}