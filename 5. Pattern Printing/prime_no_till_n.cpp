#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num,i,count,n,isPrime;
    cout << "Enter a Number between 30 and 2000: ";
    cin >> n;
    count=0;
    for(num = 1; count<=n; num++){
        isPrime = 0;
        count++;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                isPrime++;
                break;
            }
        }

        if(isPrime==0 && num!= 1)
            cout << num << endl;
    }


    return 0;

} 





