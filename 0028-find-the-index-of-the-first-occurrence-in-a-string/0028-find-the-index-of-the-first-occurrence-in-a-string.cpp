class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0) {
            return 0;
        }
        
        int n = haystack.length();
        int m = needle.length();
        
        for (int i = 0; i <= n; i++) {
            int j;
            for (j = 0; j < m; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == m) {
                return i; 
            }
        }
        
        return -1; 
    }
};
