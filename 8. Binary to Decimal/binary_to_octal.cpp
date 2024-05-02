#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int ans=0;
    int mul=1;
    while(n>0){
        int rem=n%10;
        n=n/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans<<endl;
    

    cout<<ans<<endl;
    int ans_1=0;
    int multi=1;
    while(ans>0){
        int remin=ans%8;
        ans=ans/8;
        ans_1=remin*multi+ans_1;
        multi=multi*10;
    }
    cout<<ans_1<<endl;

}
