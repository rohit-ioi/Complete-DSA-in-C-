#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,i,j;
     int count = 1;
    for(i = 1; i <= 5; i++){
       
        for(j = count; j <= (count + 4); j++){
            cout << j << " ";
            
        }
        count = count + 5;
        cout << endl;
    }

}

