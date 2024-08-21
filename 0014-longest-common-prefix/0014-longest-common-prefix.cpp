class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

       
        string prefix = strs[0];

        
        for (size_t i = 1; i < strs.size(); ++i) {
            const string& current = strs[i];
            size_t j = 0;

            
            while (j < prefix.size() && j < current.size() && prefix[j] == current[j]) {
                ++j;
            }

            
            prefix = prefix.substr(0, j);

           
            if (prefix.empty()) {
                break;
            }
        }

        return prefix;
    }
};