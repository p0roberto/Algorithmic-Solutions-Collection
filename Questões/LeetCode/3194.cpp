class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int tam = nums.size();
        float result;
        sort(nums.begin(), nums.end());
        float menor = nums[0] + nums[tam-1];

        for(int i = 0, j = tam - 1; i < tam/2; i++, j--){
            if(nums[i] + nums[j] < menor) menor = nums[i] + nums[j];
        } 

        result = menor/2;
        return result;
    }
};