#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter a number: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        char name = 'a';
        for(j = 1; j <= n; j++){
            cout << name<<" ";
            name++;
        }
        cout << endl;
    }
}

