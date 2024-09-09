#include <algorithm>
#include <vector>
#include <numeric>

class Solution {
public:
    int findGCD(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = gcd(nums.front(), nums.back());
        return result;
    }
};