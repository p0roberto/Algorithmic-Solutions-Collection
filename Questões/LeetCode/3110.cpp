class Solution {
public:
    int scoreOfString(string s) {
        int tam = s.size();
        int result = 0;
        for(int i = 1; i < tam; i ++){
            result += abs(s[i-1] - s[i]);
        }

        return result;
    }
};