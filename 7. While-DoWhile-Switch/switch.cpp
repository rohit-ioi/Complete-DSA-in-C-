#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    switch(i){
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        default:
            cout<<"Greater than five"<<endl;
    }
} 