#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, fact;
    cout<<"Enter number: "<<endl;
    cin>>n;

    fact = 1;
    for(int i=1; i<n+1; i++){
        fact = fact*i;
    }
    cout<<"Final number: "<<fact;
}