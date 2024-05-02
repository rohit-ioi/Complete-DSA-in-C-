#include<iostream>
using namespace std;

int reverse_no(int n){
    int ans = 0;
    while(n!=0){
        ans = ans*10 + n%10;
        n = n/10;
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The reverse of "<<n<<" is: "<<reverse_no(n);
    return 0;

}