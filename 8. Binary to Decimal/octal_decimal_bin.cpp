#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rem;
    int mul = 1;
    int ans = 0;
    while(n>0){
        rem = n%10;
        n = n/10;
        ans = rem*mul + ans;
        mul = mul*8;
    }
    cout<<ans<<endl;


    cout<<ans<<endl;
    int remin, ans_1 = 0, multi =1;
    while(ans>0){
        remin = ans%2;
        ans = ans/2;
        ans_1 = remin*multi + ans_1;
        multi = multi*10;   
    }
    cout<<ans_1<<endl;
}