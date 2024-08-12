class Solution {
public:
    int myAtoi(const std::string& s) {
        int index = 0;
        int sign = 1;
        int result = 0;
        int n = s.length();
        
      
        while (index < n && s[index] == ' ') {
            index++;
        }
        
        if (index < n && (s[index] == '+' || s[index] == '-')) {
            sign = (s[index] == '-') ? -1 : 1;
            index++;
        }
        
        
        while (index < n && std::isdigit(s[index])) {
            int digit = s[index] - '0';
            
            
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            index++;
        }
        
        return sign * result;
    }
};