#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, sum;
    cout<<"Enter number: "<<endl;
    cin>>n;
    sum = 0;
    for(int i=1; i<n+1; i++){
        sum = sum + i*i*i;
    }
    cout<<sum;
}