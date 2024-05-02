#include<iostream>
#include<vector>
using namespace std;
/** int main(){
    char name = 'a';
    name = 'a' + 1;
    cout<<name;      // name stores 'b' now

}

**/

int main(){
    char name;
    for(name = 'a'; name <= 'z'; name = name + 1){
        cout<<name<<" ";
    }
}