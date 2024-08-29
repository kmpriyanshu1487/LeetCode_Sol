#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;

        
        vector<string> phoneMap = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

       
        backtrack(result, phoneMap, digits, "", 0);

        return result;
    }

private:
    
    void backtrack(vector<string>& result, const vector<string>& phoneMap, const string& digits, string current, int index) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = phoneMap[digits[index] - '0'];
        for (char letter : letters) {
            backtrack(result, phoneMap, digits, current + letter, index + 1);
        }
    }
};

