// If any year is divided by 400, it's leap year
// If any year is divided by 4 and not by 100, it's leap year
// If any year is not divided by both 4 and 100, it's not leap year
#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;    
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }
    return 0;
}


/**
 * class Solution {
public:
    int addDigits(int num) {
        while(num >9){
        int ans = 0, rem;
        while(num != 0){
            rem = num%10;
            num/=10;
            ans +=rem;
            }
        num = ans;
        }
        return num;
        }

};
 * 
 * 
*/