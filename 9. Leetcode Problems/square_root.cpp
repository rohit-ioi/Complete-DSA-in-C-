
/**if (x == 0 || x == 1)
            return x;

        long start = 1;
        long end = x;
        long ans;

        while (start <= end) {
            long mid = start + (end - start) / 2;

            if (mid * mid == x)
                return mid;

            if (mid * mid < x) {
                start = mid + 1;
                ans = mid;
            } else {
                end = mid - 1;
            }
        }
        return ans;
        **/


class Solution {
public:
    long mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;

        for (long i = 1; i <= x; ++i) {
            if (i * i == x)
                return i;
            else if (i * i > x)
                return i - 1;
        }
        return -1; // Default return value if x is negative (or handle appropriately)
    }
};
