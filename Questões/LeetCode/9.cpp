class Solution {
public:
    bool isPalindrome(int x) {
        string palavra = to_string(x);
        string invert = palavra;
        
        reverse(invert.begin(), invert.end());

        return palavra == invert;

    }
};