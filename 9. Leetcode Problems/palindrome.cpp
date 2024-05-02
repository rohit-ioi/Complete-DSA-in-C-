class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int ans = 0, num = x, rem;
        while(x!=0){
            rem = x%10;
            x = x/10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10)
            return false;
            ans = ans *10 + rem;

        }
        if(ans == num)
        return true;
        else
        return false;
    }
};

