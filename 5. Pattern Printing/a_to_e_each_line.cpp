#include<iostream>
using namespace std;
int main(){
    int n,i;
    int j;
    cout << "Enter a number: ";
    cin >> n;
    for(i = 1; i <= n; i++){
        char name = 'a' + (i - 1);
        for(j = 1; j <= n; j++){
            cout << name << " ";
            
        }

        cout << endl;
        
    }
}
