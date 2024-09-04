class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int tam = nums.size();
        vector<int> vet(tam*2);

        for(int i = 0; i < tam; i ++){
            vet[i] = nums[i];
            vet[i+tam] = nums[i];
        }

        return vet;
    }
};