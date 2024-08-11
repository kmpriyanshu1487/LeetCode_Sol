class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        int sign = x < 0 ? -1 : 1;
        x = abs(x);
        
        while (x != 0) {
            int lastdigit = x % 10;
            x /= 10;
            
            if (reversed > (INT_MAX - lastdigit) / 10) {
                return 0;
            }
            
            reversed = reversed * 10 +lastdigit;
        }
        
        return sign * reversed;
    }
};



