class Solution {
public:
    
int lengthOfLastWord(string s) {
    int length = 0;
    bool char_found = false;

    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] != ' ') {
            char_found = true;
            length++;
        } else if (char_found) {
            break;
        }
    }

    return length;
}
};