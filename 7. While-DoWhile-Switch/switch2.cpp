#include<iostream>
using namespace std;
int main(){
    char i;
    cout<<"Enter the character: ";
    cin>>i;
    switch(i){
        case 'a':
            cout<<"a is vowel"<<endl;
            break;
        case 'e':
            cout<<"e is vowel"<<endl;
            break;
        case 'i':
            cout<<"i is vowel"<<endl;
            break;
        case 'o':
            cout<<"o is vowel"<<endl;
            break;
        case 'u':
            cout<<"u is vowel"<<endl;
            break;
        default:
            cout<<"Not a vowel"<<endl;
    }
    
}