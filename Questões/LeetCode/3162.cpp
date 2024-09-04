class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int tam1 = nums1.size();
        int tam2 = nums2.size();
        int result = 0;

        for(int i = 0; i < tam1; i++){
            for(int j = 0; j < tam2; j++){
                if(nums1[i] % (nums2[j]*k) == 0) result++;
            }
        }

        return result;
    }
};