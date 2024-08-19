#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
       
        std::unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0;
        int prevValue = 0;

       
        for (int i = s.size() - 1; i >= 0; --i) {
            char currentChar = s[i];
            int currentValue = romanMap[currentChar];

           
            if (currentValue < prevValue) {
                total -= currentValue;
            } else {
               
                total += currentValue;
            }

            
            prevValue = currentValue;
        }

        return total;
    }
};
