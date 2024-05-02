#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n; //5
    int i=1;
    int fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<fact<<endl;
}