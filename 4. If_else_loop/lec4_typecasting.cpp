// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int a = 10;
//     char c = 'b';
//     a = c;
//     cout<<a;
// }

// int main(){
//     int a = 66;
//     char c = 'b';
//     c = a;    // here c will get value 66 which is the ascii value of B and finally typecasting will be done
//     cout<<c; 
// }
// If there is 32 bit number and we want to assign this value to the 8 bit character then char will take only the 8 bit out 32 bit and give corresponding ASCII value/character while typecasting
// THere will be data loss while typecasting from higher data type to lower data type  but there will no data loss while typecasting from smaller data type to higher data type
// bool -> char -> int -> long


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 10;
    char c =  'b';
    a = c;
    cout<<a;
}