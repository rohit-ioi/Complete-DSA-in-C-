#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, i, power, num;
    cout<<"Enter number to be powered: "<<endl;
    cin>>n;
    cout<<"Enter power: "<<endl;
    cin>>power;

    num = n;
    for(int i=1; i<power; i++){
        num = num * n;
    }
    cout<<"Final powered number: "<<num<<endl;
}