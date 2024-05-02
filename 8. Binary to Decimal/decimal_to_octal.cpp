#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int ans=0;
    int mul=1;
    while(n>0){
        int rem=n%8;
        n=n/8;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans<<endl;
    return 0;
}
