#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, i, j;
    cout<<"Enter a number: ";
    cin>>n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= (n+1); j++){
            cout<<4<<" ";
        }
        cout<<endl;
    }
}