#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>temp;
    if(temp>70 && temp<90){
        cout<<"Temperature is normal"<<endl;
    }
    else{
        cout<<"Temperature is not normal"<<endl;
    }
}