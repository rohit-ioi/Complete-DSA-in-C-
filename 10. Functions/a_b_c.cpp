#include<iostream>
using namespace std;

int replace(int a, int b, int c){
    int temp;
    c = temp;
    b = a;
    c = b;
    a = temp;
    cout<<a<<" "<<b<<" "<<c;
    

}
int main(){
    int a,b,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    cout<<"The replacement of these numbers is : "<< replace(a,b,c);
    return 0;
}